#include "gameframe.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // Load config
    // Initialise stuff


    QApplication a(argc, argv);
    GameFrame w;
    w.show();

    return a.exec();
}
