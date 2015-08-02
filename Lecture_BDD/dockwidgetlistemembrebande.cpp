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
    m_bandeActuelle= "";

    QObject::connect(ui->comboBox_unite, SIGNAL(currentIndexChanged(QString)), this, SLOT(envoyerSignalChangeProfil(QString)));
    QObject::connect(ui->comboBox_bande, SIGNAL(currentIndexChanged(QString)), this, SLOT(changerBande(QString)));

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
            ui->comboBox_bande->addItem(item);
        }
    }
    else
    {
        qDebug() << m_db->lastError();
    }
    m_bandeActuelle= ui->comboBox_bande->currentText();

}

void DockWidgetListeMembreBande::listerLesRangs()
{
    QSqlQuery requete(*m_db);
    requete.prepare("SELECT nom_rang FROM rang");


    if(requete.exec())
    {
        while(requete.next())
        {
            QString item= requete.value(0).toString();
            ui->comboBox_rang->addItem(item);
        }
    }
    else
    {
        qDebug() << m_db->lastError();
    }
}

void DockWidgetListeMembreBande::listerLesTypeUnites()
{
    ui->comboBox_unite->clear();

    QSqlQuery requete(*m_db);
    requete.prepare("SELECT ref_profil.Nom FROM ref_profil INNER JOIN liste_bandes ON ref_profil.id_race= liste_bandes.id_race WHERE liste_bandes.nom=:nom_bande ");
    requete.bindValue(":nom_bande", m_bandeActuelle, QSql::Out);

    if(requete.exec())
    {
        while(requete.next())
        {
            QString item= requete.value(0).toString();
            ui->comboBox_unite->addItem(item);
        }
    }
    else
    {
        qDebug() << m_db->lastError();
    }

}

void DockWidgetListeMembreBande::changerBande(QString nouvelleBande)
{
    m_bandeActuelle= nouvelleBande;
    listerLesTypeUnites();
    ui->comboBox_rang->setCurrentIndex(0);
}



void DockWidgetListeMembreBande::envoyerSignalChangeProfil(QString nouvelleBande)
{
    emit signalChangementBande( nouvelleBande/*ui->comboBox_unite->currentText()*/);
}


