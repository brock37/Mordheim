#include "lectureprofile.h"
#include "ui_lectureprofile.h"

LectureProfile::LectureProfile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LectureProfile)
{
    ui->setupUi(this);

     QFont fontMordheim("First Order", 12);
     QFont fontMordheim2("First Order", 20);

     ui->label_race->setFont( fontMordheim);
     ui->comboBox->setFont( fontMordheim);

     ui->groupBox->setFont( fontMordheim);
     ui->label_nom->setFont( fontMordheim2);


    model= new QSqlQueryModel(this);
    ui->treeView->setModel(model);
    changementRace( ui->comboBox->currentText());



    modelCapa= new QSqlQueryModel(this);
    ui->tableView->setModel(modelCapa);
    changementProfil(model->index(0,0));

    modelRegles= new QSqlQueryModel(this);
    ui->listView_regles->setModel( modelRegles);


    QObject::connect( ui->treeView, SIGNAL(clicked(QModelIndex)), this, SLOT(changementProfil(QModelIndex)));
    QObject::connect( ui->comboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(changementRace(QString)));

}

LectureProfile::~LectureProfile()
{
    delete ui;
}

void LectureProfile::changementProfil(QModelIndex index)
{
    QString nom=index.data().toString();
    QString requete_str;
    requete_str= "SELECT prix FROM ref_profil WHERE nom='" + nom + "';";

    ui->label_nom->setText( index.data().toString());

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

    //Recuperer la liste de nom des regles
    //Afficher la liste de nom
    //changementRegles( index);
    //afficher le texte descriptif

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

void LectureProfile::changerTexteRegles(QModelIndex index)
{

}

void LectureProfile::changementRegles(QModelIndex index)
{
    //Recuperer la liste de nom des regles
    QString requete;
    requete= "SELECT regles_speciales.nom FROM regles_speciales ";
    requete = requete +  "LEFT JOIN ref_profil ";
    requete = requete + "ON regles_speciales.id_personnage = ref_profil.id ";
    requete = requete + "WHERE ref_profil.nom='" + index.data().toString();
    requete = requete + " OR regles_speciales.id_race ='"+ ui->comboBox->currentIndex() + "';" ;

    modelRegles->setQuery(requete);

    //Afficher la liste de nom

    //afficher le texte descriptif
    return;
}
