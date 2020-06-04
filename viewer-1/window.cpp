#include "window.h"
#include "ui_window.h"

Window::Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Window), m_viewer(new Viewer)
{
    ui->setupUi(this);
    setCentralWidget(m_viewer);
    setWindowTitle("Free Viewer");
}

Window::~Window()
{
    delete ui;
    delete m_viewer;
}


void Window::on_actionexit_triggered()
{
    close();

}

void Window::on_actionprevious_triggered()
{
    m_viewer->PreviousPicture();

}

void Window::on_actionnext_triggered()
{
    m_viewer->NextPicture();

}

void Window::on_actionabout_triggered()
{
    QMessageBox::about(this, tr("Free Viewer"),tr("Author: LiTao\n"));

}

void Window::on_actionopen_triggered()
{
    QFileDialog dialog(this,tr("Choose image files"), "/",tr("*.png *.jpg"));
    QStringList Paths=dialog.getOpenFileNames();
    m_viewer->addPaths(Paths);

}

void Window::on_actiondelete_triggered()
{
    m_viewer->deletecurrentpicture();

}
