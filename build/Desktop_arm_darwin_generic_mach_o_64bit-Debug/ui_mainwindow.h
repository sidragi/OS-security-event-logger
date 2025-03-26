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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
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
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_10;
    QTableWidget *realTimeSecurityAuthFail;
    QPushButton *pushButton_4;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *realTimeSecuritySudoFail;
    QPushButton *pushButton_6;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *realTimeSecurityCodeSignIssue;
    QPushButton *pushButton_7;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *realTimeSecurityGatekeeper;
    QPushButton *pushButton_8;
    QWidget *tab_8;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *realTimeSecurityKeychain;
    QPushButton *pushButton_9;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *realTimeSecurityFileAccess;
    QPushButton *pushButton_10;
    QWidget *tab_9;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *realTimeSecuritySIPViolation;
    QPushButton *pushButton_11;
    QWidget *tab_13;
    QVBoxLayout *verticalLayout_13;
    QTabWidget *tabWidget_4;
    QWidget *tab_14;
    QVBoxLayout *verticalLayout_14;
    QTableWidget *realtimeProcess;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *refreshTimer;
    QPushButton *pushButton_12;
    QWidget *tab_15;
    QVBoxLayout *verticalLayout_15;
    QTableWidget *runningProcess;
    QPushButton *refreshRunning;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_8;
    QTabWidget *tabWidget_3;
    QWidget *tab_10;
    QVBoxLayout *verticalLayout_9;
    QTableWidget *fileChangesUsers;
    QWidget *tab_11;
    QVBoxLayout *verticalLayout_11;
    QTableWidget *fileChangesSecurity;
    QWidget *tab_12;
    QVBoxLayout *verticalLayout_12;
    QTableWidget *fileChangesDevelopement;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
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

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);

        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout_3->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_3);

        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setTabBarAutoHide(false);
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_10 = new QVBoxLayout(tab_3);
        verticalLayout_10->setObjectName("verticalLayout_10");
        realTimeSecurityAuthFail = new QTableWidget(tab_3);
        realTimeSecurityAuthFail->setObjectName("realTimeSecurityAuthFail");

        verticalLayout_10->addWidget(realTimeSecurityAuthFail);

        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_10->addWidget(pushButton_4);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_2 = new QVBoxLayout(tab_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        realTimeSecuritySudoFail = new QTableWidget(tab_4);
        realTimeSecuritySudoFail->setObjectName("realTimeSecuritySudoFail");

        verticalLayout_2->addWidget(realTimeSecuritySudoFail);

        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName("pushButton_6");

        verticalLayout_2->addWidget(pushButton_6);

        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        verticalLayout_3 = new QVBoxLayout(tab_5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        realTimeSecurityCodeSignIssue = new QTableWidget(tab_5);
        realTimeSecurityCodeSignIssue->setObjectName("realTimeSecurityCodeSignIssue");

        verticalLayout_3->addWidget(realTimeSecurityCodeSignIssue);

        pushButton_7 = new QPushButton(tab_5);
        pushButton_7->setObjectName("pushButton_7");

        verticalLayout_3->addWidget(pushButton_7);

        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        verticalLayout_4 = new QVBoxLayout(tab_6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        realTimeSecurityGatekeeper = new QTableWidget(tab_6);
        realTimeSecurityGatekeeper->setObjectName("realTimeSecurityGatekeeper");

        verticalLayout_4->addWidget(realTimeSecurityGatekeeper);

        pushButton_8 = new QPushButton(tab_6);
        pushButton_8->setObjectName("pushButton_8");

        verticalLayout_4->addWidget(pushButton_8);

        tabWidget_2->addTab(tab_6, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        verticalLayout_5 = new QVBoxLayout(tab_8);
        verticalLayout_5->setObjectName("verticalLayout_5");
        realTimeSecurityKeychain = new QTableWidget(tab_8);
        realTimeSecurityKeychain->setObjectName("realTimeSecurityKeychain");

        verticalLayout_5->addWidget(realTimeSecurityKeychain);

        pushButton_9 = new QPushButton(tab_8);
        pushButton_9->setObjectName("pushButton_9");

        verticalLayout_5->addWidget(pushButton_9);

        tabWidget_2->addTab(tab_8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        verticalLayout_7 = new QVBoxLayout(tab_7);
        verticalLayout_7->setObjectName("verticalLayout_7");
        realTimeSecurityFileAccess = new QTableWidget(tab_7);
        realTimeSecurityFileAccess->setObjectName("realTimeSecurityFileAccess");

        verticalLayout_7->addWidget(realTimeSecurityFileAccess);

        pushButton_10 = new QPushButton(tab_7);
        pushButton_10->setObjectName("pushButton_10");

        verticalLayout_7->addWidget(pushButton_10);

        tabWidget_2->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName("tab_9");
        verticalLayout_6 = new QVBoxLayout(tab_9);
        verticalLayout_6->setObjectName("verticalLayout_6");
        realTimeSecuritySIPViolation = new QTableWidget(tab_9);
        realTimeSecuritySIPViolation->setObjectName("realTimeSecuritySIPViolation");
        realTimeSecuritySIPViolation->setAlternatingRowColors(false);
        realTimeSecuritySIPViolation->setSortingEnabled(true);

        verticalLayout_6->addWidget(realTimeSecuritySIPViolation);

        pushButton_11 = new QPushButton(tab_9);
        pushButton_11->setObjectName("pushButton_11");

        verticalLayout_6->addWidget(pushButton_11);

        tabWidget_2->addTab(tab_9, QString());

        verticalLayout->addWidget(tabWidget_2);

        tabWidget->addTab(tab, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName("tab_13");
        verticalLayout_13 = new QVBoxLayout(tab_13);
        verticalLayout_13->setObjectName("verticalLayout_13");
        tabWidget_4 = new QTabWidget(tab_13);
        tabWidget_4->setObjectName("tabWidget_4");
        tab_14 = new QWidget();
        tab_14->setObjectName("tab_14");
        verticalLayout_14 = new QVBoxLayout(tab_14);
        verticalLayout_14->setObjectName("verticalLayout_14");
        realtimeProcess = new QTableWidget(tab_14);
        realtimeProcess->setObjectName("realtimeProcess");

        verticalLayout_14->addWidget(realtimeProcess);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(tab_14);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        refreshTimer = new QSpinBox(tab_14);
        refreshTimer->setObjectName("refreshTimer");

        horizontalLayout->addWidget(refreshTimer);


        horizontalLayout_5->addLayout(horizontalLayout);

        pushButton_12 = new QPushButton(tab_14);
        pushButton_12->setObjectName("pushButton_12");

        horizontalLayout_5->addWidget(pushButton_12);


        verticalLayout_14->addLayout(horizontalLayout_5);

        tabWidget_4->addTab(tab_14, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName("tab_15");
        verticalLayout_15 = new QVBoxLayout(tab_15);
        verticalLayout_15->setObjectName("verticalLayout_15");
        runningProcess = new QTableWidget(tab_15);
        runningProcess->setObjectName("runningProcess");

        verticalLayout_15->addWidget(runningProcess);

        refreshRunning = new QPushButton(tab_15);
        refreshRunning->setObjectName("refreshRunning");

        verticalLayout_15->addWidget(refreshRunning);

        tabWidget_4->addTab(tab_15, QString());

        verticalLayout_13->addWidget(tabWidget_4);

        tabWidget->addTab(tab_13, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_8 = new QVBoxLayout(tab_2);
        verticalLayout_8->setObjectName("verticalLayout_8");
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName("tabWidget_3");
        tab_10 = new QWidget();
        tab_10->setObjectName("tab_10");
        verticalLayout_9 = new QVBoxLayout(tab_10);
        verticalLayout_9->setObjectName("verticalLayout_9");
        fileChangesUsers = new QTableWidget(tab_10);
        fileChangesUsers->setObjectName("fileChangesUsers");

        verticalLayout_9->addWidget(fileChangesUsers);

        tabWidget_3->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName("tab_11");
        verticalLayout_11 = new QVBoxLayout(tab_11);
        verticalLayout_11->setObjectName("verticalLayout_11");
        fileChangesSecurity = new QTableWidget(tab_11);
        fileChangesSecurity->setObjectName("fileChangesSecurity");

        verticalLayout_11->addWidget(fileChangesSecurity);

        tabWidget_3->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName("tab_12");
        verticalLayout_12 = new QVBoxLayout(tab_12);
        verticalLayout_12->setObjectName("verticalLayout_12");
        fileChangesDevelopement = new QTableWidget(tab_12);
        fileChangesDevelopement->setObjectName("fileChangesDevelopement");

        verticalLayout_12->addWidget(fileChangesDevelopement);

        tabWidget_3->addTab(tab_12, QString());

        verticalLayout_8->addWidget(tabWidget_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_4->addWidget(pushButton_3);


        verticalLayout_8->addLayout(horizontalLayout_4);

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

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(6);
        tabWidget_4->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "General Errors", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Extract", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Extract", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Authentication Failure", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Extract", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Sudo Failures", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Extract", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Code Signing Issues", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Extract", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Gatekeeper", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Extract", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Keychain", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Extract", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("MainWindow", "File Access Restrictions", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Extract", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QCoreApplication::translate("MainWindow", "SIP Violations", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Security Logs", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Refresh Timer", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_14), QCoreApplication::translate("MainWindow", "Realtime", nullptr));
        refreshRunning->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_15), QCoreApplication::translate("MainWindow", "Running", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_13), QCoreApplication::translate("MainWindow", "Process Logs", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QCoreApplication::translate("MainWindow", "User", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QCoreApplication::translate("MainWindow", "Security", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_12), QCoreApplication::translate("MainWindow", "Developement", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Extract", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "File Changes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
