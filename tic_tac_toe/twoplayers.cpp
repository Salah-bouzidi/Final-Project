#include "twoplayers.h"
#include "ui_twoplayers.h"
#include <QDebug>
twoplayers::twoplayers(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::twoplayers)
{
    ui->setupUi(this);
}

twoplayers::~twoplayers()
{
    delete ui;
}
void twoplayers::is_successful()
{

    for(int i=0; i<3; i++)
    {
              //test if X wins horizontally
              if(positions[i][0] == pos::CROSS && positions[i][1] == pos::CROSS && positions[i][2] == pos::CROSS ){

                  QMessageBox::information(this,"Match Winner", "X won");
                  QApplication::exit();

                  }
              //test if X wins vertically
              if(positions[0][i] == pos::CROSS && positions[1][i] == pos::CROSS && positions[2][i] == pos::CROSS )  {

                  QMessageBox::information(this,"Match Winner", "X won");
                  QApplication::exit();

                  }
          }
//test if X wins diagonally
    if(positions[0][0]==pos::CROSS && positions[1][1]==pos::CROSS && positions[2][2]==pos::CROSS){
        QMessageBox::information(this,"Match Winner", "X won");
        QApplication::exit();

        }
    if(positions[2][0]==pos::CROSS && positions[1][1]==pos::CROSS && positions[0][2]==pos::CROSS){
        QMessageBox::information(this,"Match Winner", "X won");
        QApplication::exit();

        }
    for(int i=0; i<3; i++)
    {
        //test if O wins horizontally
              if(positions[i][0] == pos::CIRCLE && positions[i][1] == pos::CIRCLE && positions[i][2] == pos::CIRCLE ) {

                  QMessageBox::information(this,"Match Winner", "O won");
                  QApplication::exit();
                }
              //test if X wins vertically
              if(positions[0][i] == pos::CIRCLE && positions[1][i] == pos::CIRCLE && positions[2][i] == pos::CIRCLE ){
                      QMessageBox::information(this,"Match Winner", "O won");
                      QApplication::exit();

                      }
          }
   //test if X wins diagonally
    if(positions[0][0]==pos::CIRCLE && positions[1][1]==pos::CIRCLE && positions[2][2]==pos::CIRCLE){
        QMessageBox::information(this,"Match Winner", "O won");
        QApplication::exit();

        }
    if(positions[2][0]==pos::CIRCLE && positions[1][1]==pos::CIRCLE && positions[0][2]==pos::CIRCLE){
        QMessageBox::information(this,"Match Winner", "O won");
        QApplication::exit();

        }
    int draw = 0;
    //loop to test the draw case
    for(int i=1;i<4;i++){
        for(int j=1; j<4;j++){
            if(positions[i-1][j-1] != pos::NONE){

                draw ++;
            }

        }
     }

    //the draw match
    if(draw == 9) {
         QMessageBox::information(this,"Draw Match", "You are equal");
          exit(0);
    }

}
  //setting O or X in the button 1
void twoplayers::on_button1_clicked()
{
    if(positions[0][0] ==pos::NONE)
    {
        if(turn)
        {
            ui->button1->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");

            positions[0][0] = pos::CROSS;
            ui->textEdit->setText("Turn: O");
        }
        else
        {
             ui->button1->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");
            positions[0][0] = pos::CIRCLE;
            ui->textEdit->setText("Turn: X");

        }
        ui->textEdit->setAlignment(Qt::AlignCenter);
        QFont font = ui->textEdit->font();
        font.setBold(true);
        font.setPointSize(18);
        ui->textEdit->setFont(font);
        turn = !turn;
    }
    is_successful();
    ui->button1->setEnabled(false);
}
     //setting O or X in the button 2
void twoplayers::on_button2_clicked()
{
    if(positions[0][1] ==pos::NONE)
    {
        if(turn)
        {
             ui->button2->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");

            positions[0][1] = pos::CROSS;
            ui->textEdit->setText("Turn: O");
        }
        else
        {
             ui->button2->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");
            positions[0][1] = pos::CIRCLE;
            ui->textEdit->setText("Turn: X");
        }
        ui->textEdit->setAlignment(Qt::AlignCenter);
        QFont font = ui->textEdit->font();
        font.setBold(true);
        font.setPointSize(18);
        ui->textEdit->setFont(font);
        turn = !turn;
    }

    is_successful();
    ui->button2->setEnabled(false);
}
    //setting O or X in the button "
void twoplayers::on_button3_clicked()
{
    if(positions[0][2] ==pos::NONE)
    {
        if(turn)
        {
             ui->button3->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");

            positions[0][2] = pos::CROSS;
            ui->textEdit->setText("Turn: O");
        }
        else
        {
             ui->button3->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");
            positions[0][2] = pos::CIRCLE;
            ui->textEdit->setText("Turn: X");
        }
        ui->textEdit->setAlignment(Qt::AlignCenter);
        QFont font = ui->textEdit->font();
        font.setBold(true);
        font.setPointSize(18);
        ui->textEdit->setFont(font);
        turn = !turn;
    }
    is_successful();
    ui->button3->setEnabled(false);
}
    //setting O or X in the button 4
