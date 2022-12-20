" Test MS-Windows console event handling.

source check.vim
CheckMSWindows
" The mswin events should also work in gui

source mouse.vim

" Helper function for sending a sequence of low level key presses
" The modifer key(s) can be included as normal key presses in the sequence
func SendKeys(keylist)
  for k in a:keylist
    call test_mswin_event("key", #{event: "keydown", keycode: k})
  endfor
  for k in reverse(copy(a:keylist))
    call test_mswin_event("key", #{event: "keyup", keycode: k})
  endfor
endfunc

" Send an individual key press
" the modifers for the key press can be specified in the modifiers arg.
func SendKey(key, modifiers)
  let args = { }
  let args.keycode = a:key
  let args.modifiers = a:modifiers
  let args.event = "keydown"
  call test_mswin_event("key", args)
  let args.event = "keyup"
  call test_mswin_event("key", args)
  unlet args
endfunc

" Test MS-Windows console key events
func Test_mswin_key_event()
  CheckMSWindows
  new

  " flush out any garbage left in the buffer
  while getchar(0)
  endwhile

  let VK = #{
	\ SPACE	     : 0x20,
	\ SHIFT      : 0x10,
	\ LSHIFT     : 0xA0,
	\ RSHIFT     : 0xA1,
	\ CONTROL    : 0x11,
	\ LCONTROL   : 0xA2,
	\ RCONTROL   : 0xA3,
	\ MENU	     : 0x12,
	\ ALT	     : 0x12,
	\ LMENU      : 0xA4,
	\ LALT	     : 0xA4,
	\ RMENU      : 0xA5,
	\ RALT	     : 0xA5,
	\ OEM_1      : 0xBA,
	\ OEM_2      : 0xBF,
	\ OEM_3      : 0xC0,
	\ OEM_4      : 0xDB,
	\ OEM_5      : 0xDC,
	\ OEM_6      : 0xDD,
	\ OEM_7      : 0xDE,
	\ OEM_PLUS   : 0xBB,
	\ OEM_COMMA  : 0xBC,
	\ OEM_MINUS  : 0xBD,
	\ OEM_PERIOD : 0xBE,
	\ PRIOR      : 0x21,
	\ NEXT	     : 0x22,
	\ END	     : 0x23,
	\ HOME	     : 0x24,
	\ LEFT	     : 0x25,
	\ UP	     : 0x26,
	\ RIGHT      : 0x27,
	\ DOWN	     : 0x28,
	\ KEY_0      : 0x30,
	\ KEY_1      : 0x31,
	\ KEY_2      : 0x32,
	\ KEY_3      : 0x33,
	\ KEY_4      : 0x34,
	\ KEY_5      : 0x35,
	\ KEY_6      : 0x36,
	\ KEY_7      : 0x37,
	\ KEY_8      : 0x38,
	\ KEY_9      : 0x39,
	\ NUMPAD0    : 0x60,
	\ NUMPAD1    : 0x61,
	\ NUMPAD2    : 0x62,
	\ NUMPAD3    : 0x63,
	\ NUMPAD4    : 0x64,
	\ NUMPAD5    : 0x65,
	\ NUMPAD6    : 0x66,
	\ NUMPAD7    : 0x67,
	\ NUMPAD8    : 0x68,
	\ NUMPAD9    : 0x69,
	\ MULTIPLY   : 0x6A,
	\ ADD	     : 0x6B,
	\ SUBTRACT   : 0x6D,
	\ F1	     : 0x70,
	\ F2	     : 0x71,
	\ F3	     : 0x72,
	\ F4	     : 0x73,
	\ F5	     : 0x74,
	\ F6	     : 0x75,
	\ F7	     : 0x76,
	\ F8	     : 0x77,
	\ F9	     : 0x78,
	\ F10	     : 0x79,
	\ F11	     : 0x7A,
	\ F12	     : 0x7B,
	\ KEY_A      : 0x41,
	\ KEY_B      : 0x42,
	\ KEY_C      : 0x43,
	\ KEY_D      : 0x44,
	\ KEY_E      : 0x45,
	\ KEY_F      : 0x46,
	\ KEY_G      : 0x47,
	\ KEY_H      : 0x48,
	\ KEY_I      : 0x49,
	\ KEY_J      : 0x4A,
	\ KEY_K      : 0x4B,
	\ KEY_L      : 0x4C,
	\ KEY_M      : 0x4D,
	\ KEY_N      : 0x4E,
	\ KEY_O      : 0x4F,
	\ KEY_P      : 0x50,
	\ KEY_Q      : 0x51,
	\ KEY_R      : 0x52,
	\ KEY_S      : 0x53,
	\ KEY_T      : 0x54,
	\ KEY_U      : 0x55,
	\ KEY_V      : 0x56,
	\ KEY_W      : 0x57,
	\ KEY_X      : 0x58,
	\ KEY_Y      : 0x59,
	\ KEY_Z      : 0x5A	
	\ }

  let vim_MOD_MASK_SHIFT = 0x02
  let vim_MOD_MASK_CTRL  = 0x04
  let vim_MOD_MASK_ALT   = 0x08
  
  let vim_key_modifiers = [
    \ ["",       0,   []],
    \ ["S-",     2,   [VK.SHIFT]],
    \ ["C-",     4,   [VK.CONTROL]],
    \ ["C-S-",   6,   [VK.CONTROL, VK.SHIFT]],
    \ ["A-",     8,   [VK.MENU]],
    \ ["A-S-",   10,  [VK.MENU, VK.SHIFT]],
    \ ["A-C-",   12,  [VK.MENU, VK.CONTROL]],
    \ ["A-C-S-", 14,  [VK.MENU, VK.CONTROL, VK.SHIFT]],
    \]

  " Some punctuation characters
  " Assuming Standard US PC Keyboard layout
  let test_punctuation_keys = [
	\ [[VK.SPACE], ' '],
	\ [[VK.OEM_1], ';'],
	\ [[VK.OEM_2], '/'],
	\ [[VK.OEM_3], '`'],
	\ [[VK.OEM_4], '['],
	\ [[VK.OEM_5], '\'],
	\ [[VK.OEM_6], ']'],
	\ [[VK.OEM_7], ''''],
	\ [[VK.OEM_PLUS], '='],
	\ [[VK.OEM_COMMA], ','],
	\ [[VK.OEM_MINUS], '-'],
	\ [[VK.OEM_PERIOD], '.'],
	\ [[VK.SHIFT, VK.OEM_1], ':'],
	\ [[VK.SHIFT, VK.OEM_2], '?'],
	\ [[VK.SHIFT, VK.OEM_3], '~'],
	\ [[VK.SHIFT, VK.OEM_4], '{'],
	\ [[VK.SHIFT, VK.OEM_5], '|'],
	\ [[VK.SHIFT, VK.OEM_6], '}'],
	\ [[VK.SHIFT, VK.OEM_7], '"'],
	\ [[VK.SHIFT, VK.OEM_PLUS], '+'],
	\ [[VK.SHIFT, VK.OEM_COMMA], '<'],
	\ [[VK.SHIFT, VK.OEM_MINUS], '_'],
	\ [[VK.SHIFT, VK.OEM_PERIOD], '>'],
	\ [[VK.SHIFT, VK.KEY_1], '!'],
	\ [[VK.SHIFT, VK.KEY_2], '@'],
	\ [[VK.SHIFT, VK.KEY_3], '#'],
	\ [[VK.SHIFT, VK.KEY_4], '$'],
	\ [[VK.SHIFT, VK.KEY_5], '%'],
	\ [[VK.SHIFT, VK.KEY_6], '^'],
	\ [[VK.SHIFT, VK.KEY_7], '&'],
	\ [[VK.SHIFT, VK.KEY_8], '*'],
	\ [[VK.SHIFT, VK.KEY_9], '('],
	\ [[VK.SHIFT, VK.KEY_0], ')'],
	\ [[VK.LSHIFT, VK.KEY_9], '('],
	\ [[VK.RSHIFT, VK.KEY_0], ')']
	\ ]

  for [kcodes, kstr] in test_punctuation_keys
    call SendKeys(kcodes)
    let ch = getcharstr(0)
    call assert_equal($"{kstr}", $"{ch}")
    let mod_mask = getcharmod()
    " the mod_mask is zero when no modifiers are used
    " and when the virtual termcap maps shift the character
    call assert_equal(0, mod_mask, $"key = {kstr}")
  endfor
  
  " flush out any garbage left in the buffer
  while getchar(0)
  endwhile

  for [kcodes, kstr] in test_punctuation_keys
    let modifiers = 0
    let key = kcodes[0]

    for key in kcodes
      if index([VK.SHIFT, VK.LSHIFT, VK.RSHIFT], key) >= 0
        let modifiers = modifiers + vim_MOD_MASK_SHIFT
      endif
      if index([VK.CONTROL, VK.LCONTROL, VK.RCONTROL], key) >= 0
        let modifiers = modifiers + vim_MOD_MASK_CTRL
      endif
      if index([VK.ALT, VK.LALT, VK.RALT], key) >= 0
        let modifiers = modifiers + vim_MOD_MASK_ALT
      endif
    endfor

    call SendKey(key, modifiers)
    let ch = getcharstr(0)
    call assert_equal($"{kstr}", $"{ch}")
    let mod_mask = getcharmod()
    " workaround for the virtual termcap maps changing the character instead
    " of sending Shift
    if index([VK.SHIFT, VK.LSHIFT, VK.RSHIFT], kcodes[0]) >= 0
      let modifiers = modifiers - vim_MOD_MASK_SHIFT
    endif
    call assert_equal(modifiers, mod_mask, $"key = {kstr}")
  endfor

  " flush out any garbage left in the buffer
  while getchar(0)
  endwhile

" Test keyboard codes for digits
" (0x30 - 0x39) : VK_0 - VK_9 are the same as ASCII '0' - '9'
  for kc in range(48, 57)
    call SendKeys([kc])
    let ch = getcharstr(0)
    call assert_equal(nr2char(kc), ch)
    call SendKey(kc, 0)
    let ch = getcharstr(0)
    call assert_equal(nr2char(kc), ch)
  endfor

" Test keyboard codes for Alt-0 to Alt-9
" Expect +128 from the digit char codes
  for modkey in [VK.ALT, VK.LALT, VK.RALT]
    for kc in range(48, 57)
      call SendKeys([modkey, kc])
      let ch = getchar(0)
      call assert_equal(kc+128, ch)
      call SendKey(kc, vim_MOD_MASK_ALT)
      let ch = getchar(0)
      call assert_equal(kc+128, ch)
    endfor
  endfor

" Test for lowercase 'a' to 'z', VK codes 65(0x41) - 90(0x5A)
" Note: VK_A-VK_Z virtual key codes coincide with uppercase ASCII codes A-Z.
" eg VK_A is 65, and the ASCII character code for uppercase 'A' is also 65.
" Caution: these are interpreted as lowercase when Shift is NOT pressed. 
" eg, sending VK_A (65) 'A' Key code without shift modifier, will produce ASCII
" char 'a' (91) as the output.  The ASCII codes for the lowercase letters are
" numbered 32 higher than their uppercase versions.
  for kc in range(65, 90)
    call SendKeys([kc])
    let ch = getcharstr(0)
    call assert_equal(nr2char(kc + 32), ch)
    call SendKey(kc, 0)
    let ch = getcharstr(0)
    call assert_equal(nr2char(kc + 32), ch)
  endfor

"  Test for Uppercase 'A' - 'Z' keys
"  ie. with VK_SHIFT, expect the keycode = character code.
  for kc in range(65, 90)
    call SendKeys([VK.SHIFT, kc])
    let ch = getcharstr(0)
    call assert_equal(nr2char(kc), ch)
    call SendKey(kc, vim_MOD_MASK_SHIFT)
    let ch = getcharstr(0)
    call assert_equal(nr2char(kc), ch)
  endfor

  " Test for <Ctrl-A> to <Ctrl-Z> keys
 "  Same as for lowercase, except with Ctrl Key
 "  Expect the unicode characters 0x01 to 0x1A
   for modkey in [VK.CONTROL, VK.LCONTROL, VK.RCONTROL]
    for kc in range(65, 90)
      call SendKeys([modkey, kc])
      let ch = getcharstr(0)
      call assert_equal(nr2char(kc - 64), ch)
      call SendKey(kc, vim_MOD_MASK_CTRL)
      let ch = getcharstr(0)
      call assert_equal(nr2char(kc - 64), ch)
    endfor
  endfor

  if !has("gui_running")
  " Test for <Alt-A> to <Alt-Z> keys
  "  Expect the unicode characters 0xE1 to 0xFA
  "  ie. 160 higher than the lowercase equivalent
    for kc in range(65, 90)
      call SendKeys([VK.LMENU, kc])
      let ch = getchar(0)
      call assert_equal(kc+160, ch)
      call SendKey(kc, vim_MOD_MASK_ALT)
      let ch = getchar(0)
      call assert_equal(kc+160, ch)
    endfor
  endif

  if !has("gui_running")
    " Test for Function Keys 'F1' to 'F12'
    for n in range(1, 12)
      let kstr = $"F{n}"
      let keycode = eval('"\<' .. kstr .. '>"')
      call SendKeys([111+n])
      let ch = getcharstr(0)
      call assert_equal(keycode, $"{ch}", $"key = <{kstr}>")
    endfor
  endif

  bw!
endfunc

"  Test MS-Windows console mouse events
func Test_mswin_mouse_event()
  CheckMSWindows
  new

  set mousemodel=extend
  call test_override('no_query_mouse', 1)
  call WaitForResponses()

  let msg = ''

  call setline(1, ['one two three', 'four five six'])

  " Test mouse movement
  " by default, no mouse move events are generated
  " this setting enables it to generate move events
  set mousemev

  if !has('gui_running')
    " console version needs a button pressed,
    " otherwise it ignores mouse movements.
    call MouseLeftClick(2, 3)
  endif
  call MSWinMouseEvent(0x700, 8, 13, 0, 0, 0)
  if has('gui_running')
    call feedkeys("\<Esc>", 'Lx!')
  endif
  let pos = getmousepos()
  call assert_equal(8, pos.screenrow)
  call assert_equal(13, pos.screencol)

  if !has('gui_running')
    call MouseLeftClick(2, 3)
    call MSWinMouseEvent(0x700, 6, 4, 1, 0, 0)
    let pos = getmousepos()
    call assert_equal(6, pos.screenrow)
    call assert_equal(4, pos.screencol)
  endif

  " test cells vs pixels
  if has('gui_running')
    let args = { }
    let args.row = 9
    let args.col = 7
    let args.move = 1
    let args.cell = 1
    call test_mswin_event("mouse", args)
    call feedkeys("\<Esc>", 'Lx!')
    let pos = getmousepos()
    call assert_equal(9, pos.screenrow)
    call assert_equal(7, pos.screencol)

    let args.cell = 0
    call test_mswin_event("mouse", args)
    call feedkeys("\<Esc>", 'Lx!')
    let pos = getmousepos()
    call assert_equal(1, pos.screenrow)
    call assert_equal(1, pos.screencol)

    unlet args
  endif

  " finish testing mouse movement
  set mousemev&

  " place the cursor using left click and release in normal mode
  call MouseLeftClick(2, 4)
  call MouseLeftRelease(2, 4)
  if has('gui_running')
    call feedkeys("\<Esc>", 'Lx!')
  endif
  call assert_equal([0, 2, 4, 0], getpos('.'))

  " select and yank a word
  let @" = ''
  call MouseLeftClick(1, 9)
  let args = #{button: 0, row: 1, col: 9, multiclick: 1, modifiers: 0}
  call test_mswin_event('mouse', args)
  call MouseLeftRelease(1, 9)
  call feedkeys("y", 'Lx!')
  call assert_equal('three', @")

  " create visual selection using right click
  let @" = ''

  call MouseLeftClick(2 ,6)
  call MouseLeftRelease(2, 6)
  call MouseRightClick(2, 13)
  call MouseRightRelease(2, 13)
  call feedkeys("y", 'Lx!')
  call assert_equal('five six', @")

  " paste using middle mouse button
  let @* = 'abc '
  call feedkeys('""', 'Lx!')
  call MouseMiddleClick(1, 9)
  call MouseMiddleRelease(1, 9)
  if has('gui_running')
    call feedkeys("\<Esc>", 'Lx!')
  endif
  call assert_equal(['one two abc three', 'four five six'], getline(1, '$'))

  " test mouse scrolling (aka touchpad scrolling.)
  %d _
  set scrolloff=0
  call setline(1, range(1, 100))

  " Scroll Down
  call MouseWheelDown(2, 1)
  call MouseWheelDown(2, 1)
  call MouseWheelDown(2, 1)
  call feedkeys("H", 'Lx!')
  call assert_equal(10, line('.'))

  " Scroll Up
  call MouseWheelUp(2, 1)
  call MouseWheelUp(2, 1)
  call feedkeys("H", 'Lx!')
  call assert_equal(4, line('.'))

  " Shift Scroll Down
  call MouseShiftWheelDown(2, 1)
  call feedkeys("H", 'Lx!')
  " should scroll from where it is (4) + visible buffer height - cmdheight
  let shift_scroll_height = line('w$') - line('w0') - &cmdheight 
  call assert_equal(4 + shift_scroll_height, line('.'))

  " Shift Scroll Up
  call MouseShiftWheelUp(2, 1)
  call feedkeys("H", 'Lx!')
  call assert_equal(4, line('.'))

  if !has('gui_running')
    " Shift Scroll Down (using MOD)
    call MSWinMouseEvent(0x100, 2, 1, 0, 0, 0x04)
    call feedkeys("H", 'Lx!')
    " should scroll from where it is (4) + visible buffer height - cmdheight
    let shift_scroll_height = line('w$') - line('w0') - &cmdheight 
    call assert_equal(4 + shift_scroll_height, line('.'))

    " Shift Scroll Up (using MOD)
    call MSWinMouseEvent(0x200, 2, 1, 0, 0, 0x04)
    call feedkeys("H", 'Lx!')
    call assert_equal(4, line('.'))
  endif

  set scrolloff&

  %d _
  set nowrap
  " make the buffer 500 wide.
  call setline(1, range(10)->join('')->repeat(50))
  " Scroll Right
  call MouseWheelRight(1, 5)
  call MouseWheelRight(1, 10)
  call MouseWheelRight(1, 15)
  call feedkeys('g0', 'Lx!')
  call assert_equal(19, col('.'))

  " Scroll Left
  call MouseWheelLeft(1, 15)
  call MouseWheelLeft(1, 10)
  call feedkeys('g0', 'Lx!')
  call assert_equal(7, col('.'))

  " Shift Scroll Right
  call MouseShiftWheelRight(1, 10)
  call feedkeys('g0', 'Lx!')
  " should scroll from where it is (7) + window width
  call assert_equal(7 + winwidth(0), col('.'))
 
  " Shift Scroll Left
  call MouseShiftWheelLeft(1, 50)
  call feedkeys('g0', 'Lx!')
  call assert_equal(7, col('.'))
  set wrap&

  %d _
  call setline(1, repeat([repeat('a', 60)], 10))

  " record various mouse events
  let mouseEventNames = [
        \ 'LeftMouse', 'LeftRelease', '2-LeftMouse', '3-LeftMouse',
        \ 'S-LeftMouse', 'A-LeftMouse', 'C-LeftMouse', 'MiddleMouse',
        \ 'MiddleRelease', '2-MiddleMouse', '3-MiddleMouse',
        \ 'S-MiddleMouse', 'A-MiddleMouse', 'C-MiddleMouse',
        \ 'RightMouse', 'RightRelease', '2-RightMouse',
        \ '3-RightMouse', 'S-RightMouse', 'A-RightMouse', 'C-RightMouse',
        \ ]
  let mouseEventCodes = map(copy(mouseEventNames), "'<' .. v:val .. '>'")
  let g:events = []
  for e in mouseEventCodes
    exe 'nnoremap ' .. e .. ' <Cmd>call add(g:events, "' ..
          \ substitute(e, '[<>]', '', 'g') .. '")<CR>'
  endfor

  " Test various mouse buttons 
  "(0 - Left, 1 - Middle, 2 - Right, 
  " 0x300 - MOUSE_X1/FROM_LEFT_3RD_BUTTON,
  " 0x400 - MOUSE_X2/FROM_LEFT_4TH_BUTTON)
  for button in [0, 1, 2, 0x300, 0x400]
    " Single click
    let args = #{button: button, row: 2, col: 5, multiclick: 0, modifiers: 0}
    call test_mswin_event('mouse', args)
    let args.button = 3
    call test_mswin_event('mouse', args)

    " Double Click
    let args.button = button
    call test_mswin_event('mouse', args)
    let args.multiclick = 1
    call test_mswin_event('mouse', args)
    let args.button = 3
    let args.multiclick = 0
    call test_mswin_event('mouse', args)

    " Triple Click
    let args.button = button
    call test_mswin_event('mouse', args)
    let args.multiclick = 1
    call test_mswin_event('mouse', args)
    call test_mswin_event('mouse', args)
    let args.button = 3
    let args.multiclick = 0
    call test_mswin_event('mouse', args)

    " Shift click
    let args = #{button: button, row: 3, col: 7, multiclick: 0, modifiers: 4}
    call test_mswin_event('mouse', args)
    let args.button = 3
    call test_mswin_event('mouse', args)

    " Alt click
    let args.button = button
    let args.modifiers = 8
    call test_mswin_event('mouse', args)
    let args.button = 3
    call test_mswin_event('mouse', args)

    " Ctrl click
    let args.button = button
    let args.modifiers = 16
    call test_mswin_event('mouse', args)
    let args.button = 3
    call test_mswin_event('mouse', args)

    call feedkeys("\<Esc>", 'Lx!')
  endfor

  if has('gui_running')
    call assert_equal(['LeftMouse', 'LeftRelease', 'LeftMouse',
	\ '2-LeftMouse', 'LeftMouse', '2-LeftMouse', '3-LeftMouse',
	\ 'S-LeftMouse', 'A-LeftMouse', 'C-LeftMouse', 'MiddleMouse',
	\ 'MiddleRelease', 'MiddleMouse', '2-MiddleMouse', 'MiddleMouse',
	\ '2-MiddleMouse', '3-MiddleMouse', 'S-MiddleMouse', 'A-MiddleMouse',
	\ 'C-MiddleMouse', 'RightMouse', 'RightRelease', 'RightMouse',
	\ '2-RightMouse', 'RightMouse', '2-RightMouse', '3-RightMouse',
	\ 'S-RightMouse', 'A-RightMouse', 'C-RightMouse'],
	\ g:events)
  else
    call assert_equal(['MiddleRelease', 'LeftMouse', '2-LeftMouse',
	\ '3-LeftMouse', 'S-LeftMouse', 'MiddleMouse', '2-MiddleMouse',
	\ '3-MiddleMouse', 'MiddleMouse', 'S-MiddleMouse', 'RightMouse',
	\ '2-RightMouse', '3-RightMouse'],
	\ g:events)
  endif

  for e in mouseEventCodes
    exe 'nunmap ' .. e
  endfor

  bw!
  call test_override('no_query_mouse', 0)
  set mousemodel&
endfunc


"  Test MS-Windows test_mswin_event error handling
func Test_mswin_event_error_handling()

  let args = #{button: 0xfff, row: 2, col: 4, move: 0, multiclick: 0, modifiers: 0}
  if !has('gui_running')
    call assert_fails("call test_mswin_event('mouse', args)",'E475:')
  endif
  let args = #{button: 0, row: 2, col: 4, move: 0, multiclick: 0, modifiers: 0}
  call assert_fails("call test_mswin_event('a1b2c3', args)", 'E475:')
  call assert_fails("call test_mswin_event(test_null_string(), {})", 'E475:')
  
  call assert_fails("call test_mswin_event([], args)", 'E1174:')
  call assert_fails("call test_mswin_event('abc', [])", 'E1206:')
  
  call assert_false(test_mswin_event('mouse', test_null_dict()))
  let args = #{row: 2, col: 4, multiclick: 0, modifiers: 0}
  call assert_false(test_mswin_event('mouse', args))
  let args = #{button: 0, col: 4, multiclick: 0, modifiers: 0}
  call assert_false(test_mswin_event('mouse', args))
  let args = #{button: 0, row: 2, multiclick: 0, modifiers: 0}
  call assert_false(test_mswin_event('mouse', args))
  let args = #{button: 0, row: 2, col: 4, modifiers: 0}
  call assert_false(test_mswin_event('mouse', args))
  let args = #{button: 0, row: 2, col: 4, multiclick: 0}
  call assert_false(test_mswin_event('mouse', args))

  call assert_false(test_mswin_event('key', test_null_dict()))
  call assert_fails("call test_mswin_event('key', [])", 'E1206:')
  call assert_fails("call test_mswin_event('key', {'event': 'keydown', 'keycode': 0x0})", 'E1291:')
  call assert_fails("call test_mswin_event('key', {'event': 'keydown', 'keycode': [15]})", 'E745:')
  call assert_fails("call test_mswin_event('key', {'event': 'keys', 'keycode': 0x41})", 'E475:')
  call assert_fails("call test_mswin_event('key', {'keycode': 0x41})", 'E417:')
  call assert_fails("call test_mswin_event('key', {'event': 'keydown'})", 'E1291:')

  call assert_fails("sandbox call test_mswin_event('key', {'event': 'keydown', 'keycode': 61 })", 'E48:')

  " flush out any garbage left in the buffer.
  while getchar(0)
  endwhile
endfunc


" vim: shiftwidth=2 sts=2 expandtab
