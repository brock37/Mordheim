#ifndef DOCKWIDGETLISTEMEMBREBANDE_H
#define DOCKWIDGETLISTEMEMBREBANDE_H

#include <QDockWidget>
#include <QtSql>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QString>
#include <QMessageBox>

namespace Ui {
class DockWidgetListeMembreBande;
}

class DockWidgetListeMembreBande : public QDockWidget
{
    Q_OBJECT

public:
    explicit DockWidgetListeMembreBande(QSqlDatabase *db, QWidget *parent = 0);
    ~DockWidgetListeMembreBande();
    void changerBande(QString nouvelleBande);
    void listerLesBandes();

private:
    Ui::DockWidgetListeMembreBande *ui;
    QSqlQueryModel *m_model;
    QSqlDatabase *m_db;

};

#endif // DOCKWIDGETLISTEMEMBREBANDE_H
