/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QTableWidget *realTimeSecurity;
    QPushButton *pushButton;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *realTimeSecurityAuthFail;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *realTimeSecuritySudoFail;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *realTimeSecurityCodeSignIssue;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *realTimeSecurityGatekeeper;
    QWidget *tab_8;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *realTimeSecurityKeychain;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *realTimeSecurityFileAccess;
    QWidget *tab_9;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *realTimeSecuritySIPViolation;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(919, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setTabPosition(QTabWidget::TabPosition::West);
        tabWidget->setTabShape(QTabWidget::TabShape::Rounded);
        tabWidget->setIconSize(QSize(32, 32));
        tabWidget->setElideMode(Qt::TextElideMode::ElideRight);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName("verticalLayout");
        realTimeSecurity = new QTableWidget(tab);
        realTimeSecurity->setObjectName("realTimeSecurity");

        verticalLayout->addWidget(realTimeSecurity);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setTabBarAutoHide(false);
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        horizontalLayout_3 = new QHBoxLayout(tab_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        realTimeSecurityAuthFail = new QTableWidget(tab_3);
        realTimeSecurityAuthFail->setObjectName("realTimeSecurityAuthFail");

        horizontalLayout_3->addWidget(realTimeSecurityAuthFail);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_2 = new QVBoxLayout(tab_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        realTimeSecuritySudoFail = new QTableWidget(tab_4);
        realTimeSecuritySudoFail->setObjectName("realTimeSecuritySudoFail");

        verticalLayout_2->addWidget(realTimeSecuritySudoFail);

        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        verticalLayout_3 = new QVBoxLayout(tab_5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        realTimeSecurityCodeSignIssue = new QTableWidget(tab_5);
        realTimeSecurityCodeSignIssue->setObjectName("realTimeSecurityCodeSignIssue");

        verticalLayout_3->addWidget(realTimeSecurityCodeSignIssue);

        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        verticalLayout_4 = new QVBoxLayout(tab_6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        realTimeSecurityGatekeeper = new QTableWidget(tab_6);
        realTimeSecurityGatekeeper->setObjectName("realTimeSecurityGatekeeper");

        verticalLayout_4->addWidget(realTimeSecurityGatekeeper);

        tabWidget_2->addTab(tab_6, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        verticalLayout_5 = new QVBoxLayout(tab_8);
        verticalLayout_5->setObjectName("verticalLayout_5");
        realTimeSecurityKeychain = new QTableWidget(tab_8);
        realTimeSecurityKeychain->setObjectName("realTimeSecurityKeychain");

        verticalLayout_5->addWidget(realTimeSecurityKeychain);

        tabWidget_2->addTab(tab_8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        verticalLayout_7 = new QVBoxLayout(tab_7);
        verticalLayout_7->setObjectName("verticalLayout_7");
        realTimeSecurityFileAccess = new QTableWidget(tab_7);
        realTimeSecurityFileAccess->setObjectName("realTimeSecurityFileAccess");

        verticalLayout_7->addWidget(realTimeSecurityFileAccess);

        tabWidget_2->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName("tab_9");
        verticalLayout_6 = new QVBoxLayout(tab_9);
        verticalLayout_6->setObjectName("verticalLayout_6");
        realTimeSecuritySIPViolation = new QTableWidget(tab_9);
        realTimeSecuritySIPViolation->setObjectName("realTimeSecuritySIPViolation");

        verticalLayout_6->addWidget(realTimeSecuritySIPViolation);

        tabWidget_2->addTab(tab_9, QString());

        verticalLayout->addWidget(tabWidget_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 919, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "General Errors", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Authentication Failure", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Sudo Failures", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Code Signing Issues", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Gatekeeper", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Keychain", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("MainWindow", "File Access Restrictions", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QCoreApplication::translate("MainWindow", "SIP Violations", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
