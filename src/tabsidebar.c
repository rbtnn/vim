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

static void tabsidebar_do_something_by_mode(int tsbmode, int maxwidth, int fillchar, int* pcurtab_row, int* ptabpagenr);

#define TSBMODE_GET_CURTAB_ROW	0
#define TSBMODE_GET_TABPAGENR	1
#define TSBMODE_REDRAW		2

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
	int	maxwidth,
	int	fillchar)
{
    int		j, k;
    int		chlen;
    int		chcells;
    char_u	buf[1024];
    char_u*	temp;

    for (j = 0; j < len;)
    {
	if ((TSBMODE_GET_CURTAB_ROW != tsbmode) && (maxrow <= (*prow - offsetrow)))
	    break;

	if ((p[j] == '\n') || (p[j] == '\r'))
	{
	    while (*pcol < maxwidth)
	    {
		if ((TSBMODE_REDRAW == tsbmode) && (0 <= (*prow - offsetrow) && (*prow - offsetrow) < maxrow))
		    screen_putchar(fillchar, *prow - offsetrow, *pcol + (p_tsba ? COLUMNS_WITHOUT_TABSB() : 0), attr);
		(*pcol)++;
	    }

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

	    /* Make all characters printable. */
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
		while ((*pcol) < maxwidth)
		{
		    if ((TSBMODE_REDRAW == tsbmode) && (0 <= (*prow - offsetrow) && (*prow - offsetrow) < maxrow))
			screen_putchar(fillchar, *prow - offsetrow, *pcol + (p_tsba ? COLUMNS_WITHOUT_TABSB() : 0), attr);
		    (*pcol)++;
		}

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
	char_u	*p,
	int	len,
	int	maxrow,
	int	offsetrow,
	int	*prow,
	int	*pcol,
	int	attr,
	int	maxwidth,
	int	fillchar)
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
		    maxwidth, fillchar
		    );
	}
	if (modified)
	{
	    buf[0] = '+';
	    screen_puts_len_for_tabsidebar(tsbmode, buf, 1, maxrow, offsetrow, prow, pcol, attr, maxwidth, fillchar);
	}

	buf[0] = fillchar;
	screen_puts_len_for_tabsidebar(tsbmode, buf, 1, maxrow, offsetrow, prow, pcol, attr, maxwidth, fillchar);
    }

    get_trans_bufname(cwp->w_buffer);
    shorten_dir(NameBuff);
    screen_puts_len_for_tabsidebar(tsbmode, NameBuff, vim_strsize(NameBuff), maxrow, offsetrow, prow, pcol, attr, maxwidth, fillchar);

    while ((*pcol) < maxwidth)
    {
	if ((TSBMODE_REDRAW == tsbmode) && (0 <= (*prow - offsetrow) && (*prow - offsetrow) < maxrow))
	    screen_putchar(fillchar, *prow - offsetrow, *pcol + (p_tsba ? COLUMNS_WITHOUT_TABSB() : 0), attr);
	(*pcol)++;
    }
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
	int	maxwidth,
	int	fillchar)
{
    int		p_crb_save;
    char_u	buf[MAXPATHL];
    struct	stl_hlrec hltab[STL_MAX_ITEM];
    struct	stl_hlrec tabtab[STL_MAX_ITEM];
    int		use_sandbox = FALSE;
    int		curattr;
    int		n;

    /* Temporarily reset 'cursorbind', we don't want a side effect from moving
     * the cursor away and back. */
    p_crb_save = cwp->w_p_crb;
    cwp->w_p_crb = FALSE;

    /* Make a copy, because the statusline may include a function call that
     * might change the option value and free the memory. */
    p = vim_strsave(p);

    build_stl_str_hl(cwp, buf, sizeof(buf),
	    p, use_sandbox,
	    fillchar, sizeof(buf), hltab, tabtab);

    vim_free(p);
    cwp->w_p_crb = p_crb_save;

    curattr = attr;
    p = buf;
    for (n = 0; hltab[n].start != NULL; n++)
    {
	len = (int)(hltab[n].start - p);
	screen_puts_len_for_tabsidebar(tsbmode, p, len, maxrow, offsetrow, prow, pcol, curattr, maxwidth, fillchar);
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
    screen_puts_len_for_tabsidebar(tsbmode, p, len, maxrow, offsetrow, prow, pcol, curattr, maxwidth, fillchar);

    while (*pcol < maxwidth)
    {
	if ((TSBMODE_REDRAW == tsbmode) && (0 <= (*prow - offsetrow) && (*prow - offsetrow) < maxrow))
	    screen_putchar(fillchar, *prow - offsetrow, *pcol + (p_tsba ? COLUMNS_WITHOUT_TABSB() : 0), curattr);
	(*pcol)++;
    }
}

/*
 * draw the tabsidebar
 */
    void
draw_tabsidebar()
{
    int		maxwidth = tabsidebar_width();
    int		fillchar = ' ';
    int		curtab_row = 0;
    int		tabpagenr = 0;

    if (0 == maxwidth)
	return;

    tabsidebar_do_something_by_mode(TSBMODE_GET_CURTAB_ROW, maxwidth, fillchar, &curtab_row, &tabpagenr);
    tabsidebar_do_something_by_mode(TSBMODE_REDRAW, maxwidth, fillchar, &curtab_row, &tabpagenr);

    redraw_tabsidebar = FALSE;
}

    int
get_tabpagenr_on_tabsidebar()
{
    int		maxwidth = tabsidebar_width();
    int		fillchar = ' ';
    int		curtab_row = 0;
    int		tabpagenr = 0;
    int		saved = redraw_tabsidebar;

    if (0 == maxwidth)
	return -1;

    tabsidebar_do_something_by_mode(TSBMODE_GET_CURTAB_ROW, maxwidth, fillchar, &curtab_row, &tabpagenr);
    tabsidebar_do_something_by_mode(TSBMODE_GET_TABPAGENR, maxwidth, fillchar, &curtab_row, &tabpagenr);

    redraw_tabsidebar = saved;

    return tabpagenr;
}

/*
 * tsbmode
 *   TSBMODE_GET_CURTAB_ROW:	set *pcurtab_row. don't redraw.
 *   TSBMODE_GET_TABPAGENR:	set *ptabpagenr. don't redraw.
 *   TSBMODE_REDRAW:		redraw.
 */
    static void
tabsidebar_do_something_by_mode(int tsbmode, int maxwidth, int fillchar, int* pcurtab_row, int* ptabpagenr)
{
    int		len = 0;
    char_u	*p = NULL;
    int		attr;
    int		attr_tsbf = HL_ATTR(HLF_TSBF);
    int		attr_tsbs = HL_ATTR(HLF_TSBS);
    int		attr_tsb = HL_ATTR(HLF_TSB);
    int		col = 0;
    int		row = 0;
    int		maxrow = Rows - p_ch;
    int		n = 0;
    int		offsetrow = 0;
    tabpage_T	*tp = NULL;
    typval_T	v;
    win_T	*cwp;
    win_T	*wp;

    if (TSBMODE_GET_CURTAB_ROW != tsbmode)
    {
	offsetrow = 0;
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
	p = tp->tp_tabsidebar;
	if (p != NULL)
	    len = (int)STRLEN(p);

	// if local is empty, use global.
	if (len == 0)
	{
	    p = p_tsb;
	    if (p != NULL)
		len = (int)STRLEN(p);
	}

	if (0 < len)
	{
	    char_u	buf[1024];
	    char_u*	p2 = p;
	    int	i2 = 0;
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
		    buf[i2] = p2[i2];
		    i2++;
		}
		buf[i2] = '\0';
		draw_tabsidebar_userdefined(tsbmode, wp, cwp, buf, i2, maxrow, offsetrow, &row, &col, attr, maxwidth, fillchar);

		p2 += i2;
		i2 = 0;
	    }
	}
	else
	    draw_tabsidebar_default(tsbmode, wp, cwp, p, len, maxrow, offsetrow, &row, &col, attr, maxwidth, fillchar);

	do_unlet((char_u *)"g:actual_curtabpage", TRUE);

	tp = tp->tp_next;

	if ((TSBMODE_GET_TABPAGENR == tsbmode) && (mouse_row <= (row - offsetrow)))
	{
	    *ptabpagenr = v.vval.v_number;
	    break;
	}
    }

    if (TSBMODE_REDRAW == tsbmode)
    {
	attr = attr_tsbf;
	for (; row - offsetrow < maxrow; row++)
	{
	    col = 0;
	    while (col < maxwidth)
	    {
		screen_putchar(fillchar, row - offsetrow, col + (p_tsba ? COLUMNS_WITHOUT_TABSB() : 0), attr);
		col++;
	    }
	}
    }
}

#endif // FEAT_TABSIDEBAR
