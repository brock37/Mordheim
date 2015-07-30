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
    void listerLesRangs();
    void listerLesTypeUnites();

public slots:
    void rafraichirBande(QString nouvelleBande);

private:
    Ui::DockWidgetListeMembreBande *ui;
    QSqlQueryModel *m_model;
    QSqlDatabase *m_db;
    QString m_bandeActuelle;

};

#endif // DOCKWIDGETLISTEMEMBREBANDE_H
