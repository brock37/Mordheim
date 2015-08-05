#ifndef DOCKWIDGETLISTEMEMBREBANDE_H
#define DOCKWIDGETLISTEMEMBREBANDE_H

#include <QDockWidget>
#include <QtSql>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QString>
#include <QMessageBox>
#include <QStandardItem>

namespace Ui {
class DockWidgetListeMembreBande;
}

class DockWidgetListeMembreBande : public QDockWidget
{
    Q_OBJECT

public:
    explicit DockWidgetListeMembreBande(QSqlDatabase *db, QWidget *parent = 0);
    DockWidgetListeMembreBande(QStringList profil, QSqlDatabase *db, QWidget *parent = 0);
    ~DockWidgetListeMembreBande();

    void listerLesBandes();
    void listerLesRangs();
    void listerLesTypeUnites();



public slots:
    void envoyerSignalChangeProfil(QString nouvelleBande);
    void changerBande(QString nouvelleBande);

signals:
    void signalChangementBande(QString typeUnite);

private:
    Ui::DockWidgetListeMembreBande *ui;
    QSqlQueryModel *m_model;
    QSqlDatabase *m_db;
    QString m_bandeActuelle;
    //QStandardItemModel model;
    QStandardItemModel *itemModel;


};

#endif // DOCKWIDGETLISTEMEMBREBANDE_H
