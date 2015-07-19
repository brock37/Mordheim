#include "dialogconnectionbdd.h"
#include "ui_dialogconnectionbdd.h"

DialogConnectionBDD::DialogConnectionBDD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConnectionBDD)
{
    ui->setupUi(this);
    m_hostName= new QString("");
}

DialogConnectionBDD::DialogConnectionBDD(QString *hostName, QWidget *parent ) :
    QDialog(parent),
    ui(new Ui::DialogConnectionBDD),
    m_hostName( hostName)
{

    ui->setupUi(this);
    ui->lineEdit_HostName->setText( *m_hostName);
}

DialogConnectionBDD::~DialogConnectionBDD()
{
    delete ui;
}
