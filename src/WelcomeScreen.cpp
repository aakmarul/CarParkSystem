#include "WelcomeScreen.h"

WelcomeScreen::WelcomeScreen()
{
    //ctor
}

WelcomeScreen::~WelcomeScreen()
{
    //dtor
}

void WelcomeScreen::printOperationInfoMessages()
{
    std::cout<<"Please choose your operation!"<<std::endl;
    std::cout<<"Press 1 for Show the Map"<<std::endl;
    std::cout<<"Press 2 for Show the Statistics"<<std::endl;
    std::cout<<">> ";
}
