#ifndef vscomputer_H
#define vscomputer_H


#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
namespace Ui {
class vscomputer;
}

class vscomputer : public QMainWindow
{
    Q_OBJECT

public:
    explicit vscomputer(QWidget *parent = nullptr);
    ~vscomputer();

private:
    Ui::vscomputer *ui;
    enum pos{
        CROSS = 2,
        CIRCLE = 1,
        NONE = 0
    };
    pos positions[3][3] = {{NONE, NONE, NONE}, {NONE, NONE, NONE}, {NONE, NONE, NONE}};
    bool turn = true;//indicates if it is the  player's turn
    bool setPositions(int number);//set X or O in a position
    bool computerWins();//the move of the match
    bool computerNotLoosing();//to avoid the loss of the computer
    bool computerPassiveMove();
    void isSuccessful();//Check the game winner
    void computerTurn();
private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();



    void on_pushButton_clicked();

};

#endif // vscomputer_H
