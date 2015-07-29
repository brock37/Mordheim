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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWidgetListeMembreBande
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;

    void setupUi(QDockWidget *DockWidgetListeMembreBande)
    {
        if (DockWidgetListeMembreBande->objectName().isEmpty())
            DockWidgetListeMembreBande->setObjectName(QStringLiteral("DockWidgetListeMembreBande"));
        DockWidgetListeMembreBande->resize(237, 431);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
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
    } // retranslateUi

};

namespace Ui {
    class DockWidgetListeMembreBande: public Ui_DockWidgetListeMembreBande {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKWIDGETLISTEMEMBREBANDE_H
