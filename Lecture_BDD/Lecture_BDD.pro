QT  += core gui sql

QT += widgets

TARGET = Lecture_BDD
TEMPLATE = app


SOURCES += \
    main.cpp \
    mainwindow.cpp \
    dialogconnectionbdd.cpp \
    widget.cpp

HEADERS += \
    mainwindow.h \
    dialogconnectionbdd.h \
    widget.h

FORMS += \
    mainwindow.ui \
    dialogconnectionbdd.ui \
    widget.ui

