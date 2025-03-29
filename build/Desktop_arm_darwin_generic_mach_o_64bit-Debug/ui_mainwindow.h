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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_19;
    QTabWidget *mainTab;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget_5;
    QWidget *tab_17;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *searchSecurityLogs;
    QTableWidget *realTimeSecurity;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *extractGeneralLogs;
    QPushButton *pushButton_15;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *searchAuth;
    QTableWidget *realTimeSecurityAuthFail;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_4;
    QPushButton *pushButton_21;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *searchSudo;
    QTableWidget *realTimeSecuritySudoFail;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_6;
    QPushButton *pushButton_20;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *searchCode;
    QTableWidget *realTimeSecurityCodeSignIssue;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_7;
    QPushButton *pushButton_19;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *searchGate;
    QTableWidget *realTimeSecurityGatekeeper;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_18;
    QWidget *tab_8;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *searchKey;
    QTableWidget *realTimeSecurityKeychain;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_17;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *searchFileAccess;
    QTableWidget *realTimeSecurityFileAccess;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_10;
    QPushButton *pushButton_16;
    QWidget *tab_9;
    QVBoxLayout *verticalLayout_17;
    QLineEdit *searchSIP;
    QTableWidget *realTimeSecuritySIPViolation;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_14;
    QWidget *tab_18;
    QVBoxLayout *verticalLayout_18;
    QLineEdit *searchLogin;
    QTableWidget *loginMesseges;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_13;
    QPushButton *refreshLogin;
    QPushButton *pushButton_5;
    QWidget *tab_13;
    QVBoxLayout *verticalLayout_13;
    QTabWidget *tabWidget_4;
    QWidget *tab_14;
    QVBoxLayout *verticalLayout_14;
    QLineEdit *searchBarProcess;
    QTableWidget *realtimeProcess;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_22;
    QPushButton *pushButton_12;
    QWidget *tab_15;
    QVBoxLayout *verticalLayout_15;
    QLineEdit *searchBarProcessRun;
    QTableWidget *runningProcess;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton_24;
    QPushButton *refreshRunning;
    QPushButton *pushButton_23;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_8;
    QTabWidget *tabWidget_3;
    QWidget *tab_10;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *searchUserFiles;
    QTableWidget *fileChangesUsers;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *tab_11;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *searchSecurityFiles;
    QTableWidget *fileChangesSecurity;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QWidget *tab_12;
    QVBoxLayout *verticalLayout_12;
    QLineEdit *searchDevFiles;
    QTableWidget *fileChangesDevelopement;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QHBoxLayout *horizontalLayout_4;
    QWidget *tab_16;
    QVBoxLayout *verticalLayout_16;
    QLineEdit *searchNetwork;
    QTableWidget *networkConnections;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *pushButton_30;
    QPushButton *pushButton_29;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName("mainWindow");
        mainWindow->resize(1387, 780);
        mainWindow->setStyleSheet(QString::fromUtf8("/* Main window styling */\n"
"QMainWindow#mainWindow {\n"
"  background-color: #201c34; /* Dark purple background */\n"
"  color: white; /* White text */\n"
"}\n"
"\n"
"/* Central widget styling */\n"
"QMainWindow#mainWindow > QWidget {\n"
"  background-color: #201c34; /* Darker background */\n"
"  color: white; /* White text */\n"
"}\n"
"\n"
"/* Button styling */\n"
"QPushButton {\n"
"  background-color: #8464A0; /* Light purple */\n"
"  color: white; /* White text */\n"
"  border-radius: 8px; /* Rounded corners */\n"
"  padding: 4px 8px; /* Button padding */\n"
"  margin-left: 8px; /* Left margin */\n"
"  margin-right: 8px; /* Right margin */\n"
"  font-size: 13px; /* Font size */\n"
"}\n"
"\n"
"/* Button hover effect */\n"
"QPushButton:hover {\n"
"  background-color: #3B2E64; /* Dark purple on hover */\n"
"}\n"
"\n"
"/* Table widget styling */\n"
"QTableWidget {\n"
"  background-color: #3A295F; /* Dark purple background */\n"
"  color: white; /* White text */\n"
"  border: none; /* Remove default border */\n"
""
                        "  gridline-color: #5A478D; /* Gridline color */\n"
"  selection-background-color: #5A478D; /* Selected row background */\n"
"}\n"
"\n"
"/* Table corner button styling */\n"
"QTableWidget::corner {\n"
"  background-color: #2E1F4D; /* Darker background */\n"
"  border: none; /* Remove default border */\n"
"}\n"
"\n"
"/* Header styling for both vertical and horizontal */\n"
"QHeaderView:vertical, QHeaderView:horizontal {\n"
"  background-color: #2E1F4D; /* Dark purple */\n"
"  color: white; /* White text */\n"
"}\n"
"\n"
"/* Table header section styling */\n"
"QHeaderView::section {\n"
"  background-color: #2E1F4D; /* Dark purple */\n"
"  color: white; /* White text */\n"
"  border: none; /* Remove default borders */\n"
"  min-width: 40px; /* Header width */\n"
"  font-size: 14px; /* Font size */\n"
"  padding: 6px; /* Padding for headers */\n"
"}\n"
"\n"
"/* Line Edit widget styling */\n"
"QLineEdit {\n"
"  background-color: #52416C; /* Muted grayish purple */\n"
"  color: white; /* White text */\n"
"  border: 1"
                        "px solid #6A5A94; /* Subtle border */\n"
"  border-radius: 6px; /* Rounded corners */\n"
"  padding: 4px 8px; /* Padding inside the input */\n"
"}\n"
"\n"
"/* Tab widget styling */\n"
"QTabWidget {\n"
"  background-color: #3B2E64; /* Darker background */\n"
"  border: none; /* Remove default border */\n"
"}\n"
"\n"
"/* Tab bar styling */\n"
"QTabWidget > QTabBar::tab {\n"
"  background-color: #392C60; /* Slightly lighter tab color */\n"
"  color: white; /* White text */\n"
"  padding: 8px 15px; /* Padding inside the tab */\n"
"  border-top-left-radius: 8px; /* Rounded top-left corner */\n"
"  border-top-right-radius: 8px; /* Rounded top-right corner */\n"
"}\n"
"\n"
"/* Selected tab styling */\n"
"QTabWidget > QTabBar::tab:selected {\n"
"  background-color: #443275; /* Highlighted tab color */\n"
"}\n"
"\n"
"/* Specific tab widget styles */\n"
"QTabWidget#mainTab, \n"
"QTabWidget#tabWidget_5 {\n"
"  background-color: #201c34; /* Darker background */\n"
"  border: none; /* Remove default border */\n"
"}\n"
"\n"
""
                        "/* Tab bar styling for specific tabs */\n"
"QTabWidget#mainTab > QTabBar::tab, \n"
"QTabWidget#tabWidget_5 > QTabBar::tab {\n"
"  background-color: #27213D; /* Slightly lighter tab color */\n"
"  color: white; /* White text */\n"
"  padding: 8px 15px; /* Padding inside the tab */\n"
"  border-top-left-radius: 8px; /* Rounded top-left corner */\n"
"  \n"
"}\n"
"\n"
"/* Selected tab styling for specific tabs */\n"
"QTabWidget#mainTab > QTabBar::tab:selected, \n"
"QTabWidget#tabWidget_5 > QTabBar::tab:selected {\n"
"  background-color: #443275; /* Highlighted tab color */\n"
"}\n"
"QTabWidget#tabWidget_2 { \n"
"  background-color: #3B2E64; /* Darker background */\n"
"  border: none; /* Remove default border */\n"
"}\n"
"\n"
"/* Style the tab bar */\n"
"QTabWidget#tabWidget_2 > QTabBar::tab { \n"
"  background-color: #392C60; /* Slightly lighter tab color */\n"
"  color: white; /* Text color */\n"
"  padding: 8px 15px; /* Spacing inside the tab */\n"
"  border-top-left-radius: 8px; /* Rounded top-left */\n"
"  bor"
                        "der-top-right-radius: 8px; /* Rounded top-right */\n"
"}\n"
"\n"
"/* Selected tab */\n"
"QTabWidget#tabWidget_2 > QTabBar::tab:selected { \n"
"  background-color: #553D94; /* Highlighted tab color */\n"
"}\n"
"\n"
"\n"
"/* MainTab styling */\n"
"QTabWidget#mainTab {\n"
"  background-color: #201c34; /* Darker background */\n"
"  border: none; /* Remove default border */\n"
"}\n"
"\n"
"QTabWidget#mainTab > QTabBar::tab {\n"
"  background-color: #27213D; /* Slightly lighter tab color */\n"
"  color: white; /* Text color */\n"
"  padding: 8px 15px; /* Padding inside the tab */\n"
"  border-top-left-radius: 8px; /* Rounded top-left corner */\n"
"  border-bottom-left-radius: 8px; /* Rounded bottom-left corner */\n"
"  margin-top: 15px; /* Top margin */\n"
"  margin-bottom: 15px; /* Bottom margin */\n"
"}\n"
"\n"
"/* Selected tab style in mainTab */\n"
"QTabWidget#mainTab > QTabBar::tab:selected {\n"
"  background-color: #332856; /* Highlighted tab color */\n"
"}\n"
"\n"
"/* Widget tab styles */\n"
"QWidget#tab, \n"
""
                        "QWidget#tab_2,  \n"
"QWidget#tab_4, \n"
"QWidget#tab_5, \n"
"QWidget#tab_6, \n"
"QWidget#tab_7, \n"
"QWidget#tab_8, \n"
"QWidget#tab_13, \n"
"QWidget#tab_15,\n"
"QWidget#tab_16 {\n"
"  background-color: #332856; /* Darker background */\n"
"  color: white; /* White text */\n"
"  border-radius: 10px; /* Rounded corners */\n"
"}\n"
"QWidget#tab_17 { \n"
"  background-color: #443275; /* Darker background */\n"
"  color: white; /* Default text color */\n"
"  border-radius: 10px; /* Rounded corners */\n"
"  overflow: hidden; /* Ensures content respects border-radius */\n"
"}\n"
"QWidget#tab_9 { \n"
"  background-color: #553D94; /* Darker background */\n"
"  color: white; /* Default text color */\n"
"  border-radius: 6px; /* Rounded corners */\n"
"}\n"
"\n"
"QWidget#tab_3,\n"
"QWidget#tab_4,\n"
"QWidget#tab_5,\n"
"QWidget#tab_6,\n"
"QWidget#tab_7,\n"
"QWidget#tab_8,\n"
"QWidget#tab_9 { \n"
"  background-color: #553D94; /* Darker background */\n"
"  color: white; /* Default text color */\n"
"  border-radius: 6px; /* R"
                        "ounded corners */\n"
"}\n"
"\n"
"\n"
"QWidget#tab_14,QWidget#tab_15,QWidget#tab_18{\n"
"  background-color: #443275; /* Darker background */\n"
"  color: white; /* White text */\n"
"  border-radius: 10px; /* Rounded corners */\n"
"}\n"
"\n"
"/* Special case for tabs that require hidden overflow */\n"
"QWidget#tab_14, \n"
"QWidget#tab_15,\n"
"QWidget#tab_10, \n"
"QWidget#tab_11, \n"
"QWidget#tab_12 {\n"
"  overflow: hidden; /* Ensures content respects border-radius */\n"
"}\n"
"\n"
"/* Styling for tab_12 */\n"
"QWidget#tab_10, \n"
"QWidget#tab_11, \n"
"QWidget#tab_12  {\n"
"  background-color: #443275; /* Darker background */\n"
"  color: white; /* Default text color */\n"
"  border-radius: 10px; /* Rounded corners */\n"
"  overflow: hidden; /* Ensures content respects border-radius */\n"
"}\n"
"\n"
"/* Button styling for specific buttons */\n"
"QPushButton#extractGeneralLogs, \n"
"QPushButton#clearEventButton {\n"
"  background-color: #8464A0; /* Light purple */\n"
"  color: white; /* White text */\n"
"  borde"
                        "r-radius: 10px; /* Rounded corners */\n"
"  padding: 3px 6px; /* Padding inside the button */\n"
"  margin-left: 10px; /* Left margin */\n"
"  margin-right: 10px; /* Right margin */\n"
"}\n"
"\n"
"/* Button hover effect for specific buttons */\n"
"QPushButton#extractGeneralLogs:hover, \n"
"QPushButton#clearEventButton:hover {\n"
"  background-color: #3B2E64; /* Dark purple on hover */\n"
"}\n"
"\n"
"/* Real-time security table styling (now applied to all tables) */\n"
"QTableWidget {\n"
"  background-color: #3A295F; /* Dark purple background */\n"
"  color: white; /* White text */\n"
"  border: none; /* Remove default border */\n"
"  gridline-color: #5A478D; /* Gridline color */\n"
"  selection-background-color: #5A478D; /* Selected row background */\n"
"}\n"
"\n"
"/* Table corner button styling for all tables */\n"
"QTableWidget::corner {\n"
"  background-color: #2E1F4D; /* Darker background */\n"
"  border: none; /* Remove default border */\n"
"}\n"
"\n"
"/* Header styling for all tables */\n"
"QHeaderView:v"
                        "ertical, QHeaderView:horizontal {\n"
"  background-color: #2E1F4D; /* Dark purple */\n"
"  color: white; /* White text */\n"
"}\n"
"\n"
"/* Table header section styling for all tables */\n"
"QHeaderView::section {\n"
"  background-color: #2E1F4D; /* Dark purple */\n"
"  color: white; /* White text */\n"
"  border: none; /* Remove default borders */\n"
"  min-width: 40px; /* Vertical header width */\n"
"  font-size: 14px; /* Font size */\n"
"  padding: 6px; /* Padding for headers */\n"
"}\n"
"\n"
"/* Real-time security item styling for all tables */\n"
"QTableWidget QTableWidgetItem {\n"
"  color: white; /* Force white text for all items */\n"
"}\n"
"\n"
"/* Real-time security corner button styling for all tables */\n"
"QTableWidget QTableCornerButton::section {\n"
"  background-color: #2E1F4D; /* Dark purple */\n"
"  border: none; /* Remove default border */\n"
"}\n"
""));
        mainWindow->setIconSize(QSize(48, 48));
        mainWindow->setAnimated(false);
        centralwidget = new QWidget(mainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_19 = new QVBoxLayout(centralwidget);
        verticalLayout_19->setObjectName("verticalLayout_19");
        mainTab = new QTabWidget(centralwidget);
        mainTab->setObjectName("mainTab");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainTab->sizePolicy().hasHeightForWidth());
        mainTab->setSizePolicy(sizePolicy);
        mainTab->setFocusPolicy(Qt::FocusPolicy::TabFocus);
        mainTab->setTabPosition(QTabWidget::TabPosition::West);
        mainTab->setTabShape(QTabWidget::TabShape::Rounded);
        mainTab->setIconSize(QSize(86, 86));
        mainTab->setElideMode(Qt::TextElideMode::ElideNone);
        mainTab->setUsesScrollButtons(false);
        mainTab->setTabsClosable(false);
        mainTab->setMovable(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        tabWidget_5 = new QTabWidget(tab);
        tabWidget_5->setObjectName("tabWidget_5");
        tab_17 = new QWidget();
        tab_17->setObjectName("tab_17");
        verticalLayout_6 = new QVBoxLayout(tab_17);
        verticalLayout_6->setObjectName("verticalLayout_6");
        searchSecurityLogs = new QLineEdit(tab_17);
        searchSecurityLogs->setObjectName("searchSecurityLogs");

        verticalLayout_6->addWidget(searchSecurityLogs);

        realTimeSecurity = new QTableWidget(tab_17);
        realTimeSecurity->setObjectName("realTimeSecurity");

        verticalLayout_6->addWidget(realTimeSecurity);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(tab_17);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        extractGeneralLogs = new QPushButton(tab_17);
        extractGeneralLogs->setObjectName("extractGeneralLogs");
        extractGeneralLogs->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(extractGeneralLogs);

        pushButton_15 = new QPushButton(tab_17);
        pushButton_15->setObjectName("pushButton_15");

        horizontalLayout->addWidget(pushButton_15);


        verticalLayout_6->addLayout(horizontalLayout);

        tabWidget_2 = new QTabWidget(tab_17);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setTabBarAutoHide(false);
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_10 = new QVBoxLayout(tab_3);
        verticalLayout_10->setObjectName("verticalLayout_10");
        searchAuth = new QLineEdit(tab_3);
        searchAuth->setObjectName("searchAuth");

        verticalLayout_10->addWidget(searchAuth);

        realTimeSecurityAuthFail = new QTableWidget(tab_3);
        realTimeSecurityAuthFail->setObjectName("realTimeSecurityAuthFail");

        verticalLayout_10->addWidget(realTimeSecurityAuthFail);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout_12->addWidget(pushButton_4);

        pushButton_21 = new QPushButton(tab_3);
        pushButton_21->setObjectName("pushButton_21");

        horizontalLayout_12->addWidget(pushButton_21);


        verticalLayout_10->addLayout(horizontalLayout_12);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_2 = new QVBoxLayout(tab_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        searchSudo = new QLineEdit(tab_4);
        searchSudo->setObjectName("searchSudo");

        verticalLayout_2->addWidget(searchSudo);

        realTimeSecuritySudoFail = new QTableWidget(tab_4);
        realTimeSecuritySudoFail->setObjectName("realTimeSecuritySudoFail");

        verticalLayout_2->addWidget(realTimeSecuritySudoFail);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout_11->addWidget(pushButton_6);

        pushButton_20 = new QPushButton(tab_4);
        pushButton_20->setObjectName("pushButton_20");

        horizontalLayout_11->addWidget(pushButton_20);


        verticalLayout_2->addLayout(horizontalLayout_11);

        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        verticalLayout_3 = new QVBoxLayout(tab_5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        searchCode = new QLineEdit(tab_5);
        searchCode->setObjectName("searchCode");

        verticalLayout_3->addWidget(searchCode);

        realTimeSecurityCodeSignIssue = new QTableWidget(tab_5);
        realTimeSecurityCodeSignIssue->setObjectName("realTimeSecurityCodeSignIssue");

        verticalLayout_3->addWidget(realTimeSecurityCodeSignIssue);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        pushButton_7 = new QPushButton(tab_5);
        pushButton_7->setObjectName("pushButton_7");

        horizontalLayout_10->addWidget(pushButton_7);

        pushButton_19 = new QPushButton(tab_5);
        pushButton_19->setObjectName("pushButton_19");

        horizontalLayout_10->addWidget(pushButton_19);


        verticalLayout_3->addLayout(horizontalLayout_10);

        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        verticalLayout_4 = new QVBoxLayout(tab_6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        searchGate = new QLineEdit(tab_6);
        searchGate->setObjectName("searchGate");

        verticalLayout_4->addWidget(searchGate);

        realTimeSecurityGatekeeper = new QTableWidget(tab_6);
        realTimeSecurityGatekeeper->setObjectName("realTimeSecurityGatekeeper");

        verticalLayout_4->addWidget(realTimeSecurityGatekeeper);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        pushButton_8 = new QPushButton(tab_6);
        pushButton_8->setObjectName("pushButton_8");

        horizontalLayout_9->addWidget(pushButton_8);

        pushButton_18 = new QPushButton(tab_6);
        pushButton_18->setObjectName("pushButton_18");

        horizontalLayout_9->addWidget(pushButton_18);


        verticalLayout_4->addLayout(horizontalLayout_9);

        tabWidget_2->addTab(tab_6, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        verticalLayout_5 = new QVBoxLayout(tab_8);
        verticalLayout_5->setObjectName("verticalLayout_5");
        searchKey = new QLineEdit(tab_8);
        searchKey->setObjectName("searchKey");

        verticalLayout_5->addWidget(searchKey);

        realTimeSecurityKeychain = new QTableWidget(tab_8);
        realTimeSecurityKeychain->setObjectName("realTimeSecurityKeychain");

        verticalLayout_5->addWidget(realTimeSecurityKeychain);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton_9 = new QPushButton(tab_8);
        pushButton_9->setObjectName("pushButton_9");

        horizontalLayout_8->addWidget(pushButton_9);

        pushButton_17 = new QPushButton(tab_8);
        pushButton_17->setObjectName("pushButton_17");

        horizontalLayout_8->addWidget(pushButton_17);


        verticalLayout_5->addLayout(horizontalLayout_8);

        tabWidget_2->addTab(tab_8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        verticalLayout_7 = new QVBoxLayout(tab_7);
        verticalLayout_7->setObjectName("verticalLayout_7");
        searchFileAccess = new QLineEdit(tab_7);
        searchFileAccess->setObjectName("searchFileAccess");

        verticalLayout_7->addWidget(searchFileAccess);

        realTimeSecurityFileAccess = new QTableWidget(tab_7);
        realTimeSecurityFileAccess->setObjectName("realTimeSecurityFileAccess");

        verticalLayout_7->addWidget(realTimeSecurityFileAccess);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton_10 = new QPushButton(tab_7);
        pushButton_10->setObjectName("pushButton_10");

        horizontalLayout_7->addWidget(pushButton_10);

        pushButton_16 = new QPushButton(tab_7);
        pushButton_16->setObjectName("pushButton_16");

        horizontalLayout_7->addWidget(pushButton_16);


        verticalLayout_7->addLayout(horizontalLayout_7);

        tabWidget_2->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName("tab_9");
        verticalLayout_17 = new QVBoxLayout(tab_9);
        verticalLayout_17->setObjectName("verticalLayout_17");
        searchSIP = new QLineEdit(tab_9);
        searchSIP->setObjectName("searchSIP");

        verticalLayout_17->addWidget(searchSIP);

        realTimeSecuritySIPViolation = new QTableWidget(tab_9);
        realTimeSecuritySIPViolation->setObjectName("realTimeSecuritySIPViolation");
        realTimeSecuritySIPViolation->setAlternatingRowColors(false);
        realTimeSecuritySIPViolation->setSortingEnabled(true);

        verticalLayout_17->addWidget(realTimeSecuritySIPViolation);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_11 = new QPushButton(tab_9);
        pushButton_11->setObjectName("pushButton_11");

        horizontalLayout_2->addWidget(pushButton_11);

        pushButton_14 = new QPushButton(tab_9);
        pushButton_14->setObjectName("pushButton_14");

        horizontalLayout_2->addWidget(pushButton_14);


        verticalLayout_17->addLayout(horizontalLayout_2);

        tabWidget_2->addTab(tab_9, QString());

        verticalLayout_6->addWidget(tabWidget_2);

        tabWidget_5->addTab(tab_17, QString());
        tab_18 = new QWidget();
        tab_18->setObjectName("tab_18");
        verticalLayout_18 = new QVBoxLayout(tab_18);
        verticalLayout_18->setObjectName("verticalLayout_18");
        searchLogin = new QLineEdit(tab_18);
        searchLogin->setObjectName("searchLogin");

        verticalLayout_18->addWidget(searchLogin);

        loginMesseges = new QTableWidget(tab_18);
        loginMesseges->setObjectName("loginMesseges");

        verticalLayout_18->addWidget(loginMesseges);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_13 = new QPushButton(tab_18);
        pushButton_13->setObjectName("pushButton_13");

        horizontalLayout_6->addWidget(pushButton_13);

        refreshLogin = new QPushButton(tab_18);
        refreshLogin->setObjectName("refreshLogin");

        horizontalLayout_6->addWidget(refreshLogin);

        pushButton_5 = new QPushButton(tab_18);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout_6->addWidget(pushButton_5);


        verticalLayout_18->addLayout(horizontalLayout_6);

        tabWidget_5->addTab(tab_18, QString());

        horizontalLayout_3->addWidget(tabWidget_5);


        verticalLayout->addLayout(horizontalLayout_3);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/SystemLogs1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        mainTab->addTab(tab, icon, QString());
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
        searchBarProcess = new QLineEdit(tab_14);
        searchBarProcess->setObjectName("searchBarProcess");

        verticalLayout_14->addWidget(searchBarProcess);

        realtimeProcess = new QTableWidget(tab_14);
        realtimeProcess->setObjectName("realtimeProcess");

        verticalLayout_14->addWidget(realtimeProcess);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_22 = new QPushButton(tab_14);
        pushButton_22->setObjectName("pushButton_22");

        horizontalLayout_5->addWidget(pushButton_22);

        pushButton_12 = new QPushButton(tab_14);
        pushButton_12->setObjectName("pushButton_12");

        horizontalLayout_5->addWidget(pushButton_12);


        verticalLayout_14->addLayout(horizontalLayout_5);

        tabWidget_4->addTab(tab_14, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName("tab_15");
        verticalLayout_15 = new QVBoxLayout(tab_15);
        verticalLayout_15->setObjectName("verticalLayout_15");
        searchBarProcessRun = new QLineEdit(tab_15);
        searchBarProcessRun->setObjectName("searchBarProcessRun");

        verticalLayout_15->addWidget(searchBarProcessRun);

        runningProcess = new QTableWidget(tab_15);
        runningProcess->setObjectName("runningProcess");

        verticalLayout_15->addWidget(runningProcess);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        pushButton_24 = new QPushButton(tab_15);
        pushButton_24->setObjectName("pushButton_24");

        horizontalLayout_13->addWidget(pushButton_24);

        refreshRunning = new QPushButton(tab_15);
        refreshRunning->setObjectName("refreshRunning");

        horizontalLayout_13->addWidget(refreshRunning);

        pushButton_23 = new QPushButton(tab_15);
        pushButton_23->setObjectName("pushButton_23");

        horizontalLayout_13->addWidget(pushButton_23);


        verticalLayout_15->addLayout(horizontalLayout_13);

        tabWidget_4->addTab(tab_15, QString());

        verticalLayout_13->addWidget(tabWidget_4);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/ProgramLogs.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        mainTab->addTab(tab_13, icon1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_8 = new QVBoxLayout(tab_2);
        verticalLayout_8->setObjectName("verticalLayout_8");
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName("tabWidget_3");
        tabWidget_3->setStyleSheet(QString::fromUtf8(""));
        tab_10 = new QWidget();
        tab_10->setObjectName("tab_10");
        verticalLayout_9 = new QVBoxLayout(tab_10);
        verticalLayout_9->setObjectName("verticalLayout_9");
        searchUserFiles = new QLineEdit(tab_10);
        searchUserFiles->setObjectName("searchUserFiles");

        verticalLayout_9->addWidget(searchUserFiles);

        fileChangesUsers = new QTableWidget(tab_10);
        fileChangesUsers->setObjectName("fileChangesUsers");

        verticalLayout_9->addWidget(fileChangesUsers);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        pushButton_2 = new QPushButton(tab_10);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_14->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(tab_10);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_14->addWidget(pushButton_3);


        verticalLayout_9->addLayout(horizontalLayout_14);

        tabWidget_3->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName("tab_11");
        verticalLayout_11 = new QVBoxLayout(tab_11);
        verticalLayout_11->setObjectName("verticalLayout_11");
        searchSecurityFiles = new QLineEdit(tab_11);
        searchSecurityFiles->setObjectName("searchSecurityFiles");

        verticalLayout_11->addWidget(searchSecurityFiles);

        fileChangesSecurity = new QTableWidget(tab_11);
        fileChangesSecurity->setObjectName("fileChangesSecurity");

        verticalLayout_11->addWidget(fileChangesSecurity);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        pushButton_25 = new QPushButton(tab_11);
        pushButton_25->setObjectName("pushButton_25");

        horizontalLayout_15->addWidget(pushButton_25);

        pushButton_26 = new QPushButton(tab_11);
        pushButton_26->setObjectName("pushButton_26");

        horizontalLayout_15->addWidget(pushButton_26);


        verticalLayout_11->addLayout(horizontalLayout_15);

        tabWidget_3->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName("tab_12");
        verticalLayout_12 = new QVBoxLayout(tab_12);
        verticalLayout_12->setObjectName("verticalLayout_12");
        searchDevFiles = new QLineEdit(tab_12);
        searchDevFiles->setObjectName("searchDevFiles");

        verticalLayout_12->addWidget(searchDevFiles);

        fileChangesDevelopement = new QTableWidget(tab_12);
        fileChangesDevelopement->setObjectName("fileChangesDevelopement");

        verticalLayout_12->addWidget(fileChangesDevelopement);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        pushButton_27 = new QPushButton(tab_12);
        pushButton_27->setObjectName("pushButton_27");

        horizontalLayout_16->addWidget(pushButton_27);

        pushButton_28 = new QPushButton(tab_12);
        pushButton_28->setObjectName("pushButton_28");

        horizontalLayout_16->addWidget(pushButton_28);


        verticalLayout_12->addLayout(horizontalLayout_16);

        tabWidget_3->addTab(tab_12, QString());

        verticalLayout_8->addWidget(tabWidget_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");

        verticalLayout_8->addLayout(horizontalLayout_4);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/FileChanges.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        mainTab->addTab(tab_2, icon2, QString());
        tab_16 = new QWidget();
        tab_16->setObjectName("tab_16");
        verticalLayout_16 = new QVBoxLayout(tab_16);
        verticalLayout_16->setObjectName("verticalLayout_16");
        searchNetwork = new QLineEdit(tab_16);
        searchNetwork->setObjectName("searchNetwork");

        verticalLayout_16->addWidget(searchNetwork);

        networkConnections = new QTableWidget(tab_16);
        networkConnections->setObjectName("networkConnections");

        verticalLayout_16->addWidget(networkConnections);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        pushButton_30 = new QPushButton(tab_16);
        pushButton_30->setObjectName("pushButton_30");

        horizontalLayout_17->addWidget(pushButton_30);

        pushButton_29 = new QPushButton(tab_16);
        pushButton_29->setObjectName("pushButton_29");

        horizontalLayout_17->addWidget(pushButton_29);


        verticalLayout_16->addLayout(horizontalLayout_17);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icons/NetworkLogs.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        mainTab->addTab(tab_16, icon3, QString());

        verticalLayout_19->addWidget(mainTab);

        mainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1387, 24));
        mainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainWindow);
        statusbar->setObjectName("statusbar");
        mainWindow->setStatusBar(statusbar);

        retranslateUi(mainWindow);
        QObject::connect(pushButton_12, &QPushButton::clicked, realtimeProcess, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(pushButton_5, &QPushButton::clicked, loginMesseges, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(pushButton_15, &QPushButton::clicked, realTimeSecurity, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(pushButton_14, &QPushButton::clicked, realTimeSecuritySIPViolation, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(pushButton_16, &QPushButton::clicked, realTimeSecurityFileAccess, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(pushButton_17, &QPushButton::clicked, realTimeSecurityKeychain, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(pushButton_18, &QPushButton::clicked, realTimeSecurityGatekeeper, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(pushButton_19, &QPushButton::clicked, realTimeSecurityCodeSignIssue, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(pushButton_20, &QPushButton::clicked, realTimeSecuritySudoFail, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(pushButton_21, &QPushButton::clicked, realTimeSecurityAuthFail, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(pushButton_23, &QPushButton::clicked, runningProcess, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(pushButton_3, &QPushButton::clicked, fileChangesUsers, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(pushButton_26, &QPushButton::clicked, fileChangesSecurity, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(pushButton_28, &QPushButton::clicked, fileChangesDevelopement, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(pushButton_29, &QPushButton::clicked, networkConnections, qOverload<>(&QTableWidget::clearContents));

        mainTab->setCurrentIndex(0);
        tabWidget_5->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QCoreApplication::translate("mainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("mainWindow", "General Errors", nullptr));
        extractGeneralLogs->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        pushButton_15->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        pushButton_4->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        pushButton_21->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("mainWindow", "Authentication Failure", nullptr));
        searchSudo->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        pushButton_20->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("mainWindow", "Sudo Failures", nullptr));
        pushButton_7->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        pushButton_19->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("mainWindow", "Code Signing Issues", nullptr));
        pushButton_8->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        pushButton_18->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("mainWindow", "Gatekeeper", nullptr));
        searchKey->setText(QString());
        pushButton_9->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        pushButton_17->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QCoreApplication::translate("mainWindow", "Keychain", nullptr));
        pushButton_10->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        pushButton_16->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("mainWindow", "File Access Restrictions", nullptr));
        pushButton_11->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        pushButton_14->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QCoreApplication::translate("mainWindow", "SIP Violations", nullptr));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_17), QCoreApplication::translate("mainWindow", "Security Logs", nullptr));
        pushButton_13->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        refreshLogin->setText(QCoreApplication::translate("mainWindow", "Refresh", nullptr));
        pushButton_5->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_18), QCoreApplication::translate("mainWindow", "Login", nullptr));
        mainTab->setTabText(mainTab->indexOf(tab), QString());
        pushButton_22->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        pushButton_12->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_14), QCoreApplication::translate("mainWindow", "Realtime", nullptr));
        pushButton_24->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        refreshRunning->setText(QCoreApplication::translate("mainWindow", "Refresh", nullptr));
        pushButton_23->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_15), QCoreApplication::translate("mainWindow", "Running", nullptr));
        mainTab->setTabText(mainTab->indexOf(tab_13), QString());
        pushButton_2->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        pushButton_3->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QCoreApplication::translate("mainWindow", "User", nullptr));
        pushButton_25->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        pushButton_26->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QCoreApplication::translate("mainWindow", "Security", nullptr));
        pushButton_27->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        pushButton_28->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_12), QCoreApplication::translate("mainWindow", "Developement", nullptr));
        mainTab->setTabText(mainTab->indexOf(tab_2), QString());
        pushButton_30->setText(QCoreApplication::translate("mainWindow", "Extract", nullptr));
        pushButton_29->setText(QCoreApplication::translate("mainWindow", "Clear", nullptr));
        mainTab->setTabText(mainTab->indexOf(tab_16), QString());
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
