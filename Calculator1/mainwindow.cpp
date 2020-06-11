//Created by Litao in 2020 03 29
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("计算器");
}

MainWindow::~MainWindow()
{
    delete ui;
}


//all of the bottons'slots of the calculator are here

//digit: 0 1 2...9
void MainWindow::on_pushButton_1_clicked()
{
    expression.append("1");
    ui->lineEdit->setText(expression);

}

void MainWindow::on_pushButton_2_clicked()
{
    expression.append("2");
    ui->lineEdit->setText(expression);

}

void MainWindow::on_pushButton_3_clicked()
{
    expression.append("3");
    ui->lineEdit->setText(expression);
}


void MainWindow::on_pushButton_4_clicked()
{
    expression.append("4");
    ui->lineEdit->setText(expression);
}

void MainWindow::on_pushButton_5_clicked()
{
    expression.append("5");
    ui->lineEdit->setText(expression);
}


void MainWindow::on_pushButton_6_clicked()
{
    expression.append("6");
    ui->lineEdit->setText(expression);
}


void MainWindow::on_pushButton_7_clicked()
{
    expression.append("7");
    ui->lineEdit->setText(expression);
}

void MainWindow::on_pushButton_8_clicked()
{
    expression.append("8");
    ui->lineEdit->setText(expression);
}

void MainWindow::on_pushButton_9_clicked()
{
    expression.append("9");
    ui->lineEdit->setText(expression);
}

void MainWindow::on_pushButton_0_clicked()
{
    expression.append("0");
    ui->lineEdit->setText(expression);
}

//the operator: 加 减 乘 除；
void MainWindow::on_pushButton_div_clicked()
{
    _operator='/';
    expression.append(" / ");
    ui->lineEdit->setText(expression);
}

void MainWindow::on_pushButton_add_clicked()
{
    _operator='+';
    expression.append(" + ");
    ui->lineEdit->setText(expression);
}

void MainWindow::on_pushButton_subtract_clicked()
{
    _operator='-';
    expression.append(" - ");
    ui->lineEdit->setText(expression);
}

void MainWindow::on_pushButton_multiply_clicked()
{
    _operator='*';
    expression.append(" * ");
    ui->lineEdit->setText(expression);
}


//计算结果：=
void MainWindow::on_pushButton_equal_clicked()
{
    //numbers和操作符之间用空格分隔
    QStringList exp_list=expression.split(" ");
    if(exp_list.length()!=3) ui->lineEdit->setText("对不起，表达式错误！");
    else {
        bool *ok1=nullptr, *ok2=nullptr;
        //类型转换
        exp_list[0]=exp_list[0].simplified();
        num1=exp_list[0].toDouble(ok1);
        exp_list[2]=exp_list[2].simplified();
        num1=exp_list[2].toDouble(ok2);

        //类型转换检测
        if(*ok1==true || *ok2==true){
            //匹配运算符
                  switch (_operator) {
                  case '+':
                          result=num1+num2;
                          break;
                  case '-':
                          result=num1-num2;
                          break;
                  case '*':
                          result=num1*num2;
                          break;
                  case '/':
                          if(0==num2) result=0;
                          else result=num1/num2;
                          break;
                  default:
                          result=0;
                          break;
            }
                  ui->lineEdit_result->setText(tr("1%").arg(result));
        }else {
            expression.append("->数值错误");
            ui->lineEdit_result->setText(expression);

    }
    expression.clear();

    free(ok1);
    free(ok2);
    }
}
//清零
void MainWindow::on_pushButton_AC_clicked()
{
    expression.clear();
    ui->lineEdit->clear();
    ui->lineEdit_result->clear();
}

