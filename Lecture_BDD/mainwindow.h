#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QtSql>
#include <QString>
#include <QFontDatabase>
#include <iostream>

#include "ui_mainwindow.h"
#include "acceuil.h"
#include "dialogconnectionbdd.h"
#include "ui_dialogconnectionbdd.h"
#include "widget.h"
#include "ui_widget.h"
#include "lectureprofile.h"
#include "ui_LectureProfile.h"

#define q2c(string) string.toStdString()


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool connectionBDD(QString hostName, QString userName, QString password, QString dataBaseName);

private slots:
    void on_actionBase_de_donn_es_triggered();

    void on_action_Quitter_2_triggered();

    void on_actionAjouter_Profil_triggered();

    void voirProfil();

private:
    Ui::MainWindow *ui;
    QSqlDatabase *db ;
    QString m_curHostName;
    QString m_curUserName;
    QString m_curPassword;
    QString m_curDataBaseName;


    Acceuil *widgetAcceuil;
    Widget *dialAjoutPersonnage;

    LectureProfile *widgetProfil;

};

#endif // MAINWINDOW_H
