//Created by 2018051604100 litao in 2020 0606

#ifndef VIEWER_H
#define VIEWER_H
#include <QImage>
#include <QWidget>
#include <QStringList>
#include <QLabel>
#include<QString>
#include<QMessageBox>


class Viewer : public QLabel
{
    Q_OBJECT
public:
    Viewer();
    void addPaths(const QStringList &paths);
    void displayImage();
    void PreviousPicture();
    void NextPicture();
    void deletecurrentpicture();
    //to do...

private:
    QImage m_image;  //
    QPixmap m_pixmap; //像素，映射
    QStringList m_paths; //路径
    int m_currentIndex{-1}; //当前索引
};

#endif // VIEWER_H
