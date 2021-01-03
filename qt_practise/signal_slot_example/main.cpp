#include <QCoreApplication>
#include "signals_example.h"
#include "destination.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    signals_example objsignal;
    destination objdest;
    QObject::connect(&objsignal,&signals_example::mysignal,&objdest,&destination::myslot);
    objsignal.trigger();
    return a.exec();
}
