/* screen.c */
int conceal_cursor_line(win_T *wp);
void conceal_check_cursor_line(int was_concealed);
int get_wcr_attr(win_T *wp);
void win_draw_end(win_T *wp, int c1, int c2, int draw_margin, int row, int endrow, hlf_T hl);
int compute_foldcolumn(win_T *wp, int col);
size_t fill_foldcolumn(char_u *p, win_T *wp, int closed, linenr_T lnum);
int screen_get_current_line_off(void);
void reset_screen_attr(void);
void screen_line(win_T *wp, int row, int coloff, int endcol, int clear_width, int flags);
void rl_mirror(char_u *str);
void draw_vsep_win(win_T *wp, int row);
int stl_connected(win_T *wp);
int get_keymap_str(win_T *wp, char_u *fmt, char_u *buf, int len);
void win_redr_custom(win_T *wp, int draw_ruler);
void screen_putchar(int c, int row, int col, int attr);
void screen_getbytes(int row, int col, char_u *bytes, int *attrp);
void screen_puts(char_u *text, int row, int col, int attr);
void screen_puts_len(char_u *text, int textlen, int row, int col, int attr_arg);
void start_search_hl(void);
void end_search_hl(void);
void screen_stop_highlight(void);
void reset_cterm_colors(void);
void screen_char(unsigned off, int row, int col);
void screen_draw_rectangle(int row, int col, int height, int width, int invert);
void space_to_screenline(int off, int attr);
void screen_fill(int start_row, int end_row, int start_col, int end_col, int c1, int c2, int attr);
void check_for_delay(int check_msg_scroll);
int screen_valid(int doclear);
void screenalloc(int doclear);
void free_screenlines(void);
int screenclear(void);
void redraw_as_cleared(void);
void line_was_clobbered(int screen_lnum);
int can_clear(char_u *p);
void screen_start(void);
void windgoto(int row, int col);
void setcursor(void);
void setcursor_mayforce(int force);
int win_ins_lines(win_T *wp, int row, int line_count, int invalid, int mayclear);
int win_del_lines(win_T *wp, int row, int line_count, int invalid, int mayclear, int clear_attr);
int screen_ins_lines(int off, int row, int line_count, int end, int clear_attr, win_T *wp);
int screen_del_lines(int off, int row, int line_count, int end, int force, int clear_attr, win_T *wp);
int skip_showmode(void);
int showmode(void);
void unshowmode(int force);
void clearmode(void);
void draw_tabline(void);
void get_trans_bufname(buf_T *buf);
int fillchar_status(int *attr, win_T *wp);
int fillchar_vsep(int *attr, win_T *wp);
int redrawing(void);
int messaging(void);
void comp_col(void);
int number_width(win_T *wp);
int screen_screencol(void);
int screen_screenrow(void);
char *set_chars_option(win_T *wp, char_u **varp, int apply);
char *check_chars_options(void);
/* vim: set ft=c : */
