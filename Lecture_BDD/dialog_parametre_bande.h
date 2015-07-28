#ifndef DIALOG_PARAMETRE_BANDE_H
#define DIALOG_PARAMETRE_BANDE_H

#include <QDialog>
#include <QMessageBox>
#include <QStringList>

namespace Ui {
class Dialog_parametre_bande;
}

class Dialog_parametre_bande : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_parametre_bande(QWidget *parent = 0);
    ~Dialog_parametre_bande();
    QStringList getParam();

public slots:
    void accept();

signals:


private:
    Ui::Dialog_parametre_bande *ui;
    QStringList m_param;
};

#endif // DIALOG_PARAMETRE_BANDE_H
