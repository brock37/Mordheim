#include "dockwidgetlistemembrebande.h"
#include "ui_dockwidgetlistemembrebande.h"

DockWidgetListeMembreBande::DockWidgetListeMembreBande(QSqlDatabase *db, QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::DockWidgetListeMembreBande)
{
    ui->setupUi(this);
    m_model = new QSqlTableModel(this, *db);
    ui->treeView->setModel( m_model);
}

DockWidgetListeMembreBande::~DockWidgetListeMembreBande()
{
    delete ui;
}
