#include "lectureprofile.h"
#include "ui_lectureprofile.h"

LectureProfile::LectureProfile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LectureProfile)
{
    ui->setupUi(this);

     QFont fontMordheim("First Order", 12);
     QFont fontMordheim2("First Order", 20);
     ui->groupBox->setFont( fontMordheim);
     ui->comboBox->setFont( fontMordheim);
     ui->label_nom->setFont( fontMordheim2);
     //ui->label_prix->setFont( fontMordheim);
     ui->label_race->setFont( fontMordheim);

    model= new QSqlQueryModel(this);
    changementRace( ui->comboBox->currentText());

    ui->treeView->setModel(model);

    modelCapa= new QSqlQueryModel(this);
    ui->tableView->setModel(modelCapa);


    QObject::connect( ui->treeView, SIGNAL(clicked(QModelIndex)), this, SLOT(changementProfil(QModelIndex)));
    QObject::connect( ui->comboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(changementRace(QString)));

}

LectureProfile::~LectureProfile()
{
    delete ui;
}

void LectureProfile::changementProfil(QModelIndex index)
{
    QString nom="'" +index.data().toString()+"';";
    QString requete_str;
    requete_str= "SELECT prix FROM ref_profil WHERE nom=" + nom;

    QSqlQuery requete;
    if(requete.exec( requete_str))
    {
        while(requete.next())
        {
            QString prix= requete.value(0).toString();
            ui->lcdNumber->display(prix.toInt());
        }
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText(requete.lastError().text());
        msgBox.exec();
    }

    //On actualise le tableau
    rafraichirTableauCapa( index.data().toString());
    return;
}

void LectureProfile::changementRace(QString newRace)
{
    QString requete;
    requete = "SELECT Nom FROM ref_profil INNER JOIN race ON ref_profil.id_race= race.ID WHERE race.nom_race='" + newRace + "';";
    model->setQuery(requete);

    return;
}

void LectureProfile::rafraichirTableauCapa(QString currentProfil)
{
    modelCapa->setQuery("SELECT M, CC, CT, F, E, PV, I, A, Cd FROM ref_Profil WHERE Nom='" + currentProfil + "';");
    ui->tableView->resizeColumnsToContents();
}
