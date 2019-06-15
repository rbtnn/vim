" Tests for tabsidebar

if !has('tabsidebar')
  finish
endif

function! s:cleanup()
  set nocompatible
  silent! tabonly!
  silent! only!
  set tabline&
  set showtabline&
  set tabsidebar&
  set showtabsidebar&
  set tabsidebaralign&
  set tabsidebarcolumns&
  set tabsidebarwrap&
  set guioptions&
endfunc

" setting compatible, check whether Vim process is alive.
function! Test_tabsidebar_compatible()
  call s:cleanup()
  tabnew
  tabnew
  tabnew
  set tabsidebar=xxx
  set showtabsidebar=2
  set tabsidebarcolumns=20
  set tabsidebarwrap
  set compatible
  call s:cleanup()
endfunc

" setting nocompatible, check whether Vim process is alive.
function! Test_tabsidebar_nocompatible()
  call s:cleanup()
  tabnew
  tabnew
  tabnew
  set tabsidebar=xxx
  set showtabsidebar=2
  set tabsidebarcolumns=20
  set tabsidebarwrap
  set nocompatible
  call s:cleanup()
endfunc

function! Test_tabsidebar_width()
  let cnt = 12

  for show in range(0, 2)
    for cols in range(8, 9)
      call s:cleanup()
      let &showtabsidebar = show
      let &tabsidebarcolumns = cols
      for i in range(1, cnt)
        vsplit
      endfor
      let n = 0
      for i in range(1, winnr('$'))
        let n += winwidth(i)
      endfor
      let total = n + cnt + ((show == 2) ? cols : 0)
      call assert_equal(&columns, total)
    endfor
  endfor

  call s:cleanup()
endfunc

function! Test_tabsidebar_tabline()
  for cols in range(4, 10) + range(10, 4, -1)
    call s:cleanup()

    if has('gui_running')
      set guioptions=mM
    endif

    set showtabline=2
    set tabline=123
    set showtabsidebar=2
    let &tabsidebarcolumns = cols
    set tabsidebar=abc
    redraw!
    call assert_equal('a', nr2char(screenchar(1, 1)))
    call assert_equal('b', nr2char(screenchar(1, 2)))
    call assert_equal('c', nr2char(screenchar(1, 3)))
    for i in range(4, cols)
      call assert_equal(' ', nr2char(screenchar(1, i)))
    endfor
    call assert_equal('1', nr2char(screenchar(1, cols + 1)))
    call assert_equal('2', nr2char(screenchar(1, cols + 2)))
    call assert_equal('3', nr2char(screenchar(1, cols + 3)))
  endfor

  call s:cleanup()
endfunc

function! Test_tabsidebar_statusline()
  call s:cleanup()
  set laststatus=2
  set statusline=abc
  set showtabsidebar=2
  set tabsidebarcolumns=10
  redraw!
  call assert_equal('a', nr2char(screenchar(&lines - 1, &tabsidebarcolumns + 1)))
  call assert_equal('b', nr2char(screenchar(&lines - 1, &tabsidebarcolumns + 2)))
  call assert_equal('c', nr2char(screenchar(&lines - 1, &tabsidebarcolumns + 3)))
  call s:cleanup()
endfunc

" vim: shiftwidth=2 sts=2 expandtab
