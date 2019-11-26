" Tests for srand() and rand()

func Test_Rand()
  let r = srand(123456789)
  call assert_equal([123456789, 362436069, 521288629, 88675123], r)
  call assert_equal(3701687786, rand(r))
  call assert_equal(458299110, rand(r))
  call assert_equal(2500872618, rand(r))
  call assert_equal(3633119408, rand(r))
  call assert_equal(516391518, rand(r))

  call test_settime(12341234)
  let s = srand()
  if filereadable('/dev/urandom')
    " using /dev/urandom
    call assert_notequal(s, srand())
  else
    " using time()
    call assert_equal(s, srand())
    call test_settime(12341235)
    call assert_notequal(s, srand())
  endif

  call srand()
  let v = rand()
  call assert_notequal(v, rand())

  call assert_fails('echo srand([1])', 'E745:')
  call assert_fails('echo rand([1, 2, 3])', 'E475:')
  call assert_fails('echo rand([[1], 2, 3, 4])', 'E475:')
  call assert_fails('echo rand([1, [2], 3, 4])', 'E475:')
  call assert_fails('echo rand([1, 2, [3], 4])', 'E475:')
  call assert_fails('echo rand([1, 2, 3, [4]])', 'E475:')

  call test_settime(0)
endfunc
