/********************************************************************************
** Form generated from reading UI file 'lectureprofile.ui'
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LectureProfile
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *LectureProfile)
    {
        if (LectureProfile->objectName().isEmpty())
            LectureProfile->setObjectName(QStringLiteral("LectureProfile"));
        LectureProfile->resize(758, 492);
        horizontalLayout = new QHBoxLayout(LectureProfile);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(LectureProfile);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(LectureProfile);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LectureProfile);
    } // setupUi

    void retranslateUi(QWidget *LectureProfile)
    {
        LectureProfile->setWindowTitle(QApplication::translate("LectureProfile", "Form", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("LectureProfile", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("LectureProfile", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class LectureProfile: public Ui_LectureProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTUREPROFILE_H
