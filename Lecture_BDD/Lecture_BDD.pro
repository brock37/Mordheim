QT  += core gui sql

QT += widgets

TARGET = Lecture_BDD
TEMPLATE = app


SOURCES += \
    main.cpp \
    mainwindow.cpp \
    dialogconnectionbdd.cpp \
    widget.cpp \
    lectureprofile.cpp \
    acceuil.cpp

HEADERS += \
    mainwindow.h \
    dialogconnectionbdd.h \
    widget.h \
    lectureprofile.h \
    acceuil.h \
    constantes.h

FORMS += \
    mainwindow.ui \
    dialogconnectionbdd.ui \
    widget.ui \
    LectureProfile.ui \
    acceuil.ui


