#ifndef GAMEFRAME_H
#define GAMEFRAME_H

#include <QMainWindow>
#include <string.h>

namespace Ui {
class GameFrame;
}

class GameFrame : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameFrame(QWidget *parent = 0);
    ~GameFrame();

private:
    Ui::GameFrame *ui;
    int toInteger(std::__cxx11::string source);
    const char* back_colour = "background-color: #000000;";

protected:
    int window_width=1000;
    int window_height=1000;
};

#endif // GAMEFRAME_H
