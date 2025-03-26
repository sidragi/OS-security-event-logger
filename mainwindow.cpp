#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess> // this is used to extract the data from the log process and keep it in a variable
#include <QTableWidgetItem> // used to modify the cells of the able
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tabWidget_2->setVisible(false);

    //PROCESS INITILIZATION SECTION

    QProcess *process=new QProcess(this); // the this keyword is used to make it a child of the mainwindow class

    QProcess *fswatchProcessUser= new QProcess(this);// makes child of main

    QProcess *fswatchProcessSecurity= new QProcess(this);// makes child of main

    QProcess *fswatchProcessDevelopement= new QProcess(this);// makes child of main

    QProcess *fswatchProcesCustom= new QProcess(this);// makes child of main





    //TABLE CREATION SECTION

    ui->realTimeSecurity->setColumnCount(5);//we are gonna have 5 columns in the table so its beeen set t 5 the column names are mentionedbwlow
    QStringList column = {"Timestamp", "Type", "Activity", "PID", "Message"};
    ui->realTimeSecurity->setHorizontalHeaderLabels(column);//sethoriheadr lable basically puts the q string on the colun names
    ui->realTimeSecurity->horizontalHeader()->setStretchLastSection(true);// it makes sure that the last column is streach to fit the fill winod w
    //it bacially is a copy of the above and it will come for the others as well
    ui->realTimeSecurityAuthFail->setColumnCount(5);
    ui->realTimeSecurityAuthFail->setHorizontalHeaderLabels(column);
    ui->realTimeSecurityAuthFail->horizontalHeader()->setStretchLastSection(true);

    ui->realTimeSecuritySudoFail->setColumnCount(5);
    ui->realTimeSecuritySudoFail->setHorizontalHeaderLabels(column);
    ui->realTimeSecuritySudoFail->horizontalHeader()->setStretchLastSection(true);

    ui->realTimeSecurityCodeSignIssue->setColumnCount(5);
    ui->realTimeSecurityCodeSignIssue->setHorizontalHeaderLabels(column);
    ui->realTimeSecurityCodeSignIssue->horizontalHeader()->setStretchLastSection(true);

    ui->realTimeSecurityGatekeeper->setColumnCount(5);
    ui->realTimeSecurityGatekeeper->setHorizontalHeaderLabels(column);
    ui->realTimeSecurityGatekeeper->horizontalHeader()->setStretchLastSection(true);

    ui->realTimeSecuritySIPViolation->setColumnCount(5);
    ui->realTimeSecuritySIPViolation->setHorizontalHeaderLabels(column);
    ui->realTimeSecuritySIPViolation->horizontalHeader()->setStretchLastSection(true);

    ui->realTimeSecurityKeychain->setColumnCount(5);
    ui->realTimeSecurityKeychain->setHorizontalHeaderLabels(column);
    ui->realTimeSecurityKeychain->horizontalHeader()->setStretchLastSection(true);

    ui->realTimeSecurityFileAccess->setColumnCount(5);
    ui->realTimeSecurityFileAccess->setHorizontalHeaderLabels(column);
    ui->realTimeSecurityFileAccess->horizontalHeader()->setStretchLastSection(true);

    ui->fileChangesUsers->setColumnCount(2);  // similar to the above table initilaizatiion this creates the table with 2 columsn
    QStringList column_file = {"Timestamps","Messege"};
    ui->fileChangesUsers->setHorizontalHeaderLabels(column_file);
    ui->fileChangesUsers->horizontalHeader()->setStretchLastSection(true);

    ui->fileChangesDevelopement->setColumnCount(2);
    ui->fileChangesDevelopement->setHorizontalHeaderLabels(column_file);
    ui->fileChangesDevelopement->horizontalHeader()->setStretchLastSection(true);

    ui->fileChangesSecurity->setColumnCount(2);
    ui->fileChangesSecurity->setHorizontalHeaderLabels(column_file);
    ui->fileChangesSecurity->horizontalHeader()->setStretchLastSection(true);




    //SIGNAL SLOTS SECTION

    connect(process,&QProcess::readyReadStandardOutput,this,[this,process](){ // connect is a signal-slot thing which connects a signal to a slot. Here, the signal is the process (i.e., the log file) and the slot where the signal is to be sent is the QPlainTextEdit, which is a function of this. The [this, process] is a function that allows the object here (the plain text edit) to get the text here
        QString out1=process->readAllStandardOutput().trimmed();// now this puts the output in a string and its then given to the function which slices the string and gives the output
        splitNshow(out1,"INFO");

    });

    connect(process,&QProcess::readyReadStandardError,this,[this,process]() { // the error is added here so in case the log fails, we can see what happened in it
        QString out2=process->readAllStandardError();
        splitNshow(out2,"ERROR");

    });


    connect(ui->pushButton, &QPushButton::clicked, this, [this]() {// this is used to make the additional menuse toggleable and, it uses an inline function
        ui->tabWidget_2->setVisible(!ui->tabWidget_2->isVisible());
    });

    connect(fswatchProcessUser,&QProcess::readyReadStandardOutput,this,[this,fswatchProcessUser](){//signal slots to itslef similar to the connects above
        QString out3 = fswatchProcessUser->readAllStandardOutput().trimmed();//get the output and trims the end
        if(!out3.isEmpty()){ //in case the outputs is empty nothiing will happen
            ui->fileChangesUsers->insertRow(0);
            //its been changed so it can add a new one in the top and update it accoridngly

            ui->fileChangesUsers->setItem(0,0,new QTableWidgetItem(QDateTime::currentDateTime().toString("HH:mm:ss")));// it adds the time the log came as its not in the fswatch log output
            ui->fileChangesUsers->setItem(0,1,new QTableWidgetItem(out3));
            }
    });

    connect(fswatchProcessSecurity, &QProcess::readyReadStandardOutput, this, [this, fswatchProcessSecurity](){
        QString outSecurity = fswatchProcessSecurity->readAllStandardOutput().trimmed();
        if (!outSecurity.isEmpty()) {
            ui->fileChangesSecurity->insertRow(0);
            ui->fileChangesSecurity->setItem(0, 0, new QTableWidgetItem(QDateTime::currentDateTime().toString("HH:mm:ss")));
            ui->fileChangesSecurity->setItem(0, 1, new QTableWidgetItem(outSecurity));
        }
    });

    connect(fswatchProcessDevelopement, &QProcess::readyReadStandardOutput, this, [this, fswatchProcessDevelopement](){
        QString outDevelopement = fswatchProcessDevelopement->readAllStandardOutput().trimmed();
        if (!outDevelopement.isEmpty()) {
            ui->fileChangesDevelopement->insertRow(0);
            ui->fileChangesDevelopement->setItem(0, 0, new QTableWidgetItem(QDateTime::currentDateTime().toString("HH:mm:ss")));
            ui->fileChangesDevelopement->setItem(0, 1, new QTableWidgetItem(outDevelopement));
        }
    });




    //PROCESS START SECTION;


    process->start("log", QStringList() <<"stream"<< "--predicate"<< "subsystem == \"com.apple.security\"");
    // log stream --predicate 'subsystem == "com.apple.security"'
    // the log stream thing is used to filter the logs only with com.apple.security
    // macOS has a unified log system, so we have to filter it accordingly. The com.apple.security is a subsystem.

    // QString pathUsers = "/Users";
    // QString pathApplications = "/Applications";
    // QString pathVolumes = "/Volumes";
    // QString pathLibrary = "/Library";
    // QString pathSystem = "/System";

    // fswatchProcessUser->start("fswatch", QStringList() << pathUsers << pathApplications << pathVolumes << pathLibrary << pathSystem);

    fswatchProcessUser->start("fswatch", QStringList() << "/Users" << "/Applications" << "/Volumes" << "/Library"<<"/System");

    fswatchProcessSecurity->start("fswatch",QStringList()<<"/var/log"<<"/etc"<<"/private/var/db");

    fswatchProcessDevelopement->start("fswatch",QStringList()<<"/usr/local"<<"/Users/Desktop/programs");


}

