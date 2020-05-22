#include <QCoreApplication>
#include <QDebug>
#include "tcpserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Server server(nullptr);
    server.SetPort(20001);
    server.Start();
    return a.exec();
}
