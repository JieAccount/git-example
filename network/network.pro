QT += core
QT += network
QT -= gui

CONFIG += c++11

TARGET = network
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    tcpserver.cpp

HEADERS += \
    tcpserver.h
