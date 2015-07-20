#include "lectureprofile.h"
#include "ui_lectureprofile.h"

LectureProfile::LectureProfile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LectureProfile)
{
    ui->setupUi(this);
    model= new QSqlQueryModel(this);
    model->setQuery("SELECT Nom FROM ref_profil");

    ui->treeView->setModel(model);
    QObject::connect( ui->treeView, SIGNAL(clicked(QModelIndex)), this, SLOT(changementProfil(QModelIndex)));


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
    return;
}
