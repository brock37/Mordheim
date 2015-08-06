#include "dialog_parametre_bande.h"
#include "ui_dialog_parametre_bande.h"

Dialog_parametre_bande::Dialog_parametre_bande(QSqlDatabase *db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_parametre_bande)
{
    ui->setupUi(this);

    QFont fontMordheim("First Order", 16);
    QFont fontMordheim2("First Order", 20);
    ui->label_nom->setFont( fontMordheim);
    ui->label_valeur->setFont( fontMordheim);
    ui->label_race->setFont( fontMordheim);

    m_modelListeBande= new QSqlQueryModel(parent);
    m_modelListeBande->setQuery("SELECT nom FROM liste_bandes");

    ui->listView_choixBande->setModel( m_modelListeBande);
    //ui->listView_choixBande->resizeColumnsToContents();
}

Dialog_parametre_bande::~Dialog_parametre_bande()
{
    delete ui;
}

void Dialog_parametre_bande::accept()
{
    //Verifier qu'un nom de bande a bien été donnée
    if(ui->tabWidget->currentWidget() == ui->tab_creationBande)
    {
        if(ui->lineEdit_nom->text().isEmpty() == true)
        {
            QMessageBox::critical(this,"Impossible de Créer la bande","Il faut donner une nom a votre bande");
            return;
        }

        QSqlQuery requete;
        QString str_nomTableBande= "listemembre_" + ui->lineEdit_nom->text();
        QString str_nomTableEquipement= "listeEquipement_" + ui->lineEdit_nom->text();
        QString str_requete= "CREATE TABLE IF NOT EXISTS `"+ str_nomTableBande +"`("
                "id SMALLINT UNSIGNED NOT NULL AUTO_INCREMENT, "
                "id_ref_profil SMALLINT UNSIGNED NOT NULL , "
                "nom VARCHAR(30), "
                "PRIMARY KEY (id)"
                ") "
                "ENGINE=INNODB;";
        requete.prepare(str_requete);


        if(!requete.exec())
        {
            qDebug() << requete.lastError();
            return;
        }

        qDebug() << QString("Table creer preparation de la nouvelle requete");
        //-----------------Ajout d'une nouvelle bande a la liste des bandes
        QSqlQuery requeteInsert;
        requeteInsert.prepare("INSERT INTO liste_Bandes (id, nom, id_race, valeurDeBase, ValeurActuelle, nomTableListeMembre, nomTableListeEquipement)"
                        "VALUES (:id, :nom, :id_race, :valBase, :valActuelle, :nomTableMembre, :nomTableEquipement)");
        requeteInsert.bindValue(":id", NULL );
        requeteInsert.bindValue(":nom", ui->lineEdit_nom->text());
        requeteInsert.bindValue(":id_race", QString::number(ui->comboBox_race->currentIndex() + 1));
        requeteInsert.bindValue(":valBase", QString::number( ui->spinBox_valeur->value()));
        requeteInsert.bindValue(":valActuelle", 0);
        //On en leve les espaces et les carateres speciaux
        QString nomModif;
        nomModif= ui->lineEdit_nom->text();
        nomModif.remove(" ");
        //Il faut retirer les apostrophes et les accents
        //nomModif.normalized(QString::NormalizationForm_KD);
        requeteInsert.bindValue(":nomTableMembre", "listeMembre_"+ nomModif );
        requeteInsert.bindValue(":nomTableEquipement", "listeEquipement_" + nomModif );

        if( !requeteInsert.exec())
                    qDebug() << requeteInsert.lastError();

        /*str_requete="INSERT INTO liste_bandes"
                " SET id=NULL, nom='"+ui->lineEdit_nom->text() +
                "',id_race='"+QString::number(ui->comboBox_race->currentIndex() + 1)+
                "',ValeurDeBase='" + QString::number( ui->spinBox_valeur->value()) +
                "',ValeurActuelle='0" +
                "',nomTableListeMembre=`"+ str_nomTableBande +
                "`,nomTableListeEquipement=`" + str_nomTableEquipement +"`;" ;
         QSqlQuery requeteInsert;
        requeteInsert.prepare( str_requete);
        /*requete.bindValue(":nomBande", ui->lineEdit_nom->text());
            requete.bindValue(":id_race", QString::number(ui->comboBox_race->currentIndex() + 1));
            requete.bindValue(":valBase", QString::number( ui->spinBox_valeur->value()));
            requete.bindValue(":tableMembre", str_nomTableBande);
            requete.bindValue(":tableEquipement", str_nomTableEquipement);*/

        /*if(!requeteInsert.exec()){
            qDebug() << requeteInsert.lastError() << "\n" << requeteInsert.lastQuery();
            return;
        }
        else {
            qDebug() << QString("Nom de la table ajouter a la base");
        }*/

    }

    //Voir quelle race a été choisis

    //Fermer la fenetre
    QDialog::accept();
    //emit accepted();
    //this->close();
}

QStringList Dialog_parametre_bande::getParam()
{
    if(ui->tabWidget->currentWidget() == ui->tab_creationBande)
    {
        m_param << "New" << ui->lineEdit_nom->text() << QString::number(ui->comboBox_race->currentIndex() + 1) << QString::number( ui->spinBox_valeur->value());
    }
    else if(ui->tabWidget->currentWidget() == ui->tab_lectureBande)
    {
        m_param << "View" << ui->listView_choixBande->currentIndex().data().toString() ;
    }

    return m_param;
}
