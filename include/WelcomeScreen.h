#ifndef WELCOMESCREEN_H
#define WELCOMESCREEN_H

#include <string.h>
#include <iostream>

class WelcomeScreen
{
    public:
        WelcomeScreen();
        virtual ~WelcomeScreen();

        virtual void InitializeWelcomeScreen () = 0;

        std::string printWelcomeMessage()
        {
            return "Welcome to the Car Park System!!";
        }

    protected:

    private:
};

#endif // WELCOMESCREEN_H