void twoplayers::on_button4_clicked()
{
    if(positions[1][0] ==pos::NONE)
    {
        if(turn)
        {
             ui->button4->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");

            positions[1][0] = pos::CROSS;
            ui->textEdit->setText("Turn: O");
        }
        else
        {
             ui->button4->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");
            positions[1][0] = pos::CIRCLE;
            ui->textEdit->setText("Turn: X");
        }
        ui->textEdit->setAlignment(Qt::AlignCenter);QFont font = ui->textEdit->font();
        font.setBold(true);
        font.setPointSize(18);
        ui->textEdit->setFont(font);
        turn = !turn;
    }
    is_successful();
    ui->button4->setEnabled(false);
}
 //setting O or X in the button 5
void twoplayers::on_button5_clicked()
{
    if(positions[1][1] ==pos::NONE)
    {
        if(turn)
        {
             ui->button5->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");

            positions[1][1] = pos::CROSS;
            ui->textEdit->setText("Turn: O");
        }
        else
        {
             ui->button5->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");
            positions[1][1] = pos::CIRCLE;
            ui->textEdit->setText("Turn: X");
        }
        ui->textEdit->setAlignment(Qt::AlignCenter);
        QFont font = ui->textEdit->font();
        font.setBold(true);
        font.setPointSize(18);
        ui->textEdit->setFont(font);
        turn = !turn;
    }
    is_successful();
    ui->button5->setEnabled(false);
}
 //setting O or X in the button 6
void twoplayers::on_button6_clicked()
{
    if(positions[1][2] ==pos::NONE)
    {
        if(turn)
        {
             ui->button6->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");

            positions[1][2] = pos::CROSS;
            ui->textEdit->setText("Turn: O");
        }
        else
        {
             ui->button6->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");
            positions[1][2] = pos::CIRCLE;
            ui->textEdit->setText("Turn: X");
        }
        ui->textEdit->setAlignment(Qt::AlignCenter);
        QFont font = ui->textEdit->font();
        font.setBold(true);
        font.setPointSize(18);
        ui->textEdit->setFont(font);
        turn = !turn;
    }
    is_successful();
    ui->button6->setEnabled(false);
}
//setting O or X in the button 7
void twoplayers::on_button7_clicked()
{
    if(positions[2][0] ==pos::NONE)
    {
        if(turn)
        {
             ui->button7->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");

            positions[2][0] = pos::CROSS;
            ui->textEdit->setText("Turn: O");
        }
        else
        {
             ui->button7->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");
            positions[2][0] = pos::CIRCLE;
            ui->textEdit->setText("Turn: X");
        }
        ui->textEdit->setAlignment(Qt::AlignCenter);
        QFont font = ui->textEdit->font();
        font.setBold(true);
        font.setPointSize(18);
        ui->textEdit->setFont(font);
        turn = !turn;
    }
    is_successful();
    ui->button7->setEnabled(false);

}
//setting O or X in the button  8
void twoplayers::on_button8_clicked()
{
    if(positions[2][1] ==pos::NONE)
    {
        if(turn)
        {
             ui->button8->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");

            positions[2][1] = pos::CROSS;
            ui->textEdit->setText("Turn: O");

        }
        else
        {
             ui->button8->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");
            positions[2][1] = pos::CIRCLE;
            ui->textEdit->setText("Turn: X");
        }
        ui->textEdit->setAlignment(Qt::AlignCenter);
        QFont font = ui->textEdit->font();
        font.setBold(true);
        font.setPointSize(18);
        ui->textEdit->setFont(font);
        turn = !turn;
    }
    is_successful();
    ui->button8->setEnabled(false);
}
//setting O or X in the button 9
void twoplayers::on_button9_clicked()
{
    if(positions[2][2] ==pos::NONE)
    {

        if(turn)
        {
             ui->button9->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");

            positions[2][2] = pos::CROSS;
            ui->textEdit->setText("Turn: O");
        }
        else
        {
             ui->button9->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");
            positions[2][2] = pos::CIRCLE;
            ui->textEdit->setText("Turn: X");
        }
        ui->textEdit->setAlignment(Qt::AlignCenter);
        QFont font = ui->textEdit->font();
        font.setBold(true);
        font.setPointSize(18);
        ui->textEdit->setFont(font);
        turn = !turn;
    }
    is_successful();
    ui->button9->setEnabled(false);
}
//button for quit the game
void twoplayers::on_pushButton_clicked()
{
    auto reply = QMessageBox::question(this,"Exit","Do you really want to exit?");

     if(reply == QMessageBox::Yes)
         qApp->exit();
}
