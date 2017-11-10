#include <QCoreApplication>
#include <iostream>
#include <time.h>

int main(int argc, char *argv[])
{
    Time time(8, 14, 23);
    std::cout << time.getTimeAsString() << std::endl;

    QCoreApplication a(argc, argv);

    return a.exec();

}
