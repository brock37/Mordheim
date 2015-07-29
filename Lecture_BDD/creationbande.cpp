#include "creationbande.h"
#include "ui_creationbande.h"

CreationBande::CreationBande(QSqlDatabase *db, QStringList queryParam, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreationBande)
{
    ui->setupUi(this);
    m_db= db;

    m_param= queryParam;

}

CreationBande::~CreationBande()
{
    delete ui;
}
