#include <QCoreApplication>
#include <QThread>
#include "manger.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QThread::currentThread()->setObjectName("Main");

        manger m;
        m.start();

    return a.exec();
}
