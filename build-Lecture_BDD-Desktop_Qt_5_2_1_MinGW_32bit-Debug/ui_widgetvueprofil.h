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
    QTableView *tableView_caracteristiques;
    QFrame *line_2;
    QListView *listView_capacites;
    QLabel *label_caracteristiques;
    QLabel *label_capacites;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_nom;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_rang;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_ajouter;
    QHBoxLayout *horizontalLayout;
    QLabel *label_nombreUniteAjouter;
    QFrame *line;
    QLabel *label_nombreUniteMax;
    QPushButton *pushButton_retirer;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_regles;
    QListView *listView_caracteristiques;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_descriptionRegles;
    QTextEdit *textEdit_descriptionsRegles;

    void setupUi(QWidget *WidgetVueProfil)
    {
        if (WidgetVueProfil->objectName().isEmpty())
            WidgetVueProfil->setObjectName(QStringLiteral("WidgetVueProfil"));
        WidgetVueProfil->resize(582, 233);
        tableView_caracteristiques = new QTableView(WidgetVueProfil);
        tableView_caracteristiques->setObjectName(QStringLiteral("tableView_caracteristiques"));
        tableView_caracteristiques->setGeometry(QRect(10, 50, 231, 31));
        line_2 = new QFrame(WidgetVueProfil);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 90, 481, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        listView_capacites = new QListView(WidgetVueProfil);
        listView_capacites->setObjectName(QStringLiteral("listView_capacites"));
        listView_capacites->setGeometry(QRect(260, 50, 231, 31));
        label_caracteristiques = new QLabel(WidgetVueProfil);
        label_caracteristiques->setObjectName(QStringLiteral("label_caracteristiques"));
        label_caracteristiques->setGeometry(QRect(10, 30, 101, 16));
        label_capacites = new QLabel(WidgetVueProfil);
        label_capacites->setObjectName(QStringLiteral("label_capacites"));
        label_capacites->setGeometry(QRect(260, 30, 46, 13));
        horizontalLayoutWidget_2 = new QWidget(WidgetVueProfil);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 0, 481, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_nom = new QLabel(horizontalLayoutWidget_2);
        label_nom->setObjectName(QStringLiteral("label_nom"));

        horizontalLayout_2->addWidget(label_nom);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_rang = new QLabel(horizontalLayoutWidget_2);
        label_rang->setObjectName(QStringLiteral("label_rang"));

        horizontalLayout_2->addWidget(label_rang);

        verticalLayoutWidget = new QWidget(WidgetVueProfil);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(500, 50, 77, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_ajouter = new QPushButton(verticalLayoutWidget);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));

        verticalLayout->addWidget(pushButton_ajouter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_nombreUniteAjouter = new QLabel(verticalLayoutWidget);
        label_nombreUniteAjouter->setObjectName(QStringLiteral("label_nombreUniteAjouter"));
        label_nombreUniteAjouter->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_nombreUniteAjouter);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        label_nombreUniteMax = new QLabel(verticalLayoutWidget);
        label_nombreUniteMax->setObjectName(QStringLiteral("label_nombreUniteMax"));

        horizontalLayout->addWidget(label_nombreUniteMax);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_retirer = new QPushButton(verticalLayoutWidget);
        pushButton_retirer->setObjectName(QStringLiteral("pushButton_retirer"));

        verticalLayout->addWidget(pushButton_retirer);

        verticalLayoutWidget_2 = new QWidget(WidgetVueProfil);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 110, 231, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_regles = new QLabel(verticalLayoutWidget_2);
        label_regles->setObjectName(QStringLiteral("label_regles"));

        verticalLayout_2->addWidget(label_regles);

        listView_caracteristiques = new QListView(verticalLayoutWidget_2);
        listView_caracteristiques->setObjectName(QStringLiteral("listView_caracteristiques"));

        verticalLayout_2->addWidget(listView_caracteristiques);

        verticalLayoutWidget_3 = new QWidget(WidgetVueProfil);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(260, 110, 231, 111));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_descriptionRegles = new QLabel(verticalLayoutWidget_3);
        label_descriptionRegles->setObjectName(QStringLiteral("label_descriptionRegles"));

        verticalLayout_3->addWidget(label_descriptionRegles);

        textEdit_descriptionsRegles = new QTextEdit(verticalLayoutWidget_3);
        textEdit_descriptionsRegles->setObjectName(QStringLiteral("textEdit_descriptionsRegles"));
        textEdit_descriptionsRegles->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit_descriptionsRegles);


        retranslateUi(WidgetVueProfil);

        QMetaObject::connectSlotsByName(WidgetVueProfil);
    } // setupUi

    void retranslateUi(QWidget *WidgetVueProfil)
    {
        WidgetVueProfil->setWindowTitle(QApplication::translate("WidgetVueProfil", "Form", 0));
        label_caracteristiques->setText(QApplication::translate("WidgetVueProfil", "Caracteristiques", 0));
        label_capacites->setText(QApplication::translate("WidgetVueProfil", "Capacites", 0));
        label_nom->setText(QApplication::translate("WidgetVueProfil", "Nom", 0));
        label_rang->setText(QApplication::translate("WidgetVueProfil", "Rang", 0));
        pushButton_ajouter->setText(QApplication::translate("WidgetVueProfil", "Ajouter", 0));
        label_nombreUniteAjouter->setText(QApplication::translate("WidgetVueProfil", "0", 0));
        label_nombreUniteMax->setText(QApplication::translate("WidgetVueProfil", "1", 0));
        pushButton_retirer->setText(QApplication::translate("WidgetVueProfil", "Retirer", 0));
        label_regles->setText(QApplication::translate("WidgetVueProfil", "R\303\250gles sp\303\251ciales", 0));
        label_descriptionRegles->setText(QApplication::translate("WidgetVueProfil", "Description", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetVueProfil: public Ui_WidgetVueProfil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETVUEPROFIL_H
