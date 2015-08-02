#ifndef WIDGETVUEPROFIL_H
#define WIDGETVUEPROFIL_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class WidgetVueProfil;
}

class WidgetVueProfil : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetVueProfil(QSqlDatabase *db, QWidget *parent = 0);
    ~WidgetVueProfil();

public slots:
    void rafraichirProfil(QString typeUnite);


private:
    Ui::WidgetVueProfil *ui;
    QSqlDatabase *m_db;
    QSqlQueryModel *m_modelCaract;
    QSqlQueryModel *model;

};

#endif // WIDGETVUEPROFIL_H
