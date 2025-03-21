#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QString>

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

    int number = 0;

private slots:
    void on_pushButtonCount_clicked();

    void on_pushButtonReset_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
