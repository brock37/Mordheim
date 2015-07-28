#ifndef ACCEUIL_H
#define ACCEUIL_H

#include <QWidget>

namespace Ui {
class Acceuil;
}

class Acceuil : public QWidget
{
    Q_OBJECT

public:
    explicit Acceuil(QWidget *parent = 0);
    ~Acceuil();

public slots:
        void selectionUnites();
        void creerBande();

signals:
        void signalUnites();
        void signalCreerBande();


private:
    Ui::Acceuil *ui;
};

#endif // ACCEUIL_H
