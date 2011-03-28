#include <QtCore/QString>
#include <QtTest/QtTest>

class TestB : public QObject
{
    Q_OBJECT

public:
    TestB();

private Q_SLOTS:
    void complex();
};

TestB::TestB()
{
}

void TestB::complex()
{
    QVERIFY(QString("abc") != QString("ABC"));
}

QTEST_APPLESS_MAIN(TestB);

#include "tst_testb.moc"
