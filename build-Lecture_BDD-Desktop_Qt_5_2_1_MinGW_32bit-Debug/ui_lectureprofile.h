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
#include <QtWidgets/QGroupBox>
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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_race;
    QComboBox *comboBox;
    QTreeView *treeView;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_nom;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_prix;
    QLCDNumber *lcdNumber;
    QTableView *tableView;

    void setupUi(QWidget *LectureProfile)
    {
        if (LectureProfile->objectName().isEmpty())
            LectureProfile->setObjectName(QStringLiteral("LectureProfile"));
        LectureProfile->resize(564, 599);
        verticalLayoutWidget = new QWidget(LectureProfile);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 258, 222));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_race = new QLabel(verticalLayoutWidget);
        label_race->setObjectName(QStringLiteral("label_race"));

        horizontalLayout->addWidget(label_race);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        treeView = new QTreeView(verticalLayoutWidget);
        treeView->setObjectName(QStringLiteral("treeView"));

        verticalLayout->addWidget(treeView);

        groupBox = new QGroupBox(LectureProfile);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(280, 10, 261, 231));
        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 30, 241, 191));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_nom = new QLabel(verticalLayoutWidget_2);
        label_nom->setObjectName(QStringLiteral("label_nom"));

        verticalLayout_2->addWidget(label_nom);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_prix = new QLabel(verticalLayoutWidget_2);
        label_prix->setObjectName(QStringLiteral("label_prix"));

        horizontalLayout_2->addWidget(label_prix);

        lcdNumber = new QLCDNumber(verticalLayoutWidget_2);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        horizontalLayout_2->addWidget(lcdNumber);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tableView = new QTableView(verticalLayoutWidget_2);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);


        retranslateUi(LectureProfile);

        QMetaObject::connectSlotsByName(LectureProfile);
    } // setupUi

    void retranslateUi(QWidget *LectureProfile)
    {
        LectureProfile->setWindowTitle(QApplication::translate("LectureProfile", "Form", 0));
        label_race->setText(QApplication::translate("LectureProfile", "Race", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("LectureProfile", "Nains", 0)
         << QApplication::translate("LectureProfile", "Orques", 0)
         << QApplication::translate("LectureProfile", "Hommes betes", 0)
         << QApplication::translate("LectureProfile", "Skavens", 0)
        );
        groupBox->setTitle(QApplication::translate("LectureProfile", "Profil", 0));
        label_nom->setText(QApplication::translate("LectureProfile", "<html><head/><body><p align=\"center\">TextLabel</p></body></html>", 0));
        label_prix->setText(QApplication::translate("LectureProfile", "Prix", 0));
    } // retranslateUi

};

namespace Ui {
    class LectureProfile: public Ui_LectureProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTUREPROFILE_H
