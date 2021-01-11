#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Client client;
    client.connectToHost("httpbin.org",80);

    return a.exec();
}
