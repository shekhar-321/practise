#ifndef SINGAL_EXAMPLE_H
#define SINGAL_EXAMPLE_H

#include <QObject>

class singal_example : public QObject
{
    Q_OBJECT
public:
    explicit singal_example(QObject *parent = nullptr);
    void trigger();
signals:
    void mysignal(QString message);
};

#endif // SINGAL_EXAMPLE_H
