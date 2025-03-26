#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTableWidget>//this is added so it can use the particular table properties
#include <QDateTime>// in order to use current time
#include<QTimer>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void refresh_processList();// this function is declared so on clicking the refresh button you will get the current running root processes
    void refresh_topProcess();//this will get the highet process with cpu usage
    void networkProcess();//same as the above ones used to updat ethe process

private:
    Ui::MainWindow *ui;
    void splitNshow(const QString &logEntry, const QString &defaultType);
    QString customPathText = "Users/";//the custom path text is used to store the user entered value
    QTimer *processTimer;// this is there so the program can update the top process over a period of time


};

#endif // MAINWINDOW_H
