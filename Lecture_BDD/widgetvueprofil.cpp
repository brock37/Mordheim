#include "widgetvueprofil.h"
#include "ui_widgetvueprofil.h"

WidgetVueProfil::WidgetVueProfil(QSqlDatabase *db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetVueProfil)
{
    ui->setupUi(this);
    m_db= db;
}

WidgetVueProfil::~WidgetVueProfil()
{
    delete ui;
}


