#include "parametrebande.h"
#include "ui_parametrebande.h"

ParametreBande::ParametreBande(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParametreBande)
{
    ui->setupUi(this);
}

ParametreBande::~ParametreBande()
{
    delete ui;
}
