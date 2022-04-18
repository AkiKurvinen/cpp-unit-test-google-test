# Gtest

Original repo: https://github.com/bast/gtest-demo <br/>
Intall cmake (Windows x64 Installer): https://cmake.org/download/

## in root folder run commands:

$ cmake -S. -Bbuild\
$ cmake --build build

## in build folder run command:

$ ctest

## Result:

Test project C:/Users/akiku/OneDrive/Työpöytä/VisualCode/cpp-unit-test-google-test/build
Start 1: date_test.is_leap_year
1/7 Test #1: date_test.is_leap_year ........... Passed 0.12 sec
Start 2: date_test.not_leap_year
2/7 Test #2: date_test.not_leap_year .......... Passed 0.01 sec
Start 3: date_test.in_same_year
3/7 Test #3: date_test.in_same_year ........... Passed 0.01 sec
Start 4: date_test.in_rev_order
4/7 Test #4: date_test.in_rev_order ........... Passed 0.01 sec
Start 5: date_test.in_diff_year
5/7 Test #5: date_test.in_diff_year ........... Passed 0.01 sec
Start 6: date_test.in_leap_year
6/7 Test #6: date_test.in_leap_year ........... Passed 0.01 sec
Start 7: date_test.very_long_time
7/7 Test #7: date_test.very_long_time ......... Passed 0.01 sec

100% tests passed, 0 tests failed out of 7

Label Time Summary:
unit = 0.18 sec\*proc (7 tests)

Total Test time (real) = 0.21 sec
