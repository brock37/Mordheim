#ifndef WIDGETVUEPROFIL_H
#define WIDGETVUEPROFIL_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class WidgetVueProfil;
}

class WidgetVueProfil : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetVueProfil(QSqlDatabase *db, QWidget *parent = 0);
    ~WidgetVueProfil();


private:
    Ui::WidgetVueProfil *ui;
    QSqlDatabase *m_db;
};

#endif // WIDGETVUEPROFIL_H
