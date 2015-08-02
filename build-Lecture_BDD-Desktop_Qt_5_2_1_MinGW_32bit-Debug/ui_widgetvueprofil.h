/********************************************************************************
** Form generated from reading UI file 'widgetvueprofil.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETVUEPROFIL_H
#define UI_WIDGETVUEPROFIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetVueProfil
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_nom;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_rang;
    QFrame *line_2;
    QLabel *label_caracteristiques;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_ajouter;
    QHBoxLayout *horizontalLayout;
    QLabel *label_nombreUniteAjouter;
    QFrame *line;
    QLabel *label_nombreUniteMax;
    QPushButton *pushButton_retirer;
    QLabel *label_capacites;
    QTableView *tableView_caracteristiques;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_regles;
    QListView *listView_caracteristiques;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_descriptionRegles;
    QTextEdit *textEdit_descriptionsRegles;
    QTableView *tableView_capacites;

    void setupUi(QWidget *WidgetVueProfil)
    {
        if (WidgetVueProfil->objectName().isEmpty())
            WidgetVueProfil->setObjectName(QStringLiteral("WidgetVueProfil"));
        WidgetVueProfil->resize(582, 289);
        gridLayout = new QGridLayout(WidgetVueProfil);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_nom = new QLabel(WidgetVueProfil);
        label_nom->setObjectName(QStringLiteral("label_nom"));

        horizontalLayout_2->addWidget(label_nom);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(WidgetVueProfil);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_rang = new QLabel(WidgetVueProfil);
        label_rang->setObjectName(QStringLiteral("label_rang"));

        horizontalLayout_2->addWidget(label_rang);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        line_2 = new QFrame(WidgetVueProfil);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 0, 1, 2);

        label_caracteristiques = new QLabel(WidgetVueProfil);
        label_caracteristiques->setObjectName(QStringLiteral("label_caracteristiques"));

        gridLayout->addWidget(label_caracteristiques, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_ajouter = new QPushButton(WidgetVueProfil);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));

        verticalLayout->addWidget(pushButton_ajouter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_nombreUniteAjouter = new QLabel(WidgetVueProfil);
        label_nombreUniteAjouter->setObjectName(QStringLiteral("label_nombreUniteAjouter"));
        label_nombreUniteAjouter->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_nombreUniteAjouter);

        line = new QFrame(WidgetVueProfil);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        label_nombreUniteMax = new QLabel(WidgetVueProfil);
        label_nombreUniteMax->setObjectName(QStringLiteral("label_nombreUniteMax"));

        horizontalLayout->addWidget(label_nombreUniteMax);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_retirer = new QPushButton(WidgetVueProfil);
        pushButton_retirer->setObjectName(QStringLiteral("pushButton_retirer"));

        verticalLayout->addWidget(pushButton_retirer);


        gridLayout->addLayout(verticalLayout, 3, 2, 2, 1);

        label_capacites = new QLabel(WidgetVueProfil);
        label_capacites->setObjectName(QStringLiteral("label_capacites"));

        gridLayout->addWidget(label_capacites, 1, 1, 1, 1);

        tableView_caracteristiques = new QTableView(WidgetVueProfil);
        tableView_caracteristiques->setObjectName(QStringLiteral("tableView_caracteristiques"));

        gridLayout->addWidget(tableView_caracteristiques, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_regles = new QLabel(WidgetVueProfil);
        label_regles->setObjectName(QStringLiteral("label_regles"));

        verticalLayout_2->addWidget(label_regles);

        listView_caracteristiques = new QListView(WidgetVueProfil);
        listView_caracteristiques->setObjectName(QStringLiteral("listView_caracteristiques"));

        verticalLayout_2->addWidget(listView_caracteristiques);


        gridLayout->addLayout(verticalLayout_2, 4, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_descriptionRegles = new QLabel(WidgetVueProfil);
        label_descriptionRegles->setObjectName(QStringLiteral("label_descriptionRegles"));

        verticalLayout_3->addWidget(label_descriptionRegles);

        textEdit_descriptionsRegles = new QTextEdit(WidgetVueProfil);
        textEdit_descriptionsRegles->setObjectName(QStringLiteral("textEdit_descriptionsRegles"));
        textEdit_descriptionsRegles->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit_descriptionsRegles);


        gridLayout->addLayout(verticalLayout_3, 4, 1, 1, 1);

        tableView_capacites = new QTableView(WidgetVueProfil);
        tableView_capacites->setObjectName(QStringLiteral("tableView_capacites"));

        gridLayout->addWidget(tableView_capacites, 2, 1, 1, 1);


        retranslateUi(WidgetVueProfil);

        QMetaObject::connectSlotsByName(WidgetVueProfil);
    } // setupUi

    void retranslateUi(QWidget *WidgetVueProfil)
    {
        WidgetVueProfil->setWindowTitle(QApplication::translate("WidgetVueProfil", "Form", 0));
        label_nom->setText(QApplication::translate("WidgetVueProfil", "Nom", 0));
        label_rang->setText(QApplication::translate("WidgetVueProfil", "Rang", 0));
        label_caracteristiques->setText(QApplication::translate("WidgetVueProfil", "Caracteristiques", 0));
        pushButton_ajouter->setText(QApplication::translate("WidgetVueProfil", "Ajouter", 0));
        label_nombreUniteAjouter->setText(QApplication::translate("WidgetVueProfil", "0", 0));
        label_nombreUniteMax->setText(QApplication::translate("WidgetVueProfil", "1", 0));
        pushButton_retirer->setText(QApplication::translate("WidgetVueProfil", "Retirer", 0));
        label_capacites->setText(QApplication::translate("WidgetVueProfil", "Capacites", 0));
        label_regles->setText(QApplication::translate("WidgetVueProfil", "R\303\250gles sp\303\251ciales", 0));
        label_descriptionRegles->setText(QApplication::translate("WidgetVueProfil", "Description", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetVueProfil: public Ui_WidgetVueProfil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETVUEPROFIL_H
