Qt Test Runner - A tiny tool to execute muliple QTestLib application and combine the testing result into a summary report.


**This project is not maintained any more. It is replaced by [testable](https://github.com/benlau/testable)**

License : BSD

A example program to teach how to use the TestRunner class.

Directory:

runner/		The code integrated with TestRunner. It will run other test
testa/		Test program A
testb/		Test program B

Instruction:

1. In Qt Creator , open testrunner.pro in this folder

2. Build 

3. Set the run executable to 'runner'

4. Run the test. You are expected to see:

```

********* Start testing of TestA *********
Config: Using QTest library 4.7.2, Qt 4.7.2
PASS   : TestA::initTestCase()
PASS   : TestA::simple()
FAIL!  : TestA::fail() 'false' returned FALSE. ()
Loc: [../../testrunner/testa/tst_testa.cpp(26)]
PASS   : TestA::cleanupTestCase()
Totals: 3 passed, 1 failed, 0 skipped
********* Finished testing of TestA *********
********* Start testing of TestB *********
Config: Using QTest library 4.7.2, Qt 4.7.2
PASS   : TestB::initTestCase()
PASS   : TestB::complex()
PASS   : TestB::cleanupTestCase()
Totals: 3 passed, 0 failed, 0 skipped
********* Finished testing of TestB *********
FAIL!  : Can not start "../testc/tst_testc" 
Totals: 6 passed, 2 failed, 0 skipped 
********* Finished testing ********* 

```

