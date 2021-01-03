#include "destination.h"

destination::destination(QObject *parent) : QObject(parent)
{

}

void destination::myslot(QString message)
{
    qInfo()<<"in slot: "<<message;

}
