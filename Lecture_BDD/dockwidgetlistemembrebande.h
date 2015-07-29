#ifndef DOCKWIDGETLISTEMEMBREBANDE_H
#define DOCKWIDGETLISTEMEMBREBANDE_H

#include <QDockWidget>

namespace Ui {
class DockWidgetListeMembreBande;
}

class DockWidgetListeMembreBande : public QDockWidget
{
    Q_OBJECT

public:
    explicit DockWidgetListeMembreBande(QWidget *parent = 0);
    ~DockWidgetListeMembreBande();

private:
    Ui::DockWidgetListeMembreBande *ui;
};

#endif // DOCKWIDGETLISTEMEMBREBANDE_H
