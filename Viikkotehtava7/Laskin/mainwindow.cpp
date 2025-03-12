#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLineEdit>
#include <QString>
#include <QDebug>

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

int MainWindow::getState() const
{
    return state;
}

void MainWindow::setState(int newState)
{
    state = newState;
}

int MainWindow::getNumber() const
{
    return number;
}

void MainWindow::numberClickedHandler()
{
    getState();

    if(state == 1)
    {
        number1 += QString::number(getNumber());

        ui->num1->setText(number1);
    }
    else if(state == 2)
    {
        number2 += QString::number(getNumber());
        ui->num2->setText(number2);
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    setState(2);
}

void MainWindow::resetLineEdits()
{
    ui->num1->setText(" ");

    ui->num2->setText(" ");

    ui->result->setText(" ");
}

void MainWindow::on_pushButton_1_clicked()
{
    number = 1;
    numberClickedHandler();
}


void MainWindow::on_pushButton_2_clicked()
{
    number = 2;
    numberClickedHandler();
}


void MainWindow::on_pushButton_3_clicked()
{
    number = 3;
    numberClickedHandler();
}


void MainWindow::on_pushButton_Add_clicked()
{
    operand = 0;
    addSubMulDivClickHandler();
}


void MainWindow::on_pushButton_4_clicked()
{
    number = 4;
    numberClickedHandler();
}


void MainWindow::on_pushButton_5_clicked()
{
    number = 5;
    numberClickedHandler();
}


void MainWindow::on_pushButton_6_clicked()
{
    number = 6;
    numberClickedHandler();
}


void MainWindow::on_pushButton_Sub_clicked()
{
    operand = 1;
    addSubMulDivClickHandler();
}


void MainWindow::on_pushButton_7_clicked()
{
    number = 7;
    numberClickedHandler();
}


void MainWindow::on_pushButton_8_clicked()
{
    number = 8;
    numberClickedHandler();
}


void MainWindow::on_pushButton_9_clicked()
{
    number = 9;
    numberClickedHandler();
}


void MainWindow::on_pushButton_Mul_clicked()
{
    operand = 2;
    addSubMulDivClickHandler();
}


void MainWindow::on_pushButton_Clear_clicked()
{
    setState(1);
    number1 = "";
    number2 = "";
    resetLineEdits();
}


void MainWindow::on_pushButton_0_clicked()
{
    number = 0;
    numberClickedHandler();
}


void MainWindow::on_pushButton_Enter_clicked()
{
    if(operand == 0)
    {
        result = number1.toFloat() + number2.toFloat();
    }
    if(operand == 1)
    {
        result = number1.toFloat() - number2.toFloat();
    }
    if(operand == 2)
    {
        result = number1.toFloat() * number2.toFloat();
    }
    if(operand == 3)
    {
        result = number1.toFloat() / number2.toFloat();
    }

    ui->result->setText(QString::number(result));
}


void MainWindow::on_pushButton_Div_clicked()
{
    operand = 3;
    addSubMulDivClickHandler();
}

