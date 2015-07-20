#ifndef LECTUREPROFILE_H
#define LECTUREPROFILE_H

#include <QWidget>
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
    explicit LectureProfile(QWidget *parent = 0);
    ~LectureProfile();

public slots:
    void changementProfil(QModelIndex index);
    void changementRace(QString newRace);

private:
    Ui::LectureProfile *ui;
    QSqlQueryModel *model;
    QSqlQueryModel *modelCapa;
};

#endif // LECTUREPROFILE_H
