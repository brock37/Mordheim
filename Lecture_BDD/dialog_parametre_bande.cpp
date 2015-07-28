#include "dialog_parametre_bande.h"
#include "ui_dialog_parametre_bande.h"

Dialog_parametre_bande::Dialog_parametre_bande(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_parametre_bande)
{
    ui->setupUi(this);

    QFont fontMordheim("First Order", 16);
    QFont fontMordheim2("First Order", 20);
    this->setFont( fontMordheim2);
    ui->label_nom->setFont( fontMordheim);
    ui->label_valeur->setFont( fontMordheim);
    ui->label_race->setFont( fontMordheim);

}

Dialog_parametre_bande::~Dialog_parametre_bande()
{
    delete ui;
}

void Dialog_parametre_bande::accept()
{
    //Verifier qu'un nom de bande a bien été donnée
    //Voir quelle race a été choisis
    //Fermer la fenetre
    this->close();
}
