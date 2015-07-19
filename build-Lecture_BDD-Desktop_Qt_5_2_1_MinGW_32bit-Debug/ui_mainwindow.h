/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionBase_de_donn_es;
    QAction *actionAjouter_Profil;
    QAction *action_Quitter_2;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuPreferences;
    QMenu *menu_Fichier;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        actionBase_de_donn_es = new QAction(MainWindow);
        actionBase_de_donn_es->setObjectName(QStringLiteral("actionBase_de_donn_es"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../../Pictures/SpaceJam.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionBase_de_donn_es->setIcon(icon);
        actionAjouter_Profil = new QAction(MainWindow);
        actionAjouter_Profil->setObjectName(QStringLiteral("actionAjouter_Profil"));
        action_Quitter_2 = new QAction(MainWindow);
        action_Quitter_2->setObjectName(QStringLiteral("action_Quitter_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuPreferences = new QMenu(menubar);
        menuPreferences->setObjectName(QStringLiteral("menuPreferences"));
        menu_Fichier = new QMenu(menubar);
        menu_Fichier->setObjectName(QStringLiteral("menu_Fichier"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_Fichier->menuAction());
        menubar->addAction(menuPreferences->menuAction());
        menuPreferences->addAction(actionBase_de_donn_es);
        menu_Fichier->addAction(actionAjouter_Profil);
        menu_Fichier->addAction(action_Quitter_2);
        toolBar->addAction(actionBase_de_donn_es);

        retranslateUi(MainWindow);
        QObject::connect(action_Quitter_2, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionBase_de_donn_es->setText(QApplication::translate("MainWindow", "&Base de donn\303\251es", 0));
        actionAjouter_Profil->setText(QApplication::translate("MainWindow", "Ajouter Profil", 0));
#ifndef QT_NO_TOOLTIP
        actionAjouter_Profil->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>&amp;Ajouter Profil</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        action_Quitter_2->setText(QApplication::translate("MainWindow", "&Quitter", 0));
        menuPreferences->setTitle(QApplication::translate("MainWindow", "Preferences", 0));
        menu_Fichier->setTitle(QApplication::translate("MainWindow", "&Fichier", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