void MainWindow::splitNshow(const QString &logEntry,const QString &defaultType)// origially i did it as normal but there were a few erros and on secking further using const means it cannot modify the log enrty which it was doing for some values idk why
{
    if(logEntry.isEmpty()){
        return;//as it says if the log entry is emoty it will do nothing
    }
    QStringList sections=logEntry.split(" ", Qt::SkipEmptyParts);// splitting itinto words makes it easier to match it to the columns

    QString timestamp=sections[0]+" "+sections[1];
    QString type=sections[2];
    QString activity=sections[3];
    QString pid=sections[4];
    QString message;
    for (int i=5;i<sections.size();i++) {// the for loop joins the rest
        message+=sections[i]+" ";
    }
    message=message.trimmed(); // remove the spaces at the end

    ui->realTimeSecurity->insertRow(0); // Insert a new row at the top
    ui->realTimeSecurity->setItem(0,0,new QTableWidgetItem(timestamp)); // takes the msg and puts it in the index of the row
    ui->realTimeSecurity->setItem(0,1,new QTableWidgetItem(type.isEmpty() ? defaultType : type));// in case its empty
    ui->realTimeSecurity->setItem(0,2,new QTableWidgetItem(activity));
    ui->realTimeSecurity->setItem(0,3,new QTableWidgetItem(pid));
    ui->realTimeSecurity->setItem(0,4,new QTableWidgetItem(message));

    if (message.contains("authentication", Qt::CaseInsensitive)) { // this makes sure that the failed auth messege individually also goes to the the failed auth table
        ui->realTimeSecurityAuthFail->insertRow(0);

        ui->realTimeSecurityAuthFail->setItem(0,0,new QTableWidgetItem(timestamp));
        ui->realTimeSecurityAuthFail->setItem(0,1,new QTableWidgetItem(type.isEmpty() ? defaultType : type));
        ui->realTimeSecurityAuthFail->setItem(0,2,new QTableWidgetItem(activity));
        ui->realTimeSecurityAuthFail->setItem(0,3,new QTableWidgetItem(pid));
        ui->realTimeSecurityAuthFail->setItem(0,4,new QTableWidgetItem(message));

    }
    if (message.contains("sudo", Qt::CaseInsensitive)) { // the same thing is repeated of rthe other tables
        ui->realTimeSecuritySudoFail->insertRow(0);
        ui->realTimeSecuritySudoFail->setItem(0, 0, new QTableWidgetItem(timestamp));
        ui->realTimeSecuritySudoFail->setItem(0, 1, new QTableWidgetItem(type));
        ui->realTimeSecuritySudoFail->setItem(0, 2, new QTableWidgetItem(activity));
        ui->realTimeSecuritySudoFail->setItem(0, 3, new QTableWidgetItem(pid));
        ui->realTimeSecuritySudoFail->setItem(0, 4, new QTableWidgetItem(message));

    }

    if (message.contains("codesign", Qt::CaseInsensitive)) {
        ui->realTimeSecurityCodeSignIssue->insertRow(0);
        ui->realTimeSecurityCodeSignIssue->setItem(0, 0, new QTableWidgetItem(timestamp));
        ui->realTimeSecurityCodeSignIssue->setItem(0, 1, new QTableWidgetItem(type));
        ui->realTimeSecurityCodeSignIssue->setItem(0, 2, new QTableWidgetItem(activity));
        ui->realTimeSecurityCodeSignIssue->setItem(0, 3, new QTableWidgetItem(pid));
        ui->realTimeSecurityCodeSignIssue->setItem(0, 4, new QTableWidgetItem(message));

    }

    if (message.contains("gatekeeper", Qt::CaseInsensitive)) {
        ui->realTimeSecurityGatekeeper->insertRow(0);
        ui->realTimeSecurityGatekeeper->setItem(0, 0, new QTableWidgetItem(timestamp));
        ui->realTimeSecurityGatekeeper->setItem(0, 1, new QTableWidgetItem(type));
        ui->realTimeSecurityGatekeeper->setItem(0, 2, new QTableWidgetItem(activity));
        ui->realTimeSecurityGatekeeper->setItem(0, 3, new QTableWidgetItem(pid));
        ui->realTimeSecurityGatekeeper->setItem(0, 4, new QTableWidgetItem(message));

    }

    if (message.contains("keychain", Qt::CaseInsensitive)) {
        ui->realTimeSecurityKeychain->insertRow(0);
        ui->realTimeSecurityKeychain->setItem(0, 0, new QTableWidgetItem(timestamp));
        ui->realTimeSecurityKeychain->setItem(0, 1, new QTableWidgetItem(type));
        ui->realTimeSecurityKeychain->setItem(0, 2, new QTableWidgetItem(activity));
        ui->realTimeSecurityKeychain->setItem(0, 3, new QTableWidgetItem(pid));
        ui->realTimeSecurityKeychain->setItem(0, 4, new QTableWidgetItem(message));

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

}

