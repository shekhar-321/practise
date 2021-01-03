#ifndef MANGER_H
#define MANGER_H

#include <QObject>
#include <QThread>
#include <QDebug>
#include "counter.h"

class manger : public QObject
{
    Q_OBJECT
public:
    explicit manger(QObject *parent = nullptr);
    void start();

signals:

public slots:
    void started();
    void finished();

private:
        QList<QThread*> threads;

};

#endif // MANGER_H
