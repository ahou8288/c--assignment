#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "Singleton.h"

class UserInterface : Singleton {
public:
    // Add public methods here
    Singleton getInstance(int height, int width);
    int getInterfaceHeight();
    int getInterfaceWidth();

private:
    UserInterface();
    // Add private methods and member variables here
    int m_width;
    int m_height;
};

#endif // USERINTERFACE_H
