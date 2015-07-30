#include "dockwidgetlistemembrebande.h"
#include "ui_dockwidgetlistemembrebande.h"

DockWidgetListeMembreBande::DockWidgetListeMembreBande(QSqlDatabase *db, QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::DockWidgetListeMembreBande)
{
    ui->setupUi(this);
    m_model = new QSqlQueryModel(this);

    ui->treeView->setModel( m_model);

    m_db= db;

}

DockWidgetListeMembreBande::~DockWidgetListeMembreBande()
{
    delete ui;
}

void DockWidgetListeMembreBande::listerLesBandes()
{

    QSqlQuery requete(*m_db);
    if(!requete.prepare("SELECT nom FROM liste_bandes"))
        QMessageBox::critical(this, "Erreur","Erreur de conversion des données depuis la BDD");

    if(requete.exec())
    {
        while(requete.next())
        {
            QString item= requete.value(0).toString();
            //QMessageBox::information(this, "Title",item);
            ui->comboBox_race->addItem(item);
        }
    }
    else
    {
        qDebug() << m_db->lastError();
    }

}
