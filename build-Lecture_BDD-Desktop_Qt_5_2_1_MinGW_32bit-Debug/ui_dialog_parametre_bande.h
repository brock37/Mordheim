/********************************************************************************
** Form generated from reading UI file 'dialog_parametre_bande.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_PARAMETRE_BANDE_H
#define UI_DIALOG_PARAMETRE_BANDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_parametre_bande
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab_creationBande;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_valeur;
    QSpinBox *spinBox_valeur;
    QHBoxLayout *horizontalLayout;
    QLabel *label_race;
    QComboBox *comboBox_race;
    QVBoxLayout *verticalLayout;
    QLabel *label_nom;
    QLineEdit *lineEdit_nom;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QWidget *tab_lectureBande;

    void setupUi(QDialog *Dialog_parametre_bande)
    {
        if (Dialog_parametre_bande->objectName().isEmpty())
            Dialog_parametre_bande->setObjectName(QStringLiteral("Dialog_parametre_bande"));
        Dialog_parametre_bande->resize(289, 241);
        Dialog_parametre_bande->setMinimumSize(QSize(289, 241));
        verticalLayout_3 = new QVBoxLayout(Dialog_parametre_bande);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new QTabWidget(Dialog_parametre_bande);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_creationBande = new QWidget();
        tab_creationBande->setObjectName(QStringLiteral("tab_creationBande"));
        verticalLayout_4 = new QVBoxLayout(tab_creationBande);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(tab_creationBande);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_valeur = new QLabel(tab_creationBande);
        label_valeur->setObjectName(QStringLiteral("label_valeur"));

        horizontalLayout_2->addWidget(label_valeur);

        spinBox_valeur = new QSpinBox(tab_creationBande);
        spinBox_valeur->setObjectName(QStringLiteral("spinBox_valeur"));
        spinBox_valeur->setMaximum(1000);
        spinBox_valeur->setValue(500);

        horizontalLayout_2->addWidget(spinBox_valeur);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_race = new QLabel(tab_creationBande);
        label_race->setObjectName(QStringLiteral("label_race"));

        horizontalLayout->addWidget(label_race);

        comboBox_race = new QComboBox(tab_creationBande);
        comboBox_race->setObjectName(QStringLiteral("comboBox_race"));

        horizontalLayout->addWidget(comboBox_race);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_nom = new QLabel(tab_creationBande);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setLayoutDirection(Qt::LeftToRight);
        label_nom->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_nom);

        lineEdit_nom = new QLineEdit(tab_creationBande);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));

        verticalLayout->addWidget(lineEdit_nom);


        verticalLayout_4->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        buttonBox = new QDialogButtonBox(tab_creationBande);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        verticalLayout_4->addLayout(verticalLayout_2);

        tabWidget->addTab(tab_creationBande, QString());
        tab_lectureBande = new QWidget();
        tab_lectureBande->setObjectName(QStringLiteral("tab_lectureBande"));
        tabWidget->addTab(tab_lectureBande, QString());

        verticalLayout_3->addWidget(tabWidget);


        retranslateUi(Dialog_parametre_bande);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_parametre_bande, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_parametre_bande, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog_parametre_bande);
    } // setupUi

    void retranslateUi(QDialog *Dialog_parametre_bande)
    {
        Dialog_parametre_bande->setWindowTitle(QApplication::translate("Dialog_parametre_bande", "Dialog", 0));
        label->setText(QApplication::translate("Dialog_parametre_bande", "Creation d'une bande", 0));
        label_valeur->setText(QApplication::translate("Dialog_parametre_bande", "Valeur max de la bande:", 0));
        label_race->setText(QApplication::translate("Dialog_parametre_bande", "Race de la bande:", 0));
        label_nom->setText(QApplication::translate("Dialog_parametre_bande", "Nom de la bande", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_creationBande), QApplication::translate("Dialog_parametre_bande", "Cr\303\251ation d'une bande", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_lectureBande), QApplication::translate("Dialog_parametre_bande", "Voir / Modifier une bande", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_parametre_bande: public Ui_Dialog_parametre_bande {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PARAMETRE_BANDE_H
