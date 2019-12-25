" Tests for tabsidebar

source check.vim
CheckFeature tabsidebar
CheckFeature popupwin

source screendump.vim

function! s:screendump(name, lines)
  CheckScreendump
  call writefile(a:lines, a:name)
  let buf = RunVimInTerminal('-S ' . a:name, #{rows: 10})
  call VerifyScreenDump(buf, a:name, {})
  call StopVimInTerminal(buf)
  call delete(a:name)
endfunc

function! Test_tabsidebar_screendump_1()
  let lines =<< trim END
    set laststatus=2
    set statusline=abc
    set showtabsidebar=2
    set tabsidebarcolumns=10
  END
  call s:screendump('Test_tabsidebar_screendump_1', lines)
endfunc

function! Test_tabsidebar_screendump_2()
  let lines =<< trim END
    set laststatus=2
    set statusline=abc
    set showtabsidebar=2
    set tabsidebarcolumns=10
    set tabsidebaralign
  END
  call s:screendump('Test_tabsidebar_screendump_2', lines)
endfunc

function! Test_tabsidebar_screendump_3()
  let lines =<< trim END
    set showtabline=2
    set laststatus=2
    set statusline=abc
    set showtabsidebar=2
    set tabsidebarcolumns=10
  END
  call s:screendump('Test_tabsidebar_screendump_3', lines)
endfunc

function! Test_tabsidebar_screendump_4()
  let lines =<< trim END
    set showtabline=2
    set laststatus=2
    set statusline=abc
    set showtabsidebar=2
    set tabsidebarcolumns=10
    set tabsidebaralign
  END
  call s:screendump('Test_tabsidebar_screendump_4', lines)
endfunc

function! Test_tabsidebar_screendump_5()
  let lines =<< trim END
    set laststatus=2
    set statusline=abc
    set showtabsidebar=2
    set tabsidebarcolumns=10
    let text = 'hello'
    call popup_create(text, #{ pos: 'topleft', line: 1, col: 1, })
    call popup_create(text, #{ pos: 'topleft', line: 1, col: &columns - len(text) + 1, })
    call popup_create(text, #{ pos: 'topleft', line: &lines, col: 1, })
    call popup_create(text, #{ pos: 'topleft', line: &lines, col: &columns - len(text) + 1, })
    call append(0, repeat([repeat('*', 10)], 10))
    call cursor(10, 10)
    call popup_create(text, #{ pos: 'topleft', line: 'cursor-1', col: 'cursor', })
  END
  call s:screendump('Test_tabsidebar_screendump_5', lines)
endfunc

function! Test_tabsidebar_screendump_6()
  let lines =<< trim END
    set laststatus=2
    set statusline=abc
    set showtabsidebar=2
    set tabsidebarcolumns=10
    set tabsidebaralign
    let text = 'hello'
    call popup_create(text, #{ pos: 'topleft', line: 1, col: 1, })
    call popup_create(text, #{ pos: 'topleft', line: 1, col: &columns - len(text) + 1, })
    call popup_create(text, #{ pos: 'topleft', line: &lines, col: 1, })
    call popup_create(text, #{ pos: 'topleft', line: &lines, col: &columns - len(text) + 1, })
    call append(0, repeat([repeat('*', 10)], 10))
    call cursor(10, 10)
    call popup_create(text, #{ pos: 'topleft', line: 'cursor-1', col: 'cursor', })
  END
  call s:screendump('Test_tabsidebar_screendump_6', lines)
endfunc

function! Test_tabsidebar_screendump_7()
  let lines =<< trim END
    set showtabsidebar=2
    set tabsidebarcolumns=10
    new
    vsplit
  END
  call s:screendump('Test_tabsidebar_screendump_7', lines)
endfunc

function! Test_tabsidebar_screendump_8()
  let lines =<< trim END
    set showtabsidebar=2
    set tabsidebarcolumns=10
    set tabsidebaralign
    new
    vsplit
  END
  call s:screendump('Test_tabsidebar_screendump_8', lines)
endfunc

function! Test_tabsidebar_screendump_9()
  let lines =<< trim END
    set showtabline=0
    set showtabsidebar=2
    set tabsidebarcolumns=8
    set tabsidebarwrap
    setlocal tabsidebar=123456789
    tabnew
    setlocal tabsidebar=abcdefghijklmn
    tabnew
    vsplit
    split
  END
  call s:screendump('Test_tabsidebar_screendump_9', lines)
endfunc

function! Test_tabsidebar_screendump_10()
  let lines =<< trim END
    set showtabline=0
    set showtabsidebar=2
    set tabsidebarcolumns=8
    set tabsidebarwrap
    set tabsidebaralign
    setlocal tabsidebar=123456789
    tabnew
    setlocal tabsidebar=abcdefghijklmn
    tabnew
    split
    vsplit
  END
  call s:screendump('Test_tabsidebar_screendump_10', lines)
endfunc

" vim: shiftwidth=2 sts=2 expandtab
