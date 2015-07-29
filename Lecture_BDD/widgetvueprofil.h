#ifndef WIDGETVUEPROFIL_H
#define WIDGETVUEPROFIL_H

#include <QWidget>

namespace Ui {
class WidgetVueProfil;
}

class WidgetVueProfil : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetVueProfil(QWidget *parent = 0);
    ~WidgetVueProfil();

private:
    Ui::WidgetVueProfil *ui;
};

#endif // WIDGETVUEPROFIL_H
