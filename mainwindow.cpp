#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->labelTitle->setText("OS Project CSE316"); //here labletitle is the object which is the title and the set text is an function in the header which changes the title to whatevre ive written there
    ui->labelTitle->setAlignment(Qt::AlignCenter);// this one is similar to the above one it juts makes the aligmnent of the text in the center

}

MainWindow::~MainWindow()
{
    delete ui;
}
