/* vi:set ts=8 sts=4 sw=4 noet:
 *
 * VIM - Vi IMproved	by Bram Moolenaar
 *
 * Do ":help uganda"  in Vim to read copying and usage conditions.
 * Do ":help credits" in Vim to see a list of people who contributed.
 * See README.txt for an overview of the Vim source code.
 */

/*
 * tabsidebar.c:
 */

#include "vim.h"

#if defined(FEAT_TABSIDEBAR) || defined(PROTO)

static void do_by_tsbmode(int tsbmode, int maxwidth, int* pcurtab_row, int* ptabpagenr);

// set pcurtab_row. don't redraw tabsidebar.
#define TSBMODE_GET_CURTAB_ROW	0
// set ptabpagenr. don't redraw tabsidebar.
#define TSBMODE_GET_TABPAGENR	1
// redraw tabsidebar.
#define TSBMODE_REDRAW		2

#define TSB_FILLCHAR		' '

/*
 * draw the tabsidebar.
 */
    void
draw_tabsidebar()
{
    int		save_got_int = got_int;
    int		maxwidth = tabsidebar_width();
    int		curtab_row = 0;
#ifndef MSWIN
    int		row = 0;
    int		off = 0;
#endif

    if (0 == maxwidth)
	return;

#ifndef MSWIN
    // We need this section only for the Vim running on WSL.
    for (row = 0; row < cmdline_row; row++)
    {
	if (p_tsba)
	    off = LineOffset[row] + Columns - maxwidth;
	else
	    off = LineOffset[row];

	vim_memset(ScreenLines + off, ' ', (size_t)maxwidth * sizeof(schar_T));
	if (enc_utf8)
	    vim_memset(ScreenLinesUC + off, -1, (size_t)maxwidth * sizeof(u8char_T));
    }
#endif

    // Reset got_int to avoid build_stl_str_hl() isn't evaluted.
    got_int = FALSE;
    do_by_tsbmode(TSBMODE_GET_CURTAB_ROW, maxwidth, &curtab_row, NULL);
    do_by_tsbmode(TSBMODE_REDRAW, maxwidth, &curtab_row, NULL);
    got_int |= save_got_int;

    redraw_tabsidebar = FALSE;
}

    int
get_tabpagenr_on_tabsidebar()
{
    int		maxwidth = tabsidebar_width();
    int		curtab_row = 0;
    int		tabpagenr = 0;

    if (0 == maxwidth)
	return -1;

    do_by_tsbmode(TSBMODE_GET_CURTAB_ROW, maxwidth, &curtab_row, NULL);
    do_by_tsbmode(TSBMODE_GET_TABPAGENR, maxwidth, &curtab_row, &tabpagenr);

    return tabpagenr;
}

    static void
screen_fill_tailing_area(
	int	tsbmode,
	int	start_row,
	int	end_row,
	int	col,
	int	maxwidth,
	int	attr)
{
    if (TSBMODE_REDRAW == tsbmode)
	screen_fill(start_row, end_row,
		(p_tsba ? COLUMNS_WITHOUT_TABSB() : 0) + col,
		(p_tsba ? COLUMNS_WITHOUT_TABSB() : 0) + maxwidth,
		TSB_FILLCHAR, TSB_FILLCHAR, attr);
}

    static void
screen_puts_len_for_tabsidebar(
	int	tsbmode,
	char_u	*p,
	int	len,
	int	maxrow,
	int	offsetrow,
	int	*prow,
	int	*pcol,
	int	attr,
	int	maxwidth)
{
    int		j, k;
    int		chlen;
    int		chcells;
    char_u	buf[IOSIZE];
    char_u*	temp;

    for (j = 0; j < len;)
    {
	if ((TSBMODE_GET_CURTAB_ROW != tsbmode) && (maxrow <= (*prow - offsetrow)))
	    break;

	if ((p[j] == '\n') || (p[j] == '\r'))
	{
	    // fill the tailing area of current row.
	    if (0 <= (*prow - offsetrow) && (*prow - offsetrow) < maxrow)
		screen_fill_tailing_area(tsbmode, *prow - offsetrow, *prow - offsetrow + 1, *pcol, maxwidth, attr);
	    *pcol = maxwidth;

	    (*prow)++;
	    *pcol = 0;

	    j++;
	}
	else
	{
	    if (has_mbyte)
	        chlen = (*mb_ptr2len)(p + j);
	    else
		chlen = (int)STRLEN(p + j);
		
	    for (k = 0; k < chlen; k++)
		buf[k] = p[j + k];
	    buf[chlen] = NUL;
	    j += chlen;

	    // Make all characters printable.
	    temp = transstr(buf);
	    if (temp != NULL)
	    {
		vim_strncpy(buf, temp, sizeof(buf) - 1);
		vim_free(temp);
	    }

	    if (has_mbyte)
		chcells = (*mb_ptr2cells)(buf);
	    else
		chcells = 1;

	    if (maxwidth < (*pcol) + chcells)
	    {
		// fill the tailing area of current row.
		if (0 <= (*prow - offsetrow) && (*prow - offsetrow) < maxrow)
		    screen_fill_tailing_area(tsbmode, *prow - offsetrow, *prow - offsetrow + 1, *pcol, maxwidth, attr);
		*pcol = maxwidth;

		if (maxwidth < chcells)
		    break;

		if (p_tsbw)
		{
		    (*prow)++;
		    *pcol = 0;
		}
	    }

	    if ((*pcol) + chcells <= maxwidth)
	    {
		if ((TSBMODE_REDRAW == tsbmode) && (0 <= (*prow - offsetrow) && (*prow - offsetrow) < maxrow))
		    screen_puts(buf, *prow - offsetrow, *pcol + (p_tsba ? COLUMNS_WITHOUT_TABSB() : 0), attr);
		(*pcol) += chcells;
	    }
	}
    }
}

    static void
