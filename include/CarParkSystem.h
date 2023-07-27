#ifndef CARPARKSYSTEM_H
#define CARPARKSYSTEM_H

#include "WelcomeScreen.h"
#include "ConsoleWelcomeScreen.h"

class CarParkSystem
{
    public:
        CarParkSystem();
        virtual ~CarParkSystem();

        void initialize();

    protected:

    private:
        WelcomeScreen* m_welcome;
};

#endif // CARPARKSYSTEM_H