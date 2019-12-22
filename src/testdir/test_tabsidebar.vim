" Tests for tabsidebar

source check.vim
CheckFeature tabsidebar

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

" vim: shiftwidth=2 sts=2 expandtab
