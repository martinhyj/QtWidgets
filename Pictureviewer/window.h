//Created by 2018051604100 litao in 2020 0606
#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include<QFileDialog>
#include "viewer.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QMainWindow
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
    ~Window();

private slots:

    void on_actionexit_triggered();
    void on_actionprevious_triggered();
    void on_actionnext_triggered();
    void on_actionabout_triggered();
    void on_actionopen_triggered();
    void on_actiondelete_triggered();

private:
    Ui::Window *ui;
    Viewer *m_viewer;
};
#endif // WINDOW_H
