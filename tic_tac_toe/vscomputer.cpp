#include "vscomputer.h"
#include "ui_vscomputer.h"

vscomputer::vscomputer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::vscomputer)
{
    ui->setupUi(this);
}

vscomputer::~vscomputer()
{
    delete ui;
}
/*
 * [1,1 (1)]       [1,2 (2)]         [1,3 (3)]
 * [2,1 (4)]       [2,2 (5)]         [2,3 (6)]
 * [3,1 (7)]       [3,2 (8)]         [3,3 (9)]
 *positions
 *
 */




bool vscomputer::computerWins()
{
    //FILL IN POSITION 1 WITH O TO WIN BY THE 1ST ROW
    if(positions[0][0] == pos::NONE && positions[0][1] == pos::CROSS && positions[0][2] == pos::CROSS)
    {
        setPositions(1);
        return true;
    }
    //FILL IN POSITION 2 WITH O TO WIN BY THE 1ST ROW
    else if(positions[0][0] == pos::CROSS && positions[0][1] == pos::NONE && positions[0][2] == pos::CROSS)
    {
        setPositions(2);
        return true;
    }
    //FILL IN POSITION 3 WITH O TO WIN BY THE 1ST ROW
    else if(positions[0][0] == pos::CROSS && positions[0][1] == pos::CROSS && positions[0][2] == pos::NONE)
    {
        setPositions(3);
        return true;
    }

    //FILL IN POSITION 4 WITH O TO WIN BY THE 2sd ROW
    else if(positions[1][0] == pos::NONE && positions[1][1] == pos::CROSS && positions[1][2] == pos::CROSS)
    {
        setPositions(4);
        return true;
    }
    //FILL IN POSITION 5 WITH O TO WIN BY THE 2sd ROW
    else if(positions[1][0] == pos::CROSS && positions[1][1] == pos::NONE && positions[1][2] == pos::CROSS)
    {
        setPositions(5);
        return true;
    }
    //FILL IN POSITION 6 WITH O TO WIN BY THE 2sd ROW
    else if(positions[1][0] == pos::CROSS && positions[1][1] == pos::CROSS && positions[1][2] == pos::NONE)
    {
        setPositions(6);
        return true;
    }

    //FILL IN POSITION 7 WITH O TO WIN BY THE 3td ROW
    else if(positions[2][0] == pos::NONE && positions[2][1] == pos::CROSS && positions[2][2] == pos::CROSS)
    {
        setPositions(7);
        return true;
    }
    //FILL IN POSITION 8 WITH O TO WIN BY THE 3td ROW
    else if(positions[2][0] == pos::CROSS && positions[2][1] == pos::NONE && positions[2][2] == pos::CROSS)
    {
        setPositions(8);
        return true;
    }
    //FILL IN POSITION 9 WITH O TO WIN BY THE 3td ROW
    else if(positions[2][0] == pos::CROSS && positions[2][1] == pos::CROSS && positions[2][2] == pos::NONE)
    {
        setPositions(9);
        return true;
    }

    //FILL IN POSITION 1 WITH O TO WIN BY THE 1ST COLUMN
    else if(positions[0][0] == pos::NONE && positions[1][0] == pos::CROSS && positions[2][0] == pos::CROSS)
    {
        setPositions(1);
        return true;
    }
    //FILL IN POSITION 4 WITH O TO WIN BY THE 1ST COLUMN
    else if(positions[0][0] == pos::CROSS && positions[1][0] == pos::NONE && positions[2][0] == pos::CROSS)
    {
        setPositions(4);
        return true;
    }
    //FILL IN POSITION 7 WITH O TO WIN BY THE 1ST COLUMN
    else if(positions[0][0] == pos::CROSS && positions[1][0] == pos::CROSS && positions[2][0] == pos::NONE)
    {
        setPositions(7);
        return true;
    }

    //FILL IN POSITION 2 WITH O TO WIN BY THE 2ND COLUMN
    else if(positions[0][1] == pos::NONE && positions[1][1] == pos::CROSS && positions[2][1] == pos::CROSS)
    {
        setPositions(2);
        return true;
    }
    //FILL IN POSITION 5 WITH O TO WIN BY THE 2ND COLUMN
    else if(positions[0][1] == pos::CROSS && positions[1][1] == pos::NONE && positions[2][1] == pos::CROSS)
    {
        setPositions(5);
        return true;
    }
    //FILL IN POSITION 8 WITH O TO WIN BY THE 2ND COLUMN
    else if(positions[0][1] == pos::CROSS && positions[1][1] == pos::CROSS && positions[2][1] == pos::NONE)
    {
        setPositions(8);
        return true;
    }

     //FILL IN POSITION 3 WITH O TO WIN BY THE 3RD COLUMN
    else if(positions[0][2] == pos::NONE && positions[1][2] == pos::CROSS && positions[2][2] == pos::CROSS)
    {
        setPositions(3);
        return true;
    }
     //FILL IN POSITION 6 WITH O TO WIN BY THE 3RD COLUMN
    else if(positions[0][2] == pos::CROSS && positions[1][2] == pos::NONE && positions[2][2] == pos::CROSS)
    {
        setPositions(6);
        return true;
    }
     //FILL IN POSITION 9 WITH O TO WIN BY THE 3RD COLUMN
    else if(positions[0][2] == pos::CROSS && positions[1][2] == pos::CROSS && positions[2][2] == pos::NONE)
    {
        setPositions(9);
        return true;
    }


    //FILL IN THE POSITION 1 TO WIN DIAGONALLY FROM UP-LEFT TO DOWN-RIGHT
    else if(positions[0][0] == pos::NONE && positions[1][1] == pos::CROSS && positions[2][2] == pos::CROSS)
    {
        setPositions(1);
        return true;
    }

    //FILL IN THE POSITION 5 TO WIN DIAGONALLY FROM UP-LEFT TO DOWN-RIGHT
    else if(positions[0][0] == pos::CROSS && positions[1][1] == pos::NONE && positions[2][2] == pos::CROSS)
    {
        setPositions(5);
        return true;
    }

    //FILL IN THE POSITION 9 TO WIN DIAGONALLY FROM UP-LEFT TO DOWN-RIGHT
    else if(positions[0][0] == pos::CROSS && positions[1][1] == pos::CROSS && positions[2][2] == pos::NONE)
    {
        setPositions(9);
        return true;
    }

    //FILL IN THE POSITION 3 TO WIN DIAGONALLY FROM UP-RIGHT TO DOWN-LEFT
    else if(positions[0][2] == pos::NONE && positions[1][1] == pos::CROSS && positions[2][0] == pos::CROSS)
    {
        setPositions(3);
        return true;
    }
    //FILL IN THE POSITION 5 TO WIN DIAGONALLY FROM UP-RIGHT TO DOWN-LEFT
    else if(positions[0][2] == pos::CROSS && positions[1][1] == pos::NONE && positions[2][0] == pos::CROSS)
    {
        setPositions(5);
        return true;
    }
    //FILL IN THE POSITION 7 TO WIN DIAGONALLY FROM UP-RIGHT TO DOWN-LEFT
    else if(positions[0][2] == pos::CROSS && positions[1][1] == pos::CROSS && positions[2][0] == pos::NONE)
    {
        setPositions(7);
        return true;
    }
    return false;
}
bool vscomputer::computerNotLoosing()
{
    //Not loose in the 1st row
    if(positions[0][0] == pos::NONE && positions[0][1] == pos::CIRCLE && positions[0][2] == pos::CIRCLE)
    {
        setPositions(1);
        return true;
    }
    else if(positions[0][0] == pos::CIRCLE && positions[0][1] == pos::NONE && positions[0][2] == pos::CIRCLE)
    {
        setPositions(2);
        return true;
    }
    else if(positions[0][0] == pos::CIRCLE && positions[0][1] == pos::CIRCLE && positions[0][2] == pos::NONE)
    {
        setPositions(3);
        return true;
    }

 //Not loose in the 2rd row
    else if(positions[1][0] == pos::NONE && positions[1][1] == pos::CIRCLE && positions[1][2] == pos::CIRCLE)
    {
        setPositions(4);
        return true;
    }
    else if(positions[1][0] == pos::CIRCLE && positions[1][1] == pos::NONE && positions[1][2] == pos::CIRCLE)
    {
        setPositions(5);
        return true;
    }
    else if(positions[1][0] == pos::CIRCLE && positions[1][1] == pos::CIRCLE && positions[1][2] == pos::NONE)
    {
        setPositions(6);
        return true;
    }

   //Not loose in the 3rd row
    else if(positions[2][0] == pos::NONE && positions[2][1] == pos::CIRCLE && positions[2][2] == pos::CIRCLE)
    {
        setPositions(7);
        return true;
    }
    else if(positions[2][0] == pos::CIRCLE && positions[2][1] == pos::NONE && positions[2][2] == pos::CIRCLE)
    {
        setPositions(8);
        return true;
    }
    else if(positions[2][0] == pos::CIRCLE && positions[2][1] == pos::CIRCLE && positions[2][2] == pos::NONE)
    {
        setPositions(9);
        return true;
    }

    //Not loose in the 1nd column
    else if(positions[0][0] == pos::NONE && positions[1][0] == pos::CIRCLE && positions[2][0] == pos::CIRCLE)
    {
        setPositions(1);
        return true;
    }
    else if(positions[0][0] == pos::CIRCLE && positions[1][0] == pos::NONE && positions[2][0] == pos::CIRCLE)
    {
        setPositions(4);
        return true;
    }
    else if(positions[0][0] == pos::CIRCLE && positions[1][0] == pos::CIRCLE && positions[2][0] == pos::NONE)
    {
        setPositions(7);
        return true;
    }

        //Not loose in the 2rd column
    else if(positions[0][1] == pos::NONE && positions[1][1] == pos::CIRCLE && positions[2][1] == pos::CIRCLE)
    {
        setPositions(2);
        return true;
    }
    else if(positions[0][1] == pos::CIRCLE && positions[1][1] == pos::NONE && positions[2][1] == pos::CIRCLE)
    {
        setPositions(5);
        return true;
    }
    else if(positions[0][1] == pos::CIRCLE && positions[1][1] == pos::CIRCLE && positions[2][1] == pos::NONE)
    {
        setPositions(8);
        return true;
    }

    //Not loose in the 3rd column
    else if(positions[0][2] == pos::NONE && positions[1][2] == pos::CIRCLE && positions[2][2] == pos::CIRCLE)
    {
        setPositions(3);
        return true;
    }
    else if(positions[0][2] == pos::CIRCLE && positions[1][2] == pos::NONE && positions[2][2] == pos::CIRCLE)
    {
        setPositions(6);
        return true;
    }
    else if(positions[0][2] == pos::CIRCLE && positions[1][2] == pos::CIRCLE && positions[2][2] == pos::NONE)
    {
        setPositions(9);
        return true;
    }

    //Not loose in the diagonal
    else if(positions[0][0] == pos::NONE && positions[1][1] == pos::CIRCLE && positions[2][2] == pos::CIRCLE)
    {
        setPositions(1);
        return true;
    }
    else if(positions[0][0] == pos::CIRCLE && positions[1][1] == pos::NONE && positions[2][2] == pos::CIRCLE)
    {
        setPositions(5);
        return true;
    }
    else if(positions[0][0] == pos::CIRCLE && positions[1][1] == pos::CIRCLE && positions[2][2] == pos::NONE)
    {
        setPositions(9);
        return true;
    }

    //Not loose in the diagonal
    else if(positions[0][2] == pos::NONE && positions[1][1] == pos::CIRCLE && positions[2][0] == pos::CIRCLE)
    {
        setPositions(3);
        return true;
    }
    else if(positions[0][2] == pos::CIRCLE && positions[1][1] == pos::NONE && positions[2][0] == pos::CIRCLE)
    {
        setPositions(5);
        return true;
    }
    else if(positions[0][2] == pos::CIRCLE && positions[1][1] == pos::CIRCLE && positions[2][0] == pos::NONE)
    {
        setPositions(7);
        return true;
    }
    return false;
}
bool vscomputer::computerPassiveMove()
{
        if(setPositions(5))
            return true;
        else if(setPositions(4))
            return true;
        else if(setPositions(6))
            return true;
        else if(setPositions(8))
            return true;
        else if(setPositions(2))
            return true;
        else if(setPositions(9))
            return true;
        else if(setPositions(1))
            return true;
        else if(setPositions(3))
            return true;
        else if(setPositions(7))
            return true;
        else
            return false;
}
void vscomputer::isSuccessful()
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
                  //test if O wins vertically
                  if(positions[0][i] == pos::CIRCLE && positions[1][i] == pos::CIRCLE && positions[2][i] == pos::CIRCLE ){
                          QMessageBox::information(this,"Match Winner", "O won");
                          QApplication::exit();

                          }
              }
        //test if O wins diagonally

        if(positions[0][0]==pos::CIRCLE && positions[1][1]==pos::CIRCLE && positions[2][2]==pos::CIRCLE){
            QMessageBox::information(this,"Match Winner", "O won");
            QApplication::exit();

            }
        if(positions[2][0]==pos::CIRCLE && positions[1][1]==pos::CIRCLE && positions[0][2]==pos::CIRCLE){
            QMessageBox::information(this,"Match Winner", "O won");
            QApplication::exit();

            }



          int draw =0;
   //loop to count the number of strokes
        for(int i=1;i<4;i++){
        for(int j=1; j<4;j++){
            if(positions[i-1][j-1] != pos::NONE){

                draw ++;
            }

        }
     }

  //test the draw match case
    if(draw == 9) {
         QMessageBox::information(this,"Draw Match", "You are equal");
          exit(0);
    }

  }
