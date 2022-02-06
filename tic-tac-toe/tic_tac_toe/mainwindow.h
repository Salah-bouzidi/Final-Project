#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "twoplayers.h"
#include "vscomputer.h"
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //The button that redirect you to the vscomputer  playing mode
    void on_pushButton_clicked();
    //The button that redirect you to the two players  playing mode
    void on_pushButton_2_clicked();
    //Message box giving you informations about the tic tac toe game
    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    //constructor of twoplayers class
    twoplayers *two_players;
     //constructor of vscomputer class
    vscomputer *vs_computer;
};
#endif // MAINWINDOW_H
