/********************************************************************************
** Form generated from reading UI file 'creationbande.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATIONBANDE_H
#define UI_CREATIONBANDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreationBande
{
public:

    void setupUi(QWidget *CreationBande)
    {
        if (CreationBande->objectName().isEmpty())
            CreationBande->setObjectName(QStringLiteral("CreationBande"));
        CreationBande->resize(582, 418);

        retranslateUi(CreationBande);

        QMetaObject::connectSlotsByName(CreationBande);
    } // setupUi

    void retranslateUi(QWidget *CreationBande)
    {
        CreationBande->setWindowTitle(QApplication::translate("CreationBande", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class CreationBande: public Ui_CreationBande {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATIONBANDE_H
