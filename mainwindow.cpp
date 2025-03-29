#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess> // this is used to extract the data from the log process and keep it in a variable
#include <QTableWidgetItem> // used to modify the cells of the able
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainWindow)
{
    ui->setupUi(this);
    setCentralWidget((ui->mainTab));

    ui->tabWidget_2->setVisible(false);


    //PROCESS INITILIZATION SECTION

    QProcess *process=new QProcess(this); // the this keyword is used to make it a child of the mainwindow class

    QProcess *fswatchProcessUser= new QProcess(this);// makes child of main

    QProcess *fswatchProcessSecurity= new QProcess(this);// makes child of main

    QProcess *fswatchProcessDevelopement= new QProcess(this);// makes child of main






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

    ui->runningProcess->setColumnCount(10);// making the process table
    QStringList col = {"USER", "PID", "%CPU", "%MEM", "VSZ", "RSS", "TT", "STAT", "TIME", "COMMAND"};
    ui->runningProcess->setHorizontalHeaderLabels(col);
    ui->runningProcess->horizontalHeader()->setStretchLastSection(true);

    ui->realtimeProcess->setColumnCount(10);// making the realtime process table
    ui->realtimeProcess->setHorizontalHeaderLabels(col);
    ui->realtimeProcess->horizontalHeader()->setStretchLastSection(true);

    ui->networkConnections->setColumnCount(9);//same thing as beofre
    QStringList c = {"Command", "PID", "User", "FD", "Type", "Device", "Size/Off", "Node","Name"};
    ui->networkConnections->setHorizontalHeaderLabels(c);
    ui->networkConnections->horizontalHeader()->setStretchLastSection(true);


    ui->loginMesseges->setColumnCount(6);//same thing as beofre
    QStringList co = {"Username","TTY","Date","Time","Logout Time","Duration"};
    ui->loginMesseges->setHorizontalHeaderLabels(co);
    ui->loginMesseges->horizontalHeader()->setStretchLastSection(true);


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
            QString searchText = ui->searchUserFiles->text().trimmed();
            filterTableFileChangesUsers(searchText);
        }
    });

    connect(fswatchProcessSecurity, &QProcess::readyReadStandardOutput, this, [this, fswatchProcessSecurity](){
        QString outSecurity = fswatchProcessSecurity->readAllStandardOutput().trimmed();
        if (!outSecurity.isEmpty()) {
            ui->fileChangesSecurity->insertRow(0);
            ui->fileChangesSecurity->setItem(0, 0, new QTableWidgetItem(QDateTime::currentDateTime().toString("HH:mm:ss")));
            ui->fileChangesSecurity->setItem(0, 1, new QTableWidgetItem(outSecurity));
            QString searchText = ui->searchSecurityFiles->text().trimmed();
            filterTableFileChangesSecurity(searchText);
        }
    });

    connect(fswatchProcessDevelopement, &QProcess::readyReadStandardOutput, this, [this, fswatchProcessDevelopement](){
        QString outDevelopement = fswatchProcessDevelopement->readAllStandardOutput().trimmed();
        if (!outDevelopement.isEmpty()) {
            ui->fileChangesDevelopement->insertRow(0);
            ui->fileChangesDevelopement->setItem(0, 0, new QTableWidgetItem(QDateTime::currentDateTime().toString("HH:mm:ss")));
            ui->fileChangesDevelopement->setItem(0, 1, new QTableWidgetItem(outDevelopement));
            QString searchText = ui->searchDevFiles->text().trimmed();
            filterTableFileChangesDevelopment(searchText);
        }
    });

    connect(ui->refreshRunning, &QPushButton::clicked, this, &MainWindow::refresh_processList);

    connect(ui->refreshLogin, &QPushButton::clicked, this, &MainWindow::loginMessege);


    QTimer *timer = new QTimer(this);

    connect(timer, &QTimer::timeout, this, &MainWindow::refresh_topProcess);
    connect(timer, &QTimer::timeout, this, &MainWindow::networkProcess);
    timer->start(1000);  // Runs every 1000ms (1 second)

    connect(ui->searchBarProcess, &QLineEdit::textChanged, this, &MainWindow::filterTableRealtimeProcess);

    connect(ui->searchBarProcessRun, &QLineEdit::textChanged, this, &MainWindow::filterTableRealtimeProcessRun);

    connect(ui->searchBarProcess, &QLineEdit::textChanged, this, &MainWindow::filterTableRealtimeProcess);
    connect(ui->searchBarProcessRun, &QLineEdit::textChanged, this, &MainWindow::filterTableRealtimeProcessRun);
    connect(ui->searchNetwork, &QLineEdit::textChanged, this, &MainWindow::filterTableNetworkConnections);
    connect(ui->searchSecurityLogs, &QLineEdit::textChanged, this, &MainWindow::filterTableRealTimeSecurity);
    connect(ui->searchAuth, &QLineEdit::textChanged, this, &MainWindow::filterTableRealTimeSecurityAuthFail);
    connect(ui->searchSudo, &QLineEdit::textChanged, this, &MainWindow::filterTableRealTimeSecuritySudoFail);
    connect(ui->searchCode, &QLineEdit::textChanged, this, &MainWindow::filterTableRealTimeSecurityCodeSignIssue);
    connect(ui->searchGate, &QLineEdit::textChanged, this, &MainWindow::filterTableRealTimeSecurityGatekeeper);
    connect(ui->searchKey, &QLineEdit::textChanged, this, &MainWindow::filterTableRealTimeSecurityKeychain);
    connect(ui->searchUserFiles, &QLineEdit::textChanged, this, &MainWindow::filterTableFileChangesUsers);
    connect(ui->searchSecurityFiles, &QLineEdit::textChanged, this, &MainWindow::filterTableFileChangesSecurity);
    connect(ui->searchDevFiles, &QLineEdit::textChanged, this, &MainWindow::filterTableFileChangesDevelopment);
    connect(ui->searchLogin, &QLineEdit::textChanged, this, &MainWindow::filterTableLogin);


    // connect(processTimer, &QTimer::timeout, this, &MainWindow::refresh_topProcess);
    // processTimer->start(1000); // Fixed interval of 1 second




    //PROCESS START SECTION;


    process->start("log", QStringList() <<"stream"<< "--predicate"<< "subsystem == \"com.apple.security\"");
    // log stream --predicate 'subsystem == "com.apple.security"'
    // the log stream thing is used to filter the logs only with com.apple.security
    // macOS has a unified log system, so we have to filter it accordingly. The com.apple.security is a subsystem.

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

