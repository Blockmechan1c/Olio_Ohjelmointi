#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLineEdit>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonCount_clicked()
{
    number = number + 1;
    ui->lineEdit->setText(QString::number(number));
}


void MainWindow::on_pushButtonReset_clicked()
{
    number = 0;
    ui->lineEdit->setText(QString::number(number));
}
