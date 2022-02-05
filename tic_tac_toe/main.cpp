#include <QDebug>



#include "mainwindow.h"
#include "twoplayers.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    int tt = 4;
    qDebug() << tt / 3;
    qDebug() << tt % 3;
    return a.exec();
}
