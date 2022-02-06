#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    two_players = new twoplayers();
    vs_computer = new vscomputer();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    qDebug()<<"vs_computer" ;
  //to hide the current window
    this->hide();
    //then showing the vscomputer window
    vs_computer->show();
}

void MainWindow::on_pushButton_2_clicked()
{
     qDebug()<<"vs_computer" ;
    this->hide();
    two_players->show();

}

void MainWindow::on_pushButton_3_clicked()
{
     qDebug()<<"information" ;
//Message box giving you details about tic tac toe
        QMessageBox::about(this, "About tic tac toe", "Game in which two players alternately put Xs and Os in compartments of a figure formed by two vertical lines crossing two horizontal lines and each tries to get a row of three Xs or three Os before the opponent does .");


}


