/********************************************************************************
** Form generated from reading UI file 'LectureProfile.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTUREPROFILE_H
#define UI_LECTUREPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LectureProfile
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QTreeView *treeView;
    QTableView *tableView;

    void setupUi(QWidget *LectureProfile)
    {
        if (LectureProfile->objectName().isEmpty())
            LectureProfile->setObjectName(QStringLiteral("LectureProfile"));
        LectureProfile->resize(564, 599);
        horizontalLayoutWidget = new QWidget(LectureProfile);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(360, 50, 118, 25));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lcdNumber = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        horizontalLayout_2->addWidget(lcdNumber);

        verticalLayoutWidget = new QWidget(LectureProfile);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 221, 521));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        treeView = new QTreeView(verticalLayoutWidget);
        treeView->setObjectName(QStringLiteral("treeView"));

        verticalLayout->addWidget(treeView);

        tableView = new QTableView(LectureProfile);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(250, 160, 311, 51));

        retranslateUi(LectureProfile);

        QMetaObject::connectSlotsByName(LectureProfile);
    } // setupUi

    void retranslateUi(QWidget *LectureProfile)
    {
        LectureProfile->setWindowTitle(QApplication::translate("LectureProfile", "Form", 0));
        label_2->setText(QApplication::translate("LectureProfile", "Prix", 0));
        label->setText(QApplication::translate("LectureProfile", "Race", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("LectureProfile", "Nains", 0)
         << QApplication::translate("LectureProfile", "Orques", 0)
         << QApplication::translate("LectureProfile", "Hommes betes", 0)
         << QApplication::translate("LectureProfile", "Skavens", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class LectureProfile: public Ui_LectureProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTUREPROFILE_H
