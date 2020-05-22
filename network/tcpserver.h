#ifndef TCPSERVER_H
#define TCPSERVER_H
#include <QList>
#include <QTcpServer>
#include <QTcpSocket>

class Server:public QTcpServer{
   Q_OBJECT
public:
Server(QObject *parent);
void SetPort(int port);
bool Start();
public slots:
void NewConnect();
void ReceivedData();
private:
    QList<QTcpSocket *> socket_list_;
    int port_;
};
#endif // TCPSERVER_H
