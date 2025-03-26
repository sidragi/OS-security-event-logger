#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTableWidget>//this is added so it can use the particular table properties
#include <QDateTime>// in order to use current time

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

private:
    Ui::MainWindow *ui;
    void splitNshow(const QString &logEntry, const QString &defaultType);
    QString customPathText = "Users/";//the custom path text is used to store the user entered value


};

#endif // MAINWINDOW_H