void MainWindow::refresh_processList(){
    QProcess runProcess;// name of the process
    runProcess.start("sh", QStringList() << "-c" << "ps aux | grep '^root'"); //the process asme as above but it works on a shell so the pipelinng can work
    runProcess.waitForFinished();// waits fort it to be finishsed then starts to insert the lines
    QString out4=runProcess.readAllStandardOutput(); // stored in out4
    QStringList lines = out4.split("\n",Qt::SkipEmptyParts);//its split into new lines the skip emopty parts is there to make sure that it gonores empty lines
    ui->runningProcess->setRowCount(0);//when the new will be updated the old will be clearedn
    for (const QString &line : lines) {
        QStringList colum=line.split(" ",Qt::SkipEmptyParts);//splits as per witespace
        int row=ui->runningProcess->rowCount();//basically an index
        ui->runningProcess->insertRow(row);
        for (int i = 0; i < 9; ++i) {
            ui->runningProcess->setItem(row, i, new QTableWidgetItem(colum[i]));// takes the idiviadual enteries and entries them
            QString command = colum.mid(9).join(" ");
            ui->runningProcess->setItem(row,9, new QTableWidgetItem(command));

        }

    }

}
void MainWindow::refresh_topProcess() {
    QProcess realtProcess;
    realtProcess.start("sh", QStringList() << "-c"<< "ps axo user,pid,%cpu,%mem,vsz,rss,tt,state,time,command | sort -k3 -nr | head -1");
    realtProcess.waitForFinished();
    QString output = realtProcess.readAllStandardOutput().trimmed();
    if(output.isEmpty()) return;  // so that empty rows dont come
    while(output.contains("  ")) {
        output.replace("  ", " ");  // im splitting by space so this makes sure that any double spaces are rplaced by a single space so its not counted as 2 seperate instances
    }
    QStringList colum = output.split(" ", Qt::SkipEmptyParts);
    if(colum.size()<10)return;  // Ensure valid data
    ui->realtimeProcess->insertRow(0);  // Insert a new row at the top
    for (int i = 0; i < 9; ++i) {
        ui->realtimeProcess->setItem(0, i, new QTableWidgetItem(colum[i]));
    }
    QString command = colum.mid(9).join(" ");
    ui->realtimeProcess->setItem(0, 9, new QTableWidgetItem(command));
    QString searchText = ui->searchBarProcess->text().trimmed();
    filterTableRealtimeProcess(searchText);

}

