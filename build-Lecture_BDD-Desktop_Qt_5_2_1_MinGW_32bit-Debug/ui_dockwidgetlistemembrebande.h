/********************************************************************************
** Form generated from reading UI file 'dockwidgetlistemembrebande.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKWIDGETLISTEMEMBREBANDE_H
#define UI_DOCKWIDGETLISTEMEMBREBANDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWidgetListeMembreBande
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_bande;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox_rang;
    QComboBox *comboBox_unite;
    QPushButton *pushButton_recruter;
    QTreeView *treeView;

    void setupUi(QDockWidget *DockWidgetListeMembreBande)
    {
        if (DockWidgetListeMembreBande->objectName().isEmpty())
            DockWidgetListeMembreBande->setObjectName(QStringLiteral("DockWidgetListeMembreBande"));
        DockWidgetListeMembreBande->resize(227, 491);
        DockWidgetListeMembreBande->setMinimumSize(QSize(227, 491));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox_bande = new QComboBox(dockWidgetContents);
        comboBox_bande->setObjectName(QStringLiteral("comboBox_bande"));

        verticalLayout->addWidget(comboBox_bande);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        comboBox_rang = new QComboBox(groupBox);
        comboBox_rang->setObjectName(QStringLiteral("comboBox_rang"));

        verticalLayout_2->addWidget(comboBox_rang);

        comboBox_unite = new QComboBox(groupBox);
        comboBox_unite->setObjectName(QStringLiteral("comboBox_unite"));

        verticalLayout_2->addWidget(comboBox_unite);

        pushButton_recruter = new QPushButton(groupBox);
        pushButton_recruter->setObjectName(QStringLiteral("pushButton_recruter"));

        verticalLayout_2->addWidget(pushButton_recruter);


        verticalLayout->addWidget(groupBox);

        treeView = new QTreeView(dockWidgetContents);
        treeView->setObjectName(QStringLiteral("treeView"));

        verticalLayout->addWidget(treeView);

        DockWidgetListeMembreBande->setWidget(dockWidgetContents);

        retranslateUi(DockWidgetListeMembreBande);

        QMetaObject::connectSlotsByName(DockWidgetListeMembreBande);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidgetListeMembreBande)
    {
        DockWidgetListeMembreBande->setWindowTitle(QApplication::translate("DockWidgetListeMembreBande", "DockWidget", 0));
        groupBox->setTitle(QApplication::translate("DockWidgetListeMembreBande", "Recruter un Gars", 0));
        pushButton_recruter->setText(QApplication::translate("DockWidgetListeMembreBande", "Recruter", 0));
    } // retranslateUi

};

namespace Ui {
    class DockWidgetListeMembreBande: public Ui_DockWidgetListeMembreBande {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKWIDGETLISTEMEMBREBANDE_H
