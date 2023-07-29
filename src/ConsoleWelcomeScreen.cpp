#include "ConsoleWelcomeScreen.h"

ConsoleWelcomeScreen::ConsoleWelcomeScreen()
{
    //ctor
}

ConsoleWelcomeScreen::~ConsoleWelcomeScreen()
{
    //dtor
}

void ConsoleWelcomeScreen::InitializeWelcomeScreen()
{
    cout<<printWelcomeMessage()<<endl;
    cout<<"Enter your car licence plate : ";
}

void ConsoleWelcomeScreen::getCarLicencePlate()
{
    getline(cin, m_licencePlate);
    
}

void ConsoleWelcomeScreen::getUserOperationInput()
{
    printOperationInfoMessages();
    getline(cin, m_userInput);
}
