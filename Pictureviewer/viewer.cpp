//Created by 2018051604100 litao in 2020 0606
#include "viewer.h"


Viewer::Viewer()
{
    m_image.load("/Users/litao999/qt/viewer-demo/image/1.jpg");
    m_pixmap = QPixmap::fromImage(m_image.scaled(size(),Qt::KeepAspectRatio));
    setPixmap(m_pixmap);
    setScaledContents(true);
}

void Viewer::addPaths(const QStringList &paths)
{
    if(m_paths.length()==0) m_currentIndex=0;
    m_paths=m_paths+paths;
    displayImage();

}

void Viewer::displayImage()
{
    m_image.load(m_paths[m_currentIndex]);
    m_pixmap = QPixmap::fromImage(m_image.scaled(size(),Qt::KeepAspectRatio));
    setPixmap(m_pixmap);
    setScaledContents(true);

}

void Viewer::PreviousPicture()
{
    if(m_currentIndex==-1){
        QMessageBox::warning(this,tr("Free Viewer"), tr("There is no picture to show"));
    }
    else if(m_currentIndex-1 != -1){
        m_currentIndex--;
        displayImage();
    }else {
        QMessageBox::warning(this,tr("Free Viewer"), tr("This is the first picture"));
    }

}

void Viewer::NextPicture()
{
    if(m_currentIndex==-1){
        QMessageBox::warning(this,tr("Free Viewer"), tr("There is no picture to show"));
    }
    else if(m_currentIndex+1 ==m_paths.length())
    {
        QMessageBox::warning(this, tr("Free Viewer"), tr("This is the last picture"));
    }
    else {
        m_currentIndex++;
        displayImage();
    }

}

void Viewer::deletecurrentpicture()
{
    if(m_paths.length()==1){
        m_paths.removeAt(m_currentIndex);
        m_pixmap.fill(Qt::black);
        setPixmap(m_pixmap);
        QMessageBox::warning(this, tr("Free Viewer"), tr("There is no picture to show"));
        m_currentIndex=-1;
    }
    else if(m_currentIndex+1 != m_paths.length()){
        m_paths.removeAt(m_currentIndex);
        displayImage();
    }
    else if(m_currentIndex==-1){
        QMessageBox::warning(this, tr("Free Viewer"), tr("There is no picture to show"));
    }
    else{
        m_paths.removeAt(m_currentIndex);
        m_currentIndex--;
        displayImage();
    }


}
