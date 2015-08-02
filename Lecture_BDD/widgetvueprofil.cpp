#include "widgetvueprofil.h"
#include "ui_widgetvueprofil.h"

WidgetVueProfil::WidgetVueProfil(QSqlDatabase *db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetVueProfil)
{
    ui->setupUi(this);

    m_db= db;

    m_modelCaract= new QSqlQueryModel(this);
    ui->tableView_caracteristiques->setModel(m_modelCaract);


}

WidgetVueProfil::~WidgetVueProfil()
{
    delete ui;
}

void WidgetVueProfil::rafraichirProfil(QString typeUnite)
{

    //QMessageBox::information(this ,"", "Sa devrais marcher");
    QSqlQuery requete(*m_db);
    requete.prepare("SELECT * FROM ref_profil WHERE nom=:nomUnite");
    requete.bindValue(":nomUnite", typeUnite, QSql::Out);


    if(requete.exec())
    {

        while( requete.next())
        {
            m_modelCaract->setQuery("SELECT M, CC, CT, F, E, PV, I, A, Cd FROM ref_Profil WHERE Nom='" + typeUnite + "';");
            ui->tableView_caracteristiques->resizeColumnsToContents();

            //QMessageBox::information(this, " ", requete.value("nom").toString());
            ui->label_nom->setText( requete.value("nom").toString());

        }

    }


}

