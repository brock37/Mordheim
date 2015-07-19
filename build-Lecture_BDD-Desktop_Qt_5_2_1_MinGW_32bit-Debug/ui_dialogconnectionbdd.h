/********************************************************************************
** Form generated from reading UI file 'dialogconnectionbdd.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONNECTIONBDD_H
#define UI_DIALOGCONNECTIONBDD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogConnectionBDD
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_HostName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_DBName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_UserName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_Password;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogConnectionBDD)
    {
        if (DialogConnectionBDD->objectName().isEmpty())
            DialogConnectionBDD->setObjectName(QStringLiteral("DialogConnectionBDD"));
        DialogConnectionBDD->resize(400, 300);
        DialogConnectionBDD->setModal(true);
        gridLayout = new QGridLayout(DialogConnectionBDD);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(DialogConnectionBDD);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_HostName = new QLineEdit(DialogConnectionBDD);
        lineEdit_HostName->setObjectName(QStringLiteral("lineEdit_HostName"));

        horizontalLayout->addWidget(lineEdit_HostName);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(DialogConnectionBDD);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_DBName = new QLineEdit(DialogConnectionBDD);
        lineEdit_DBName->setObjectName(QStringLiteral("lineEdit_DBName"));

        horizontalLayout_4->addWidget(lineEdit_DBName);


        gridLayout->addLayout(horizontalLayout_4, 0, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(DialogConnectionBDD);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_UserName = new QLineEdit(DialogConnectionBDD);
        lineEdit_UserName->setObjectName(QStringLiteral("lineEdit_UserName"));

        horizontalLayout_2->addWidget(lineEdit_UserName);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(DialogConnectionBDD);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_Password = new QLineEdit(DialogConnectionBDD);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEdit_Password);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 2, 2);

        buttonBox = new QDialogButtonBox(DialogConnectionBDD);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 2);


        retranslateUi(DialogConnectionBDD);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogConnectionBDD, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogConnectionBDD, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogConnectionBDD);
    } // setupUi

    void retranslateUi(QDialog *DialogConnectionBDD)
    {
        DialogConnectionBDD->setWindowTitle(QApplication::translate("DialogConnectionBDD", "Configurer Base de donnees", 0));
        label->setText(QApplication::translate("DialogConnectionBDD", "Host name:", 0));
        label_4->setText(QApplication::translate("DialogConnectionBDD", "Data Base name:", 0));
        label_2->setText(QApplication::translate("DialogConnectionBDD", "User name:", 0));
        label_3->setText(QApplication::translate("DialogConnectionBDD", "Password:", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogConnectionBDD: public Ui_DialogConnectionBDD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONNECTIONBDD_H
