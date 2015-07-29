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
    acceuil.cpp \
    dialog_parametre_bande.cpp \
    creationbande.cpp \
    widgetvueprofil.cpp

HEADERS += \
    mainwindow.h \
    dialogconnectionbdd.h \
    widget.h \
    lectureprofile.h \
    acceuil.h \
    constantes.h \
    dialog_parametre_bande.h \
    creationbande.h \
    widgetvueprofil.h

FORMS += \
    mainwindow.ui \
    dialogconnectionbdd.ui \
    widget.ui \
    LectureProfile.ui \
    acceuil.ui \
    dialog_parametre_bande.ui \
    creationbande.ui \
    widgetvueprofil.ui