void MainWindow::networkProcess(){
    QProcess netProcess;
    netProcess.start("sh", QStringList() << "-c" << "lsof -i");//net stat is not used as mac uses it for differnt stuff other than oncomming nrtwork connections so here a new command lsof is used which only displays current net processes
    netProcess.waitForFinished();
    QString out4=netProcess.readAllStandardOutput(); // stored in out4
    QStringList lines = out4.split("\n",Qt::SkipEmptyParts);//its split into new lines the skip emopty parts is there to make sure that it gonores empty lines
    ui->networkConnections->setRowCount(0);//when the new will be updated the old will be clearedn
    for (int i = 1; i < lines.size(); ++i) {
        QStringList colum=lines[i].split(" ",Qt::SkipEmptyParts);//splits as per witespace
        int row=ui->networkConnections->rowCount();//basically an index
        ui->networkConnections->insertRow(row);
        for (int i = 0; i < 7; ++i) {
            ui->networkConnections->setItem(row, i, new QTableWidgetItem(colum[i]));// takes the idiviadual enteries and entries them
            QString command = colum.mid(8).join(" ");
            ui->networkConnections->setItem(row,8, new QTableWidgetItem(command));

        }

    }

}
void MainWindow::loginMessege() {
    QProcess runProcess;
    runProcess.start("sh", QStringList() << "-c" << "last");  // Fetch login history
    runProcess.waitForFinished();

    QString out4 = runProcess.readAllStandardOutput();
    QStringList lines = out4.split("\n", Qt::SkipEmptyParts);
    ui->loginMesseges->setRowCount(0);


    for (const QString &line : lines) {
        QStringList colum = line.split(" ", Qt::SkipEmptyParts);
        if (colum.size() < 9) continue;  // Skip malformed lines

        QString username = colum[0];
        QString tty = colum[1];
        QString date = colum[2] + " " + colum[3] + " " + colum[4];  // Combine the date fields
        QString time = colum[5];
        QString logoutTime = colum[7];
        QString duration = colum[8];

        int row = ui->loginMesseges->rowCount();
        ui->loginMesseges->insertRow(row);

        ui->loginMesseges->setItem(row, 0, new QTableWidgetItem(username));
        ui->loginMesseges->setItem(row, 1, new QTableWidgetItem(tty));
        ui->loginMesseges->setItem(row, 2, new QTableWidgetItem(date));
        ui->loginMesseges->setItem(row, 3, new QTableWidgetItem(time));
        ui->loginMesseges->setItem(row, 4, new QTableWidgetItem(logoutTime));
        ui->loginMesseges->setItem(row, 5, new QTableWidgetItem(duration));
    }
}

void MainWindow::filterTableRealtimeProcess(const QString &text) {
    for (int i = 0; i < ui->realtimeProcess->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < ui->realtimeProcess->columnCount(); ++j) {
            QTableWidgetItem *item = ui->realtimeProcess->item(i, j);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->realtimeProcess->setRowHidden(i, !match);
    }
}


void MainWindow::filterTableRealtimeProcessRun(const QString &text) {
    for (int i = 0; i < ui->runningProcess->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < ui->runningProcess->columnCount(); ++j) {
            QTableWidgetItem *item = ui->runningProcess->item(i, j);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->runningProcess->setRowHidden(i, !match);
    }
}

