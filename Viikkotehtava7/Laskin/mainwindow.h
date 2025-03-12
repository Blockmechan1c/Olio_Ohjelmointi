#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QLineEdit>
#include <QString>
#include <QDebug>

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

    int getState() const;
    void setState(int newState);

    int number;

    int getNumber() const;

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_Add_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_Sub_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_Mul_clicked();

    void on_pushButton_Clear_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_Enter_clicked();

    void on_pushButton_Div_clicked();

private:
    Ui::MainWindow *ui;
    QString number1, number2;
    int state = 1;
    float result;
    short operand;

    void numberClickedHandler();
    void addSubMulDivClickHandler();
    void resetLineEdits();

};
#endif // MAINWINDOW_H
