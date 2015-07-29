#include "widgetvueprofil.h"
#include "ui_widgetvueprofil.h"

WidgetVueProfil::WidgetVueProfil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetVueProfil)
{
    ui->setupUi(this);
}

WidgetVueProfil::~WidgetVueProfil()
{
    delete ui;
}
