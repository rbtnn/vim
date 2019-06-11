/* screen.c */
#ifdef FEAT_TABSIDEBAR
void draw_tabsidebar();
int get_tabpagenr_on_tabsidebar();
#endif
void redraw_later(int type);
void redraw_win_later(win_T *wp, int type);
void redraw_later_clear(void);
void redraw_all_later(int type);
void redraw_curbuf_later(int type);
void redraw_buf_later(buf_T *buf, int type);
void redraw_buf_line_later(buf_T *buf, linenr_T lnum);
void redraw_buf_and_status_later(buf_T *buf, int type);
int redraw_asap(int type);
void redraw_after_callback(int call_update_screen);
void redrawWinline(win_T *wp, linenr_T lnum);
void after_updating_screen(int may_resize_shell);
void update_curbuf(int type);
int update_screen(int type_arg);
int conceal_cursor_line(win_T *wp);
void conceal_check_cursor_line(void);
void update_debug_sign(buf_T *buf, linenr_T lnum);
void updateWindow(win_T *wp);
int screen_get_current_line_off(void);
void screen_line(int row, int coloff, int endcol, int clear_width, int flags);
void rl_mirror(char_u *str);
void status_redraw_all(void);
void status_redraw_curbuf(void);
void redraw_statuslines(void);
void win_redraw_last_status(frame_T *frp);
void win_redr_status_matches(expand_T *xp, int num_matches, char_u **matches, int match, int showtail);
int stl_connected(win_T *wp);
int get_keymap_str(win_T *wp, char_u *fmt, char_u *buf, int len);
void screen_putchar(int c, int row, int col, int attr);
void screen_getbytes(int row, int col, char_u *bytes, int *attrp);
void screen_puts(char_u *text, int row, int col, int attr);
void screen_puts_len(char_u *text, int textlen, int row, int col, int attr);
void screen_stop_highlight(void);
void reset_cterm_colors(void);
void screen_draw_rectangle(int row, int col, int height, int width, int invert);
void screen_fill(int start_row, int end_row, int start_col, int end_col, int c1, int c2, int attr);
void check_for_delay(int check_msg_scroll);
int screen_valid(int doclear);
void screenalloc(int doclear);
void free_screenlines(void);
void screenclear(void);
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
int redrawing(void);
int messaging(void);
void showruler(int always);
int number_width(win_T *wp);
int screen_screencol(void);
int screen_screenrow(void);
/* vim: set ft=c : */