void MainWindow::filterTableNetworkConnections(const QString &text) {
    for (int i = 0; i < ui->networkConnections->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < ui->networkConnections->columnCount(); ++j) {
            QTableWidgetItem *item = ui->networkConnections->item(i, j);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->networkConnections->setRowHidden(i, !match);
    }
}

void MainWindow::filterTableRealTimeSecurity(const QString &text) {
    for (int i = 0; i < ui->realTimeSecurity->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < ui->realTimeSecurity->columnCount(); ++j) {
            QTableWidgetItem *item = ui->realTimeSecurity->item(i, j);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->realTimeSecurity->setRowHidden(i, !match);
    }
}

void MainWindow::filterTableRealTimeSecurityAuthFail(const QString &text) {
    for (int i = 0; i < ui->realTimeSecurityAuthFail->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < ui->realTimeSecurityAuthFail->columnCount(); ++j) {
            QTableWidgetItem *item = ui->realTimeSecurityAuthFail->item(i, j);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->realTimeSecurityAuthFail->setRowHidden(i, !match);
    }
}

void MainWindow::filterTableRealTimeSecuritySudoFail(const QString &text) {
    for (int i = 0; i < ui->realTimeSecuritySudoFail->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < ui->realTimeSecuritySudoFail->columnCount(); ++j) {
            QTableWidgetItem *item = ui->realTimeSecuritySudoFail->item(i, j);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->realTimeSecuritySudoFail->setRowHidden(i, !match);
    }
}

void MainWindow::filterTableRealTimeSecurityCodeSignIssue(const QString &text) {
    for (int i = 0; i < ui->realTimeSecurityCodeSignIssue->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < ui->realTimeSecurityCodeSignIssue->columnCount(); ++j) {
            QTableWidgetItem *item = ui->realTimeSecurityCodeSignIssue->item(i, j);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->realTimeSecurityCodeSignIssue->setRowHidden(i, !match);
    }
}

void MainWindow::filterTableRealTimeSecurityGatekeeper(const QString &text) {
    for (int i = 0; i < ui->realTimeSecurityGatekeeper->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < ui->realTimeSecurityGatekeeper->columnCount(); ++j) {
            QTableWidgetItem *item = ui->realTimeSecurityGatekeeper->item(i, j);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->realTimeSecurityGatekeeper->setRowHidden(i, !match);
    }
}

void MainWindow::filterTableRealTimeSecurityKeychain(const QString &text) {
    for (int i = 0; i < ui->realTimeSecurityKeychain->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < ui->realTimeSecurityKeychain->columnCount(); ++j) {
            QTableWidgetItem *item = ui->realTimeSecurityKeychain->item(i, j);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->realTimeSecurityKeychain->setRowHidden(i, !match);
    }
}

void MainWindow::filterTableFileChangesUsers(const QString &text) {
    for (int i = 0; i < ui->fileChangesUsers->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < ui->fileChangesUsers->columnCount(); ++j) {
            QTableWidgetItem *item = ui->fileChangesUsers->item(i, j);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->fileChangesUsers->setRowHidden(i, !match);
    }
}

void MainWindow::filterTableFileChangesSecurity(const QString &text) {
    for (int i = 0; i < ui->fileChangesSecurity->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < ui->fileChangesSecurity->columnCount(); ++j) {
            QTableWidgetItem *item = ui->fileChangesSecurity->item(i, j);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->fileChangesSecurity->setRowHidden(i, !match);
    }
}

void MainWindow::filterTableFileChangesDevelopment(const QString &text) {
    for (int i = 0; i < ui->fileChangesDevelopement->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < ui->fileChangesDevelopement->columnCount(); ++j) {
            QTableWidgetItem *item = ui->fileChangesDevelopement->item(i, j);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->fileChangesDevelopement->setRowHidden(i, !match);
    }
}

void MainWindow::filterTableLogin(const QString &text) {
    for (int i = 0; i < ui->loginMesseges->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < ui->loginMesseges->columnCount(); ++j) {
            QTableWidgetItem *item = ui->loginMesseges->item(i, j);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->loginMesseges->setRowHidden(i, !match);
    }
}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

}

