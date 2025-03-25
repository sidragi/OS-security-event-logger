#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess> // this is used to extract the data from the log process and keep it in a variable
#include <QTableWidgetItem> // used to modify the cells of the able

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tabWidget_2->setVisible(false);
    QProcess *process=new QProcess(this); // the this keyword is used to make it a child of the mainwindow class

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



    connect(process,&QProcess::readyReadStandardOutput,this,[this,process](){ // connect is a signal-slot thing which connects a signal to a slot. Here, the signal is the process (i.e., the log file) and the slot where the signal is to be sent is the QPlainTextEdit, which is a function of this. The [this, process] is a function that allows the object here (the plain text edit) to get the text here
        QString out=process->readAllStandardOutput().trimmed();// now this puts the output in a string and its then given to the function which slices the string and gives the output
        splitNshow(out,"INFO");

    });

    connect(process,&QProcess::readyReadStandardError,this,[this,process]() { // the error is added here so in case the log fails, we can see what happened in it
        QString out=process->readAllStandardError();
        splitNshow(out,"ERROR");

    });

    process->start("log", QStringList() <<"stream"<< "--predicate"<< "subsystem == \"com.apple.security\"");
    // log stream --predicate 'subsystem == "com.apple.security"'
    // the log stream thing is used to filter the logs only with com.apple.security
    // macOS has a unified log system, so we have to filter it accordingly. The com.apple.security is a subsystem.


    connect(ui->pushButton, &QPushButton::clicked, this, [this]() {// this is used to make the additional menuse toggleable and, it uses an inline function
        ui->tabWidget_2->setVisible(!ui->tabWidget_2->isVisible());
    });


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

    int row=ui->realTimeSecurity->rowCount();//returns the int value f the row bascially index
    ui->realTimeSecurity->insertRow(row);//inset the row


    ui->realTimeSecurity->setItem(row,0,new QTableWidgetItem(timestamp)); // takes the msg and puts it in the index of the row
    ui->realTimeSecurity->setItem(row,1,new QTableWidgetItem(type.isEmpty() ? defaultType : type));// in case its empty
    ui->realTimeSecurity->setItem(row,2,new QTableWidgetItem(activity));
    ui->realTimeSecurity->setItem(row,3,new QTableWidgetItem(pid));
    ui->realTimeSecurity->setItem(row,4,new QTableWidgetItem(message));

    ui->realTimeSecurity->scrollToBottom(); //auto scrools to the botton when new stuff arrives

    if (message.contains("authentication", Qt::CaseInsensitive)) { // this makes sure that the failed auth messege individually also goes to the the failed auth table
        int rowAuth = ui->realTimeSecurityAuthFail->rowCount();
        ui->realTimeSecurityAuthFail->insertRow(rowAuth);

        ui->realTimeSecurityAuthFail->setItem(rowAuth,0,new QTableWidgetItem(timestamp));
        ui->realTimeSecurityAuthFail->setItem(rowAuth,1,new QTableWidgetItem(type.isEmpty() ? defaultType : type));
        ui->realTimeSecurityAuthFail->setItem(rowAuth,2,new QTableWidgetItem(activity));
        ui->realTimeSecurityAuthFail->setItem(rowAuth,3,new QTableWidgetItem(pid));
        ui->realTimeSecurityAuthFail->setItem(rowAuth,4,new QTableWidgetItem(message));
        ui->realTimeSecurityAuthFail->scrollToBottom();
    }
    if (message.contains("sudo", Qt::CaseInsensitive)) {
        int rowSudo = ui->realTimeSecuritySudoFail->rowCount();
        ui->realTimeSecuritySudoFail->insertRow(rowSudo);
        ui->realTimeSecuritySudoFail->setItem(rowSudo, 0, new QTableWidgetItem(timestamp));
        ui->realTimeSecuritySudoFail->setItem(rowSudo, 1, new QTableWidgetItem(type));
        ui->realTimeSecuritySudoFail->setItem(rowSudo, 2, new QTableWidgetItem(activity));
        ui->realTimeSecuritySudoFail->setItem(rowSudo, 3, new QTableWidgetItem(pid));
        ui->realTimeSecuritySudoFail->setItem(rowSudo, 4, new QTableWidgetItem(message));
        ui->realTimeSecuritySudoFail->scrollToBottom();
    }

    if (message.contains("codesign", Qt::CaseInsensitive)) {
        int rowCodeSign = ui->realTimeSecurityCodeSignIssue->rowCount();
        ui->realTimeSecurityCodeSignIssue->insertRow(rowCodeSign);
        ui->realTimeSecurityCodeSignIssue->setItem(rowCodeSign, 0, new QTableWidgetItem(timestamp));
        ui->realTimeSecurityCodeSignIssue->setItem(rowCodeSign, 1, new QTableWidgetItem(type));
        ui->realTimeSecurityCodeSignIssue->setItem(rowCodeSign, 2, new QTableWidgetItem(activity));
        ui->realTimeSecurityCodeSignIssue->setItem(rowCodeSign, 3, new QTableWidgetItem(pid));
        ui->realTimeSecurityCodeSignIssue->setItem(rowCodeSign, 4, new QTableWidgetItem(message));
        ui->realTimeSecurityCodeSignIssue->scrollToBottom();
    }

    if (message.contains("gatekeeper", Qt::CaseInsensitive)) {
        int rowGatekeeper = ui->realTimeSecurityGatekeeper->rowCount();
        ui->realTimeSecurityGatekeeper->insertRow(rowGatekeeper);
        ui->realTimeSecurityGatekeeper->setItem(rowGatekeeper, 0, new QTableWidgetItem(timestamp));
        ui->realTimeSecurityGatekeeper->setItem(rowGatekeeper, 1, new QTableWidgetItem(type));
        ui->realTimeSecurityGatekeeper->setItem(rowGatekeeper, 2, new QTableWidgetItem(activity));
        ui->realTimeSecurityGatekeeper->setItem(rowGatekeeper, 3, new QTableWidgetItem(pid));
        ui->realTimeSecurityGatekeeper->setItem(rowGatekeeper, 4, new QTableWidgetItem(message));
        ui->realTimeSecurityGatekeeper->scrollToBottom();
    }

    if (message.contains("keychain", Qt::CaseInsensitive)) {
        int rowKeychain = ui->realTimeSecurityKeychain->rowCount();
        ui->realTimeSecurityKeychain->insertRow(rowKeychain);
        ui->realTimeSecurityKeychain->setItem(rowKeychain, 0, new QTableWidgetItem(timestamp));
        ui->realTimeSecurityKeychain->setItem(rowKeychain, 1, new QTableWidgetItem(type));
        ui->realTimeSecurityKeychain->setItem(rowKeychain, 2, new QTableWidgetItem(activity));
        ui->realTimeSecurityKeychain->setItem(rowKeychain, 3, new QTableWidgetItem(pid));
        ui->realTimeSecurityKeychain->setItem(rowKeychain, 4, new QTableWidgetItem(message));
        ui->realTimeSecurityKeychain->scrollToBottom();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

}