bool vscomputer::setPositions(int number)
{
    if(positions[(number-1)/ 3][(number-1) % 3] == 0)
    {
        if(turn)
            switch (number)
            {
            case 1:
                //set X on button 1
                ui->button1->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");

                positions[0][0] = pos::CROSS;
                break;
            case 2:
                //set X on button 2
                ui->button2->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");

                positions[0][1] = pos::CROSS;
                break;
            case 3:
                //set X on button 3
                ui->button3->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");

                positions[0][2] = pos::CROSS;
                break;
            case 4:
                //set X on button 4
                ui->button4->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");
                positions[1][0] = pos::CROSS;
                break;
            case 5:
                //set X on button 5
                ui->button5->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");
                positions[1][1] = pos::CROSS;
                break;
            case 6:
                //set X on button 6
                ui->button6->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");
                positions[1][2] = pos::CROSS;
                break;
            case 7:
                //set X on button 7
                ui->button7->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");
                positions[2][0] = pos::CROSS;
                break;
            case 8:
                //set X on button 8
                ui->button8->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");
                positions[2][1] = pos::CROSS;
                break;
            case 9:
                  //set X on button 9
                ui->button9->setStyleSheet("QPushButton { image :url(:/X.png);background : transparent;}");
                  positions[2][2] = pos::CROSS;
                break;
            }
        else
            switch (number)
            {
            case 1:
                //set O on button 1
                ui->button1->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");

                positions[0][0] = pos::CIRCLE;
                break;
            case 2:
                //set O on button 2
               ui->button2->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");

                positions[0][1] = pos::CIRCLE;
                break;
            case 3:
                //set O on button 3
                ui->button3->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");

                positions[0][2] = pos::CIRCLE;
                break;
            case 4:
                //set O on button 4
               ui->button4->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");

                positions[1][0] = pos::CIRCLE;
                break;
            case 5:
                //set O on button 5
               ui->button5->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");

                positions[1][1] = pos::CIRCLE;
                break;
            case 6:
                //set O on button 6

                ui->button6->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");
              positions[1][2] = pos::CIRCLE;
                break;
            case 7:
                //set O on button 7

               ui->button7->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");
                positions[2][0] = pos::CIRCLE;
                break;
            case 8:
                //set O on button 8
                ui->button8->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");
                positions[2][1] = pos::CIRCLE;
                break;
            case 9:
                //set O on button 9
                ui->button9->setStyleSheet("QPushButton { image :url(:/O.png);background : transparent;}");
                positions[2][2] = pos::CIRCLE;
                break;
            }
        turn= !turn;
        isSuccessful(); //check if there is a winner
        return true;
    }
    return false;

}
void vscomputer::computerTurn()
{
    if(computerWins() || computerNotLoosing()) return;

    else while(!computerPassiveMove()) {}
}
//slots of ther buttons that will be disabled once an X or O is placed on it and will allow the computer to play

