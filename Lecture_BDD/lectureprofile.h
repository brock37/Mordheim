#ifndef LECTUREPROFILE_H
#define LECTUREPROFILE_H

#include <QWidget>
#include <QtSql>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

namespace Ui {
class LectureProfile;
}

class LectureProfile : public QWidget
{
    Q_OBJECT

public:
    explicit LectureProfile(QWidget *parent = 0, QSqlDatabase *dataBase=0);
    ~LectureProfile();
    void rafraichirTableauCapa(QString currentProfil);
    void changementRegles(QString nom);

public slots:
    void changementProfil(QModelIndex index);
    void changementRace(QString newRace);
    void changerTexteRegles(QModelIndex index);


private:
    Ui::LectureProfile *ui;
    QSqlQueryModel *model;
    QSqlQueryModel *modelCapa;
    QSqlQueryModel *modelRegles;
    QSqlDatabase *db;
};

#endif // LECTUREPROFILE_H
