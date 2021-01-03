#include <QCoreApplication>
#include <QSharedPointer>
#include <QDebug>
#include <QThread>
#include <QTimer>
#include "test.h"

static QSharedPointer<QThread> sptr;

void timeout()
{
    if(!sptr.isNull())
    {
        qInfo() << "Time out - stopping other thread from: " << QThread::currentThread();;
        sptr.data()->quit();
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Application Thread: " << a.thread();
    qInfo() << "Current Thread: " << QThread::currentThread();

    test t;
    qInfo() << "Timer Thread: " << t.thread();

     QThread thread;
     sptr.reset(&thread);
     //if t is inherited we can not movetothread
     t.moveToThread(&thread);
     qInfo() << "Timer Thread: " << t.thread();

     t.start();

     qInfo() << "Thread State:" << thread.isRunning();
     thread.start();

      QTimer timer;
      //thus function call timeout after 5 sec
      timer.singleShot(5000,&timeout);


    return a.exec();
}
