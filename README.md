# asserter

assertion util

## build

see `test/build_and_run`

## standard usage

```
string a("hello assert");

ASSERT(a.empty())(a)(a.size());
```

Example output:
```
assertion failed: a.empty()
file: /Users/mucbuc/work/wgsl_check/ext/asserter/test/src/check_assert.cpp
line: 10
function: main
a: hello assert
a.size(): 12
Assertion failed: (false), function local_t, file check_assert.cpp, line 10.
./build_and_run: line 5: 93154 Abort trap: 6           ./build/Example
```

## test usage

To track passed assertions use `test.hpp"` instead of `asserter.hpp`.
