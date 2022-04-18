# Gtest

Original repo: https://github.com/bast/gtest-demo <br/>
Intall cmake (Windows x64 Installer): https://cmake.org/download/

## in root folder run commands:

$ cmake -S. -Bbuild\
$ cmake --build build

## in build folder run command:

$ ctest

## Result:

--
Test project C:/Users/akiku/OneDrive/Työpöytä/Ohjelmistotuotannon jatkokurssi/gtest-demo/build<br/>
Start 1: date_test.add<br/>
1/2 Test #1: date_test.add .................... Passed 0.12 sec<br/>
Start 2: date_test.subtract<br/>
2/2 Test #2: date_test.subtract ............... Passed 0.01 sec<br/>

100% tests passed, 0 tests failed out of 2<br/>

Label Time Summary:<br/>
unit = 0.14 sec\*proc (2 tests)<br/>

Total Test time (real) = 0.16 sec<br/>