void vscomputer::on_button1_clicked()
{
    if(setPositions(1)) computerTurn();
    ui->button1->setEnabled(false);
}

void vscomputer::on_button2_clicked()
{
    if(setPositions(2)) computerTurn();
    ui->button2->setEnabled(false);
}

void vscomputer::on_button3_clicked()
{
    if(setPositions(3)) computerTurn();
    ui->button3->setEnabled(false);
}

void vscomputer::on_button4_clicked()
{
    if(setPositions(4)) computerTurn();
    ui->button4->setEnabled(false);
}

void vscomputer::on_button5_clicked()
{
    if(setPositions(5)) computerTurn();
    ui->button5->setEnabled(false);
}

void vscomputer::on_button6_clicked()
{
    if(setPositions(6)) computerTurn();
    ui->button6->setEnabled(false);
}

void vscomputer::on_button7_clicked()
{
    if(setPositions(7)) computerTurn();
    ui->button7->setEnabled(false);
}

void vscomputer::on_button8_clicked()
{
    if(setPositions(8)) computerTurn();
    ui->button8->setEnabled(false);
}

void vscomputer::on_button9_clicked()
{
    if(setPositions(9)) computerTurn();
    ui->button9->setEnabled(false);
}



void vscomputer::on_pushButton_clicked()
{
    //to exit
    auto reply = QMessageBox::question(this,"Exit","Do you really want to exit?");

     if(reply == QMessageBox::Yes)
         qApp->exit();

}




