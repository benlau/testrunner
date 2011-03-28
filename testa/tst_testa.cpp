#include <QtCore/QString>
#include <QtTest/QtTest>

class TestA : public QObject
{
    Q_OBJECT

public:
    TestA();

private Q_SLOTS:
    void simple();
    void fail();
};

TestA::TestA()
{
}

void TestA::simple()
{
    QVERIFY(1 + 1 == 2);
}

void TestA::fail(){
    QVERIFY(false);
}

QTEST_APPLESS_MAIN(TestA);

#include "tst_testa.moc"
