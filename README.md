# asserter

![Verify Assertion Failure](https://erdani.org/publications/cuj-08-2003.php.html)

assertion util inspired by John Torjo's solution described [here](https://www.drdobbs.com/cpp/enhancing-assertions/184403745)

## native build

```
cd test
cmake -B build
cmake --build build
```

## emscripten build

```
cd test
emcmake cmake -B web-build
cmake --build web-build
```

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

To print passed assertions use `test.hpp` instead of `asserter.hpp`. This will write the file `result.json` containing number of assertions passed and failed.

### continue on failure for tests

To continue execution on failed assertion define `CONTINUE_ON_FAILURE` before including `test.hpp`.
