#ifndef PARAMETREBANDE_H
#define PARAMETREBANDE_H

#include <QWidget>

namespace Ui {
class ParametreBande;
}

class ParametreBande : public QWidget
{
    Q_OBJECT

public:
    explicit ParametreBande(QWidget *parent = 0);
    ~ParametreBande();

private:
    Ui::ParametreBande *ui;
};

#endif // PARAMETREBANDE_H
