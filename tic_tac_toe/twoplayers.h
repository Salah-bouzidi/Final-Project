#ifndef TWOPLAYERS_H
#define TWOPLAYERS_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class twoplayers;
}

class twoplayers : public QMainWindow
{
    Q_OBJECT

public:
    explicit twoplayers(QWidget *parent = nullptr);
    ~twoplayers();
private:
    Ui::twoplayers *ui;
    enum pos{
        CROSS = 2,
        CIRCLE = 1,
        NONE = 0
    };
    pos positions[3][3] = {{NONE, NONE, NONE}, {NONE, NONE, NONE}, {NONE, NONE, NONE}};
    bool turn = true;//indicates if it is the  player's turn
    void is_successful();//Check the game winner
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

#endif // TWOPLAYERS_H
