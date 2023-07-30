#ifndef CARPARKSYSTEM_H
#define CARPARKSYSTEM_H

#include "WelcomeScreen.h"
#include "ConsoleWelcomeScreen.h"
#include "ConsoleTaskExecutor.h"

class CarParkSystem
{
    public:
        CarParkSystem();
        virtual ~CarParkSystem();

        void initialize();

        void getCarLicencePlate();

        void getUserOperationInput();

        void showMap();

        void showParkStatistics();

        std::string getUserInput();

    protected:

    private:
        WelcomeScreen* m_welcome;
        Task* m_task;
};

#endif // CARPARKSYSTEM_H
