#include "dockwidgetlistemembrebande.h"
#include "ui_dockwidgetlistemembrebande.h"

DockWidgetListeMembreBande::DockWidgetListeMembreBande(QSqlDatabase *db, QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::DockWidgetListeMembreBande)
{
    ui->setupUi(this);

    itemModel= new QStandardItemModel(this);
    m_model = new QSqlQueryModel(this);
    //ui->treeView->setModel( m_model);

    m_db= db;
    m_bandeActuelle= "";





    QObject::connect(ui->comboBox_bande, SIGNAL(currentIndexChanged(QString)), this, SLOT(changerBande(QString)));
    QObject::connect(ui->comboBox_unite, SIGNAL(currentIndexChanged(QString)), this, SLOT(envoyerSignalChangeProfil(QString)));

    listerLesBandes();
    listerLesRangs();
    listerLesTypeUnites();
}

DockWidgetListeMembreBande::~DockWidgetListeMembreBande()
{
    delete ui;
}

void DockWidgetListeMembreBande::listerLesBandes()
{
    ui->comboBox_bande->clear();
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
    ui->comboBox_rang->clear();

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
    requete.prepare("SELECT ref_profil.Nom FROM ref_profil"
                    " INNER JOIN liste_bandes"
                    " ON ref_profil.id_race= liste_bandes.id_race"
                    " WHERE liste_bandes.nom=:nom_bande ");
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

 /*   QString requete, nouvelleBande_str;
    nouvelleBande_str= "`listemembre_" + nouvelleBande + "`";
    requete= "SELECT "+ nouvelleBande_str+".nom FROM "+ nouvelleBande_str;
    //requete += " INNER JOIN "


    m_model->setQuery(

    if(m_model->lastError().isValid())
        qDebug() << m_model->lastError() << "\n" << m_model->query().lastQuery();*/

/*--------------EXemples du treeView-----------------------------------------------
    itemModel->clear();
    QStandardItem *parentItem= itemModel->invisibleRootItem();
    for (int i = 0; i < 4; ++i) {
        QStandardItem *item = new QStandardItem(QString("item %0").arg(i));
        parentItem->appendRow(item);
        parentItem = item;
    }
    ui->treeView->setModel( itemModel);
------------------------------------------------------------------------------------*/
    QSqlQuery requeteRang(*m_db);
    QList<QStandardItem*> listeRang;
    requeteRang.exec("SELECT DISTINCT nom FROM listeRang");
    while(requeteRang.next())
        listeRang << new QStandardItem(requeteRang.value(0).toString());

    QSqlQuery requete(*m_db);
    requete.prepare("SELECT ref_profil.rang,`listemembre_nains d'erebor`.nom FROM `listemembre_nains d'erebor`"
                    "INNER JOIN ref_profil "
                    "ON ref_profil.id = `listemembre_nains d'erebor`.id_ref_profil "
                    "ORDER BY ref_profil.rang");

    QList<QStandardItem*> listeHeros;
    QList<QStandardItem*> listeHommesDeMain;



    if(requete.exec())
    {

        while( requete.next())
        {

            //QMessageBox::information(this, " ", requete.value("nom").toString());

            if(requete.value(0).toString() == "Héros" )
            {
                listeRang.at(0)->appendRow(new QStandardItem(requete.value("nom").toString()));
                //listeRang.at(0)->setChild(listeRang.at(0)->columnCount(), new QStandardItem(requete.value("nom").toString()));
            }
            else if (requete.value(0).toString() == "Hommes de main")
            {

                listeRang.at(1)->setChild(listeRang.at(1)->columnCount(), new QStandardItem(requete.value("nom").toString()));
            }

        }
        //listeRang.append(listeHeros);
        //listeRang.append(listeHommesDeMain);
        itemModel->clear();
        itemModel->appendColumn( listeRang);
        if( !itemModel->setHeaderData(0, Qt::Horizontal, QString("Membres de la bande"), 0))
            QMessageBox::information(this, "", "");

        //model.appendColumn(listeRang);

    }

    ui->treeView->setModel( itemModel);
    ui->treeView->expandAll();


}



void DockWidgetListeMembreBande::envoyerSignalChangeProfil(QString nouvelleBande)
{
    emit signalChangementBande( nouvelleBande/*ui->comboBox_unite->currentText()*/);
}


