/* evalvars.c */
void evalvars_init(void);
void evalvars_clear(void);
int garbage_collect_globvars(int copyID);
int garbage_collect_vimvars(int copyID);
int garbage_collect_scriptvars(int copyID);
void set_internal_string_var(char_u *name, char_u *value);
int eval_charconvert(char_u *enc_from, char_u *enc_to, char_u *fname_from, char_u *fname_to);
int eval_printexpr(char_u *fname, char_u *args);
void eval_diff(char_u *origfile, char_u *newfile, char_u *outfile);
void eval_patch(char_u *origfile, char_u *difffile, char_u *outfile);
list_T *eval_spell_expr(char_u *badword, char_u *expr);
int get_spellword(list_T *list, char_u **pp);
void prepare_vimvar(int idx, typval_T *save_tv);
void restore_vimvar(int idx, typval_T *save_tv);
char_u *eval_one_expr_in_str(char_u *p, garray_T *gap);
char_u *eval_all_expr_in_str(char_u *str);
list_T *heredoc_get(exarg_T *eap, char_u *cmd, int script_get, int vim9compile);
void ex_var(exarg_T *eap);
void ex_let(exarg_T *eap);
int ex_let_vars(char_u *arg_start, typval_T *tv, int copy, int semicolon, int var_count, int flags, char_u *op);
char_u *skip_var_list(char_u *arg, int include_type, int *var_count, int *semicolon, int silent);
char_u *skip_var_one(char_u *arg, int include_type);
void list_hashtable_vars(hashtab_T *ht, char *prefix, int empty, int *first);
void ex_unlet(exarg_T *eap);
void ex_lockvar(exarg_T *eap);
void ex_unletlock(exarg_T *eap, char_u *argstart, int deep, int glv_flags, int (*callback)(lval_T *, char_u *, exarg_T *, int, void *), void *cookie);
void list_unlet_range(list_T *l, listitem_T *li_first, long n1_arg, int has_n2, long n2);
int do_unlet(char_u *name, int forceit);
void item_lock(typval_T *tv, int deep, int lock, int check_refcount);
void del_menutrans_vars(void);
char_u *cat_prefix_varname(int prefix, char_u *name);
char_u *get_user_var_name(expand_T *xp, int idx);
char *get_var_special_name(int nr);
dict_T *get_globvar_dict(void);
hashtab_T *get_globvar_ht(void);
dict_T *get_vimvar_dict(void);
int find_vim_var(char_u *name, int *di_flags);
void set_vim_var_type(int idx, vartype_T type);
void set_vim_var_nr(int idx, varnumber_T val);
char *get_vim_var_name(int idx);
typval_T *get_vim_var_tv(int idx);
type_T *get_vim_var_type(int idx, garray_T *type_list);
int set_vim_var_tv(int idx, typval_T *tv);
varnumber_T get_vim_var_nr(int idx);
char_u *get_vim_var_str(int idx);
list_T *get_vim_var_list(int idx);
dict_T *get_vim_var_dict(int idx);
void set_vim_var_char(int c);
void set_vcount(long count, long count1, int set_prevcount);
void save_vimvars(vimvars_save_T *vvsave);
void restore_vimvars(vimvars_save_T *vvsave);
void set_vim_var_string(int idx, char_u *val, int len);
void set_vim_var_list(int idx, list_T *val);
void set_vim_var_dict(int idx, dict_T *val);
void set_argv_var(char **argv, int argc);
void reset_reg_var(void);
void set_reg_var(int c);
char_u *v_exception(char_u *oldval);
char_u *v_throwpoint(char_u *oldval);
char_u *set_cmdarg(exarg_T *eap, char_u *oldarg);
int eval_variable(char_u *name, int len, scid_T sid, typval_T *rettv, dictitem_T **dip, int flags);
void check_vars(char_u *name, int len);
dictitem_T *find_var(char_u *name, hashtab_T **htp, int no_autoload);
dictitem_T *find_var_also_in_script(char_u *name, hashtab_T **htp, int no_autoload);
dictitem_T *find_var_in_ht(hashtab_T *ht, int htname, char_u *varname, int no_autoload);
hashtab_T *get_script_local_ht(void);
int lookup_scriptitem(char_u *name, size_t len, int cmd, cctx_T *dummy);
hashtab_T *find_var_ht(char_u *name, char_u **varname);
char_u *get_var_value(char_u *name);
void new_script_vars(scid_T id);
void init_var_dict(dict_T *dict, dictitem_T *dict_var, int scope);
void unref_var_dict(dict_T *dict);
void vars_clear(hashtab_T *ht);
void vars_clear_ext(hashtab_T *ht, int free_val);
void delete_var(hashtab_T *ht, hashitem_T *hi);
void set_var(char_u *name, typval_T *tv, int copy);
void set_var_const(char_u *name, scid_T sid, type_T *type_arg, typval_T *tv_arg, int copy, int flags_arg, int var_idx);
int var_check_permission(dictitem_T *di, char_u *name);
int var_check_ro(int flags, char_u *name, int use_gettext);
int var_check_lock(int flags, char_u *name, int use_gettext);
int var_check_fixed(int flags, char_u *name, int use_gettext);
int var_wrong_func_name(char_u *name, int new_var);
int value_check_lock(int lock, char_u *name, int use_gettext);
int valid_varname(char_u *varname, int len, int autoload);
void reset_v_option_vars(void);
void assert_error(garray_T *gap);
int var_exists(char_u *var);
int alloc_redir_lval(void);
void clear_redir_lval(void);
void init_redir_ga(void);
int var_redir_start(char_u *name, int append);
void var_redir_str(char_u *value, int value_len);
void var_redir_stop(void);
char_u *get_clear_redir_ga(void);
void f_gettabvar(typval_T *argvars, typval_T *rettv);
void f_gettabwinvar(typval_T *argvars, typval_T *rettv);
void f_getwinvar(typval_T *argvars, typval_T *rettv);
void f_getbufvar(typval_T *argvars, typval_T *rettv);
void f_settabvar(typval_T *argvars, typval_T *rettv);
void f_settabwinvar(typval_T *argvars, typval_T *rettv);
void f_setwinvar(typval_T *argvars, typval_T *rettv);
void f_setbufvar(typval_T *argvars, typval_T *rettv);
callback_T get_callback(typval_T *arg);
void put_callback(callback_T *cb, typval_T *tv);
void set_callback(callback_T *dest, callback_T *src);
void copy_callback(callback_T *dest, callback_T *src);
void expand_autload_callback(callback_T *cb);
void free_callback(callback_T *callback);
/* vim: set ft=c : */
