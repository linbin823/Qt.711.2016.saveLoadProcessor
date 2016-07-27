#-------------------------------------------------
#
# Project created by QtCreator 2016-07-20T13:38:50
#
#-------------------------------------------------

QT       += core gui xml xmlpatterns

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = loadSaveExample
TEMPLATE = app

include(..\..\src\loadSave\saveLoadProcessor.pri)
SOURCES +=  main.cpp\
            mainwindow.cpp \
            deviceexample.cpp \
            managerexample.cpp

HEADERS  += mainwindow.h \
            deviceexample.h \
            managerexample.h

FORMS    += mainwindow.ui
