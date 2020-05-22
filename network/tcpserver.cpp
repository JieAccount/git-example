#include "tcpserver.h"

#include <QBitArray>
Server::Server(QObject *parent):QTcpServer(parent),port_(-1){

}

bool Server::Start(){
    if(-1==port_)
        return false;
    connect(this,&Server::newConnection,this,&Server::NewConnect);
    return listen(QHostAddress::Any,port_);
}

void Server::SetPort(int port){
    port_=port;
}

void Server::NewConnect(){
    QTcpSocket * socket = nextPendingConnection();
    connect(socket,&QTcpSocket::readyRead,this,&Server::ReceivedData);
    socket_list_.push_back(socket);
}

void Server::ReceivedData(){
    auto socket = qobject_cast<QTcpSocket *>(sender());
    QByteArray buff;
    buff = socket->readAll();
    qDebug()<<buff;

}
