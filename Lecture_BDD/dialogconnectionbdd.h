#ifndef DIALOGCONNECTIONBDD_H
#define DIALOGCONNECTIONBDD_H

#include <QDialog>
#include <QString>

namespace Ui {
class DialogConnectionBDD;
}

class DialogConnectionBDD : public QDialog
{
    Q_OBJECT

public:
    explicit DialogConnectionBDD(QWidget *parent = 0);
    DialogConnectionBDD( QString *hostName, QWidget *parent = 0);
    ~DialogConnectionBDD();

private:
    Ui::DialogConnectionBDD *ui;
    QString *m_hostName;
};

#endif // DIALOGCONNECTIONBDD_H
