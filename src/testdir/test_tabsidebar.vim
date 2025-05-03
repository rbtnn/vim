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
    function! MyTabsidebar()
      let n = g:actual_curtabpage
      let hi = n == tabpagenr() ? 'TabLineSel' : 'TabLine'
      let label = printf("\n%%#%sTabNumber#%d:%%#%s#", hi, n, hi)
      let label ..= '%1*%f%*'
      return label
    endfunction
    hi User1 ctermfg=12

    set showtabline=0
    set showtabsidebar=0
    set tabsidebarcolumns=16
    set tabsidebar=
    silent edit Xtabsidebar1

    nnoremap \01 <Cmd>set showtabsidebar=2<CR>
    nnoremap \02 <C-w>v
    nnoremap \03 <Cmd>call setline(1, ['a', 'b', 'c'])<CR>
    nnoremap \04 <Cmd>silent tabnew Xtabsidebar2<CR><Cmd>call setline(1, ['d', 'e', 'f'])<CR>
    nnoremap \05 <Cmd>set tabsidebar=%!MyTabsidebar()<CR>
    nnoremap \06 <Cmd>set tabsidebaralign<CR>
    nnoremap \07 <Cmd>set tabsidebarcolumns=10<CR>
    nnoremap \08 <Cmd>set tabsidebarwrap<CR>
    nnoremap \09 gt
    nnoremap \10 <Cmd>set notabsidebaralign<CR>
    nnoremap \11 <Cmd>set showtabsidebar=1 fillchars+=tabsidebar:<Bslash><Bar><CR>
    nnoremap \12 <Cmd>tab terminal NONE<CR><C-w>N
    nnoremap \13 <Cmd>tabclose!<CR><Cmd>tabclose!<CR>
  END
  call writefile(lines, 'XTest_tabsidebar', 'D')

  let buf = RunVimInTerminal('-S XTest_tabsidebar', {'rows': 6, 'cols': 45})

  call VerifyScreenDump(buf, 'Test_tabsdebar_drawing_00', {})

  for i in range(1, 13)
    let n = printf('%02d', i)
    call term_sendkeys(buf, '\' .. n)
    call VerifyScreenDump(buf, 'Test_tabsdebar_drawing_' .. n, {})
  endfor

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

  call VerifyScreenDump(buf, 'Test_tabsidebar_drawing_with_popupwin_0', {})

  call StopVimInTerminal(buf)
endfunc

" vim: shiftwidth=2 sts=2 expandtab
