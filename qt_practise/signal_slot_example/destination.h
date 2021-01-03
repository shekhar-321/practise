#ifndef DESTINATION_H
#define DESTINATION_H

#include <QObject>
#include <QDebug>
class destination : public QObject
{
    Q_OBJECT
public:
    explicit destination(QObject *parent = nullptr);

signals:

public slots:
    //signature should match for signal and slot.
    void myslot(QString message);

};

#endif // DESTINATION_H
