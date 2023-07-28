#ifndef WELCOMESCREEN_H
#define WELCOMESCREEN_H

#include <string>
#include <iostream>

class WelcomeScreen
{
    public:
        WelcomeScreen();
        virtual ~WelcomeScreen();

        virtual void InitializeWelcomeScreen () = 0;

        virtual void getCarLicencePlate () = 0;

        virtual void getUserOperationInput() = 0;

        std::string m_licencePlate;

        std::string m_userInput;

        std::string printWelcomeMessage()
        {
            return "Welcome to the Car Park System!!";
        } 

        void printOperationInfoMessages();

    protected:

    private:
};

#endif // WELCOMESCREEN_H
