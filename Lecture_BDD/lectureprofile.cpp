#include "lectureprofile.h"
#include "ui_lectureprofile.h"

LectureProfile::LectureProfile(QWidget *parent, QSqlDatabase *dataBase) :
    QWidget(parent),
    ui(new Ui::LectureProfile)
{
    ui->setupUi(this);

    db= dataBase;

     QFont fontMordheim("First Order", 12);
     QFont fontMordheim2("First Order", 20);

     ui->label_race->setFont( fontMordheim);
     ui->comboBox->setFont( fontMordheim);

     ui->groupBox->setFont( fontMordheim);
     ui->label_nom->setFont( fontMordheim2);
     ui->label_regles->setFont( fontMordheim2);


    model= new QSqlQueryModel(this);
    ui->treeView->setModel(model);
    changementRace( ui->comboBox->currentText());

    modelRegles= new QSqlQueryModel(this);
    ui->listView_regles->setModel( modelRegles);

    modelCapa= new QSqlQueryModel(this);
    ui->tableView->setModel(modelCapa);
    changementProfil(model->index(0,0));


    ui->textEdit_regles->setReadOnly( true);

    QObject::connect( ui->treeView, SIGNAL(clicked(QModelIndex)), this, SLOT(changementProfil(QModelIndex)));
    QObject::connect( ui->comboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(changementRace(QString)));
    QObject::connect( ui->listView_regles, SIGNAL(clicked(QModelIndex)), this, SLOT(changerTexteRegles(QModelIndex)));

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
    changementRegles( nom);

    //afficher le texte descriptif

    return;
}

void LectureProfile::changementRace(QString newRace)
{
    QString requete;
    requete = "SELECT Nom FROM ref_profil INNER JOIN race ON ref_profil.id_race= race.ID WHERE race.nom_race='" + newRace + "';";
    model->setQuery(requete, *db);

    return;
}

void LectureProfile::rafraichirTableauCapa(QString currentProfil)
{
    modelCapa->setQuery("SELECT M, CC, CT, F, E, PV, I, A, Cd FROM ref_Profil WHERE Nom='" + currentProfil + "';");
    ui->tableView->resizeColumnsToContents();
}

void LectureProfile::changerTexteRegles(QModelIndex index)
{
    QSqlQuery requete;
    QString requete_str;
    requete_str = "SELECT descritpion FROM regles_speciales WHERE nom='" + index.data().toString() + "';";
    if(requete.exec(requete_str))
    {
        while(requete.next())
        {
            const QString record= requete.value(0).toString();
            ui->textEdit_regles->setPlainText( record);
        }
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText(requete.lastError().text());
        msgBox.exec();
    }

}

void LectureProfile::changementRegles(QString nom)
{
    //Recuperer la liste de nom des regles
    QString requete;
    int index= ui->comboBox->currentIndex()+ 1; //on ajoute +1 a index pour avoir un idex qui commence de 1
    QString index_str;
    index_str= QString::number(index);

    requete= "SELECT regles_speciales.nom FROM regles_speciales ";
    requete = requete +  "LEFT JOIN ref_profil ";
    requete = requete + "ON regles_speciales.id_personnage = ref_profil.id ";
    requete = requete + "WHERE ref_profil.nom='" + nom +"' ";
    requete = requete + "OR regles_speciales.id_race ="+ index_str + ";" ;

    //Afficher la liste de nom
    modelRegles->setQuery(requete , *db);

    //afficher le texte descriptif
    changerTexteRegles( modelRegles->index(0,0));
    return;
}
