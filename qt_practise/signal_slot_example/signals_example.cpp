#include "signals_example.h"

signals_example::signals_example(QObject *parent) : QObject(parent)
{

}


void signals_example::trigger()
{
    emit mysignal("demo signal");

}
