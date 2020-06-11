//Created by Litao in 2020 03 29


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QString>
#include<iostream>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    //if you need declare your own signals or lots or that..., if must define the Q_OBJECT macro
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:

    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_0_clicked();

    void on_pushButton_div_clicked();
    void on_pushButton_add_clicked();
    void on_pushButton_subtract_clicked();
    void on_pushButton_multiply_clicked();

    void on_pushButton_equal_clicked();
    void on_pushButton_AC_clicked();

private:

    QString expression; //一个二元的计算表达式
    double num1, num2;  //两个操作数
    char _operator;    //操作符
    double result;     //运算结果
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
