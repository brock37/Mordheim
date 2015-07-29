#ifndef DOCKWIDGETLISTEMEMBREBANDE_H
#define DOCKWIDGETLISTEMEMBREBANDE_H

#include <QDockWidget>
#include <QSqlTableModel>

namespace Ui {
class DockWidgetListeMembreBande;
}

class DockWidgetListeMembreBande : public QDockWidget
{
    Q_OBJECT

public:
    explicit DockWidgetListeMembreBande(QSqlDatabase *db, QWidget *parent = 0);
    ~DockWidgetListeMembreBande();

private:
    Ui::DockWidgetListeMembreBande *ui;
    QSqlTableModel *m_model;
};

#endif // DOCKWIDGETLISTEMEMBREBANDE_H
