#ifndef CREATIONBANDE_H
#define CREATIONBANDE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QListWidget>

namespace Ui {
class CreationBande;
}

class CreationBande : public QWidget
{
    Q_OBJECT

public:
    explicit CreationBande( QSqlDatabase *db, QStringList queryParam, QWidget *parent = 0);
    ~CreationBande();

private:
    Ui::CreationBande *ui;
    QSqlDatabase *m_db;
    QStringList m_param;
};

#endif // CREATIONBANDE_H