draw_tabsidebar_default(
	int	tsbmode,
	win_T	*wp,
	win_T	*cwp,
	int	len,
	int	maxrow,
	int	offsetrow,
	int	*prow,
	int	*pcol,
	int	attr,
	int	maxwidth)
{
    int		modified;
    int		wincount;
    char_u	buf[2] = { NUL, NUL };

    modified = FALSE;
    for (wincount = 0; wp != NULL; wp = wp->w_next, ++wincount)
	if (bufIsChanged(wp->w_buffer))
	    modified = TRUE;

    if (modified || 1 < wincount)
    {
	if (1 < wincount)
	{
	    vim_snprintf((char *)NameBuff, MAXPATHL, "%d", wincount);
	    len = (int)STRLEN(NameBuff);
	    screen_puts_len_for_tabsidebar(tsbmode, NameBuff, len, maxrow, offsetrow, prow, pcol,
#if defined(FEAT_SYN_HL)
		    hl_combine_attr(attr, HL_ATTR(HLF_T)),
#else
		    attr,
#endif
		    maxwidth
		    );
	}
	if (modified)
	{
	    buf[0] = '+';
	    screen_puts_len_for_tabsidebar(tsbmode, buf, 1, maxrow, offsetrow, prow, pcol, attr, maxwidth);
	}

	buf[0] = TSB_FILLCHAR;
	screen_puts_len_for_tabsidebar(tsbmode, buf, 1, maxrow, offsetrow, prow, pcol, attr, maxwidth);
    }

    get_trans_bufname(cwp->w_buffer);
    shorten_dir(NameBuff);
    len = (int)STRLEN(NameBuff);
    screen_puts_len_for_tabsidebar(tsbmode, NameBuff, len, maxrow, offsetrow, prow, pcol, attr, maxwidth);

    // fill the tailing area of current row.
    if (0 <= (*prow - offsetrow) && (*prow - offsetrow) < maxrow)
	screen_fill_tailing_area(tsbmode, *prow - offsetrow, *prow - offsetrow + 1, *pcol, maxwidth, attr);
    *pcol = maxwidth;
}

    static void
draw_tabsidebar_userdefined(
	int	tsbmode,
	win_T	*wp,
	win_T	*cwp,
	char_u	*p,
	int	len,
	int	maxrow,
	int	offsetrow,
	int	*prow,
	int	*pcol,
	int	attr,
	int	maxwidth)
{
    int		p_crb_save;
    char_u	buf[IOSIZE];
    stl_hlrec_T *hltab;
    stl_hlrec_T *tabtab;
    int		use_sandbox = FALSE;
    int		curattr;
    int		n;

    // Temporarily reset 'cursorbind', we don't want a side effect from moving
    // the cursor away and back.
    p_crb_save = cwp->w_p_crb;
    cwp->w_p_crb = FALSE;

    // Make a copy, because the statusline may include a function call that
    // might change the option value and free the memory.
    p = vim_strsave(p);

    build_stl_str_hl(cwp, buf, sizeof(buf),
	    p, use_sandbox,
	    TSB_FILLCHAR, sizeof(buf), &hltab, &tabtab);

    vim_free(p);
    cwp->w_p_crb = p_crb_save;

    curattr = attr;
    p = buf;
    for (n = 0; hltab[n].start != NULL; n++)
    {
	len = (int)(hltab[n].start - p);
	screen_puts_len_for_tabsidebar(tsbmode, p, len, maxrow, offsetrow, prow, pcol, curattr, maxwidth);
	p = hltab[n].start;
	if (hltab[n].userhl == 0)
	    curattr = attr;
	else if (hltab[n].userhl < 0)
	    curattr = syn_id2attr(-hltab[n].userhl);
#ifdef FEAT_TERMINAL
	else if (wp != NULL && wp != curwin && bt_terminal(wp->w_buffer)
						   && wp->w_status_height != 0)
	    curattr = highlight_stltermnc[hltab[n].userhl - 1];
	else if (wp != NULL && bt_terminal(wp->w_buffer)
						   && wp->w_status_height != 0)
	    curattr = highlight_stlterm[hltab[n].userhl - 1];
#endif
	else if (wp != NULL && wp != curwin && wp->w_status_height != 0)
	    curattr = highlight_stlnc[hltab[n].userhl - 1];
	else
	    curattr = highlight_user[hltab[n].userhl - 1];
    }
    len = (int)STRLEN(p);
    screen_puts_len_for_tabsidebar(tsbmode, p, len, maxrow, offsetrow, prow, pcol, curattr, maxwidth);

    // fill the tailing area of current row.
    if (0 <= (*prow - offsetrow) && (*prow - offsetrow) < maxrow)
	screen_fill_tailing_area(tsbmode, *prow - offsetrow, *prow - offsetrow + 1, *pcol, maxwidth, curattr);
    *pcol = maxwidth;
}

