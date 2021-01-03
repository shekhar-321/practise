#ifndef SIGNALS_EXAMPLE_H
#define SIGNALS_EXAMPLE_H

#include <QObject>
#include <QDebug>
class signals_example : public QObject
{
    Q_OBJECT
public:
    explicit signals_example(QObject *parent = nullptr);
    void trigger();
signals:
    void mysignal(QString message);

};

#endif // SIGNALS_EXAMPLE_H
