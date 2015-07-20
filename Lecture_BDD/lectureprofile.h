#ifndef LECTUREPROFILE_H
#define LECTUREPROFILE_H

#include <QWidget>
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

private:
    Ui::LectureProfile *ui;
    QSqlQueryModel *model;
};

#endif // LECTUREPROFILE_H
