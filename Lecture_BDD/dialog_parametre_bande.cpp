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
