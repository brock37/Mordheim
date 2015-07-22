#include "acceuil.h"
#include "ui_acceuil.h"

Acceuil::Acceuil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Acceuil)
{
    ui->setupUi(this);

    QFont fontMordheim("First Order", 18);
    ui->label->setFont( fontMordheim);

    QObject::connect( ui->pushButton_Profil, SIGNAL(released()), this, SLOT(selectionUnites()));
}

Acceuil::~Acceuil()
{
    delete ui;
}

void Acceuil::selectionUnites()
{
    emit signalUnites();
}
