# ctest
ctest - a testing framework for C. Modernizing C, one step at a time.

## Compilation
- Added conditional compilation to avoid binary bloat, in order to compile with the testing features enabled, -DTEST needs to be set on the gcc compilation command. If not, compilation won't fail (provided the main entry point is defined) but the macro expansion is ignored.
- Also, to avoid conflicts with application entry points, the compilation process has been changed to direct the linker to define a different entry point from main. The replacement is `_tmain` (test main).

```
gcc -Wall -Wextra -pedantic -DTEST -o ctest ctest.c count_ones.c -Wl,-e,_tmain
```
