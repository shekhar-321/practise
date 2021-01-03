#include "singal_example.h"

singal_example::singal_example(QObject *parent) : QObject(parent)
{

}

void singal_example::trigger()
{
    emit mysignal("demo signal");
}
