#include <QtCore/QCoreApplication>
#include "testrunner.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TestRunner runner;

    runner.run("../testa/tst_testa");
    runner.run("../testb/tst_testb");
    runner.run("../testc/tst_testc"); // not existed test program

    runner.report();

    return 0;
}
