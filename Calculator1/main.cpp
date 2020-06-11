/* Created by Litao in 2020 03 29
 *
 *
 * This program is the first programing for Qt wedgets ;
 * My intention is that could understand it preliminarily and i think how to use the UI tools is more improtant ;
 * So the calculator's function maybe fool，design the most algorithms on it are also unnecessary  for me at this stage;
 * Version: 1.0
 *
 *
 */

/*
 * 这个程序作为第一次wigets编程;
 * 我的意图在于初步了解它， 我认为如何去运用这些UI工具更为重要；
 * 所以这个计算机应用的功能可能是缺乏的,因为在当前阶段设计关于这些计算机的相关算法对我来说没有很大必要；
 * 版本：1.0
 *
 */

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
