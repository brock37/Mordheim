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
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QPushButton *pushButton_recruter;
    QTreeView *treeView;

    void setupUi(QDockWidget *DockWidgetListeMembreBande)
    {
        if (DockWidgetListeMembreBande->objectName().isEmpty())
            DockWidgetListeMembreBande->setObjectName(QStringLiteral("DockWidgetListeMembreBande"));
        DockWidgetListeMembreBande->resize(188, 491);
        DockWidgetListeMembreBande->setMinimumSize(QSize(188, 491));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 340, 151, 121));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 121, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        comboBox_2 = new QComboBox(verticalLayoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout->addWidget(comboBox_2);

        pushButton_recruter = new QPushButton(verticalLayoutWidget);
        pushButton_recruter->setObjectName(QStringLiteral("pushButton_recruter"));

        verticalLayout->addWidget(pushButton_recruter);

        treeView = new QTreeView(dockWidgetContents);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(10, 10, 161, 321));
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
