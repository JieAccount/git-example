#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"hello centos";
    return 0;
    return a.exec();
}
