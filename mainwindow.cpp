#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess> // this is used to extract the data from the log process and keep it in a variable
#include <QTableWidgetItem> // used to modify the cells of the able

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QProcess *process=new QProcess(this); // the this keyword is used to make it a child of the mainwindow class

    ui->realTimeSecurity->setColumnCount(5);//we are gonna have 5 columns in the table so its beeen set t 5 the column names are mentionedbwlow
    QStringList column = {"Timestamp", "Type", "Activity", "PID", "Message"};
    ui->realTimeSecurity->setHorizontalHeaderLabels(column);//sethoriheadr lable basically puts the q string on the colun names
    ui->realTimeSecurity->horizontalHeader()->setStretchLastSection(true);// it makes sure that the last column is streach to fit the fill winod w

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

}

MainWindow::~MainWindow()
{
    delete ui;
}