/*
 * do something by tsbmode for redrawing tabsidebar.
 */
    static void
do_by_tsbmode(int tsbmode, int maxwidth, int* pcurtab_row, int* ptabpagenr)
{
    int		len = 0;
    char_u	*p = NULL;
    int		attr;
    int		attr_tsbf = HL_ATTR(HLF_TSBF);
    int		attr_tsbs = HL_ATTR(HLF_TSBS);
    int		attr_tsb = HL_ATTR(HLF_TSB);
    int		col = 0;
    int		row = 0;
    int		maxrow = cmdline_row;
    int		n = 0;
    int		offsetrow = 0;
    tabpage_T	*tp = NULL;
    typval_T	v;
    win_T	*cwp;
    win_T	*wp;

    if (TSBMODE_GET_CURTAB_ROW != tsbmode)
    {
	offsetrow = 0;
	if (0 < maxrow)
	    while (offsetrow + maxrow <= *pcurtab_row)
		offsetrow += maxrow;
    }

    tp = first_tabpage;

    for (row = 0; tp != NULL; row++)
    {
	if ((TSBMODE_GET_CURTAB_ROW != tsbmode) && (maxrow <= (row - offsetrow)))
	    break;

	n++;
	col = 0;

	v.v_type = VAR_NUMBER;
	v.vval.v_number = tabpage_index(tp);
	set_var((char_u *)"g:actual_curtabpage", &v, TRUE);

	if (tp->tp_topframe == topframe)
	{
	    attr = attr_tsbs;
	    if (TSBMODE_GET_CURTAB_ROW == tsbmode)
	    {
		*pcurtab_row = row;
		break;
	    }
	}
	else
	{
	    attr = attr_tsb;
	}

	if (tp == curtab)
	{
	    cwp = curwin;
	    wp = firstwin;
	}
	else
	{
	    cwp = tp->tp_curwin;
	    wp = tp->tp_firstwin;
	}

	len = 0;
	p = p_tsb;
	if (p != NULL)
	    len = (int)STRLEN(p);

	if (0 < len)
	{
	    char_u	buf[IOSIZE];
	    char_u*	p2 = p;
	    size_t	i2 = 0;

	    while (p2[i2] != '\0')
	    {
		while ((p2[i2] == '\n') || (p2[i2] == '\r'))
		{
		    row++;
		    col = 0;
		    p2++;
		}

		while ((p2[i2] != '\n') && (p2[i2] != '\r') && (p2[i2] != '\0'))
		{
		    if (i2 + 1 >= sizeof(buf))
			break;
		    buf[i2] = p2[i2];
		    i2++;
		}
		buf[i2] = '\0';
		draw_tabsidebar_userdefined(tsbmode, wp, cwp, buf, i2, maxrow, offsetrow, &row, &col, attr, maxwidth);

		p2 += i2;
		i2 = 0;
	    }
	}
	else
	    draw_tabsidebar_default(tsbmode, wp, cwp, len, maxrow, offsetrow, &row, &col, attr, maxwidth);

	do_unlet((char_u *)"g:actual_curtabpage", TRUE);

	tp = tp->tp_next;

	if ((TSBMODE_GET_TABPAGENR == tsbmode) && (mouse_row <= (row - offsetrow)))
	{
	    *ptabpagenr = v.vval.v_number;
	    break;
	}
    }

    // fill the area of TabSideBarFill.
    screen_fill_tailing_area(tsbmode, row - offsetrow, maxrow, 0, maxwidth, attr_tsbf);
}

#endif // FEAT_TABSIDEBAR
