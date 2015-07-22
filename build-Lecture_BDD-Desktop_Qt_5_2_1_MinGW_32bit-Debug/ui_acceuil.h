/********************************************************************************
** Form generated from reading UI file 'acceuil.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCEUIL_H
#define UI_ACCEUIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Acceuil
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_Profil;
    QPushButton *pushButton_listeBande;
    QPushButton *pushButton_Campagne;

    void setupUi(QWidget *Acceuil)
    {
        if (Acceuil->objectName().isEmpty())
            Acceuil->setObjectName(QStringLiteral("Acceuil"));
        Acceuil->resize(431, 438);
        verticalLayout = new QVBoxLayout(Acceuil);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Acceuil);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        pushButton_Profil = new QPushButton(Acceuil);
        pushButton_Profil->setObjectName(QStringLiteral("pushButton_Profil"));
        QIcon icon;
        icon.addFile(QStringLiteral("../Ressources/Boutons/Icone-Mordheim_unite.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Profil->setIcon(icon);
        pushButton_Profil->setIconSize(QSize(128, 128));

        verticalLayout->addWidget(pushButton_Profil);

        pushButton_listeBande = new QPushButton(Acceuil);
        pushButton_listeBande->setObjectName(QStringLiteral("pushButton_listeBande"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../Ressources/Boutons/Icone-Mordheim_bandes.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_listeBande->setIcon(icon1);
        pushButton_listeBande->setIconSize(QSize(128, 128));

        verticalLayout->addWidget(pushButton_listeBande);

        pushButton_Campagne = new QPushButton(Acceuil);
        pushButton_Campagne->setObjectName(QStringLiteral("pushButton_Campagne"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../Ressources/Boutons/Icone-Mordheim_campagne.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Campagne->setIcon(icon2);
        pushButton_Campagne->setIconSize(QSize(128, 128));

        verticalLayout->addWidget(pushButton_Campagne);


        retranslateUi(Acceuil);

        QMetaObject::connectSlotsByName(Acceuil);
    } // setupUi

    void retranslateUi(QWidget *Acceuil)
    {
        Acceuil->setWindowTitle(QApplication::translate("Acceuil", "Form", 0));
        label->setText(QApplication::translate("Acceuil", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Mordheim</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_Profil->setToolTip(QApplication::translate("Acceuil", "Ajouter ou modifier une unit\303\251", 0));
#endif // QT_NO_TOOLTIP
        pushButton_Profil->setText(QString());
        pushButton_listeBande->setText(QString());
        pushButton_Campagne->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Acceuil: public Ui_Acceuil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCEUIL_H
