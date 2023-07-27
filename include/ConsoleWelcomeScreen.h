#ifndef CONSOLEWELCOMESCREEN_H
#define CONSOLEWELCOMESCREEN_H

#include "WelcomeScreen.h"
#include <iostream>

using namespace std;

class ConsoleWelcomeScreen : public WelcomeScreen
{
    public:
        ConsoleWelcomeScreen();
        virtual ~ConsoleWelcomeScreen();

        virtual void InitializeWelcomeScreen();

    protected:

    private:
};

#endif // CONSOLEWELCOMESCREEN_H
