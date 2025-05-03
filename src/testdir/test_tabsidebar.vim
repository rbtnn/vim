" Tests for tabsidebar

source check.vim
source screendump.vim
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
  let &showtabsidebar = 0
  call assert_equal(0, &showtabsidebar)
  let &showtabsidebar = 1
  call assert_equal(1, &showtabsidebar)
  let &showtabsidebar = 2
  call assert_equal(2, &showtabsidebar)
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

function! Test_tabsidebar_drawing()
  CheckScreendump

  let lines =<< trim END
    let g:MyTabsidebar = '%f'

    set showtabline=0
    set showtabsidebar=0
    set tabsidebarcolumns=16
    set tabsidebar=%!g:MyTabsidebar
    silent edit Xtabsidebar1
    call setline(1, ['a', 'b', 'c'])

    nnoremap \1 <Cmd>set showtabsidebar=2<CR>
    nnoremap \2 <Cmd>silent tabnew Xtabsidebar2<CR><Cmd>call setline(1, ['d', 'e', 'f'])<CR>
    nnoremap \3 <Cmd>set tabsidebaralign<CR>
    nnoremap \4 <Cmd>set tabsidebarcolumns=10<CR>
    nnoremap \5 <Cmd>set tabsidebarwrap<CR>
    nnoremap \6 gt
    nnoremap \7 <Cmd>set notabsidebaralign<CR>
    nnoremap \8 <Cmd>set showtabsidebar=1<CR>
    nnoremap \9 <Cmd>tabclose!<CR>
  END
  call writefile(lines, 'XTest_tabsidebar', 'D')

  let buf = RunVimInTerminal('-S XTest_tabsidebar', {'rows': 6, 'cols': 45})

  call VerifyScreenDump(buf, 'Test_tabsdebar_drawing_0', {})

  call term_sendkeys(buf, '\1')
  call VerifyScreenDump(buf, 'Test_tabsdebar_drawing_1', {})

  call term_sendkeys(buf, '\2')
  call VerifyScreenDump(buf, 'Test_tabsdebar_drawing_2', {})

  call term_sendkeys(buf, '\3')
  call VerifyScreenDump(buf, 'Test_tabsdebar_drawing_3', {})

  call term_sendkeys(buf, '\4')
  call VerifyScreenDump(buf, 'Test_tabsdebar_drawing_4', {})

  call term_sendkeys(buf, '\5')
  call VerifyScreenDump(buf, 'Test_tabsdebar_drawing_5', {})

  call term_sendkeys(buf, '\6')
  call VerifyScreenDump(buf, 'Test_tabsdebar_drawing_6', {})

  call term_sendkeys(buf, '\7')
  call VerifyScreenDump(buf, 'Test_tabsdebar_drawing_7', {})

  call term_sendkeys(buf, '\8')
  call VerifyScreenDump(buf, 'Test_tabsdebar_drawing_8', {})

  call term_sendkeys(buf, '\9')
  call VerifyScreenDump(buf, 'Test_tabsdebar_drawing_9', {})

  call StopVimInTerminal(buf)
endfunc

function! Test_tabsidebar_drawing_with_popupwin()
  CheckScreendump

  let lines =<< trim END
    let g:MyTabsidebar = '%f'

    set showtabsidebar=2
    set tabsidebarcolumns=20
    set showtabline=0
    tabnew
    setlocal buftype=nofile
    call setbufline(bufnr(), 1, repeat([repeat('.', &columns - &tabsidebarcolumns)], &lines))
    highlight TestingForTabSideBarPopupwin guibg=#7777ff guifg=#000000
    for line in [1, &lines]
      for col in [1, &columns - &tabsidebarcolumns - 2]
        call popup_create([
          \   '@',
          \ ], {
          \   'line': line,
          \   'col': col,
          \   'border': [],
          \   'highlight': 'TestingForTabSideBarPopupwin',
          \ })
      endfor
    endfor
    call cursor(4, 10)
    call popup_atcursor('atcursor', {
      \   'highlight': 'TestingForTabSideBarPopupwin',
      \ })
  END
  call writefile(lines, 'XTest_tabsidebar_with_popupwin', 'D')

  let buf = RunVimInTerminal('-S XTest_tabsidebar_with_popupwin', {'rows': 10, 'cols': 45})

  call VerifyScreenDump(buf, 'Test_tabsdebar_drawing_with_popupwin_0', {})

  call StopVimInTerminal(buf)
endfunc

" vim: shiftwidth=2 sts=2 expandtab
