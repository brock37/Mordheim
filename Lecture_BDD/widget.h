#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QtSql>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0, QSqlDatabase *database = 0);
    ~Widget();

public slots:
    void on_bouttonAjouter_clicked();
    void on_bouttonEnregister_clicked();

private:
    Ui::Widget *ui;
    QSqlDatabase *db;

};

#endif // WIDGET_H
