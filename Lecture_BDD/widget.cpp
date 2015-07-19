#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent, QSqlDatabase *database) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    db= database;

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_bouttonAjouter_clicked()
{
    if(!(ui->lineEditAjouter->text().isEmpty()))
    {
        QString nouvelleLigne, texteAfficher;

        nouvelleLigne= "-" + ui->lineEditAjouter->text() + "\n";

        texteAfficher = ui->textEdit->toPlainText() +nouvelleLigne;
        ui->textEdit->setPlainText( texteAfficher);
    }
}

void Widget::on_bouttonEnregister_clicked()
{
    QSqlQuery query;
//Recuperation des données a enregister entourer de ' 'pour la requete sql
    QString rang, race, nom, prix, mvt, cc ,ct, f, e, pv, i, a, Cd, Arme_armure, regles;
    rang="'"+ ui->comboBox_rang->currentText()+"'";
    race="'"+ ui->comboBox_race->currentText()+"'";
    nom="'"+ ui->lineEdit_Type->text()+"'";
    prix="'"+ ui->lineEdit_Prix->text()+"'";

    mvt="'"+ ui->tableWidget->itemAt(0,0)->data(0).toString() +"'" ;
    cc="'"+ ui->tableWidget->item(0,1)->data(0).toString() +"'" ;
    ct= "'"+ ui->tableWidget->item(0,2)->data(0).toString() +"'" ;
    f= "'"+ ui->tableWidget->item(0,3)->data(0).toString() +"'" ;
    e= "'"+ ui->tableWidget->item(0,4)->data(0).toString() +"'" ;
    pv= "'"+ ui->tableWidget->item(0,5)->data(0).toString() +"'" ;
    i= "'"+ ui->tableWidget->item(0,6)->data(0).toString() +"'" ;
    a= "'"+ ui->tableWidget->item(0,7)->data(0).toString() +"'" ;
    Cd= "'"+ ui->tableWidget->item(0,8)->data(0).toString() +"'" ;

    Arme_armure= " ";
    regles =" ";
//Imbriquation dans un seul Qstring
    QString requete;
    requete= "INSERT INTO ref_profil set";

    requete = requete + " Rang=" + rang +",";
    requete = requete + " Race=" + race +",";
    requete = requete + " Nom=" + nom +",";
    requete = requete + " Prix=" + prix +",";

    requete = requete + " M=" + mvt +",";
    requete = requete + " CC=" + cc +",";
    requete = requete + " CT=" + ct +",";
    requete = requete + " F=" + f +",";
    requete = requete + " E=" + e +",";
    requete = requete + " PV=" + pv +",";
    requete = requete + " I=" + i +",";
    requete = requete + " A=" + a +",";
    requete = requete + " Cd=" + Cd ;

    requete =requete +";" ;


    QMessageBox msgBox;
    msgBox.setText(requete);
    msgBox.exec();
    if(query.exec(requete))
    {
        msgBox.setText("Enregistrement effectuer");
        msgBox.exec();
    }
    else
    {
        msgBox.setText(query.lastError().databaseText());
        msgBox.exec();
    }

}
