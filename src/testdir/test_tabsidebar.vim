" Tests for tabsidebar

source check.vim
CheckFeature tabsidebar

function! s:reset()
  set showtabsidebar&
  set tabsidebarcolumns&
  set tabsidebar&
  set tabsidebaralign&
  set tabsidebarwrap&
endfunc

function! Test_tabsidebar_showtabsidebar()
  set showtabsidebar&
  call assert_equal(0, &showtabsidebar)
  set showtabsidebar=0
  call assert_equal(0, &showtabsidebar)
  set showtabsidebar=1
  call assert_equal(1, &showtabsidebar)
  set showtabsidebar=2
  call assert_equal(2, &showtabsidebar)
  silent! call assert_fails('set showtabsidebar=-1', 'E487: Argument must be positive: showtabsidebar=-1')
  silent! call assert_fails('set showtabsidebar=3', 'E487: Argument must be positive: showtabsidebar=3')

  let &showtabsidebar = 0
  call assert_equal(0, &showtabsidebar)
  let &showtabsidebar = 1
  call assert_equal(1, &showtabsidebar)
  let &showtabsidebar = 2
  call assert_equal(2, &showtabsidebar)
  silent! let &showtabsidebar = -1
  call assert_equal(0, &showtabsidebar)
  silent! let &showtabsidebar = 3
  call assert_equal(0, &showtabsidebar)
  call s:reset()
endfunc

function! Test_tabsidebar_tabsidebarcolumns()
  set tabsidebarcolumns&
  call assert_equal(0, &tabsidebarcolumns)
  set tabsidebarcolumns=0
  call assert_equal(0, &tabsidebarcolumns)
  set tabsidebarcolumns=5
  call assert_equal(5, &tabsidebarcolumns)
  set tabsidebarcolumns=10
  call assert_equal(10, &tabsidebarcolumns)
  let &tabsidebarcolumns = 0
  call assert_equal(0, &tabsidebarcolumns)
  let &tabsidebarcolumns = 5
  call assert_equal(5, &tabsidebarcolumns)
  let &tabsidebarcolumns = 10
  call assert_equal(10, &tabsidebarcolumns)
  call s:reset()
endfunc

function! Test_tabsidebar_tabsidebar()
  set tabsidebar&
  call assert_equal('', &tabsidebar)
  set tabsidebar=aaa
  call assert_equal('aaa', &tabsidebar)
  let &tabsidebar = 'bbb'
  call assert_equal('bbb', &tabsidebar)
  call s:reset()
endfunc

function! Test_tabsidebar_tabsidebaralign()
  set tabsidebaralign&
  call assert_equal(0, &tabsidebaralign)
  set tabsidebaralign
  call assert_equal(1, &tabsidebaralign)
  set notabsidebaralign
  call assert_equal(0, &tabsidebaralign)
  set tabsidebaralign!
  call assert_equal(1, &tabsidebaralign)
  call s:reset()
endfunc

function! Test_tabsidebar_tabsidebarwrap()
  set tabsidebarwrap&
  call assert_equal(0, &tabsidebarwrap)
  set tabsidebarwrap
  call assert_equal(1, &tabsidebarwrap)
  set notabsidebarwrap
  call assert_equal(0, &tabsidebarwrap)
  set tabsidebarwrap!
  call assert_equal(1, &tabsidebarwrap)
  call s:reset()
endfunc

" vim: shiftwidth=2 sts=2 expandtab
