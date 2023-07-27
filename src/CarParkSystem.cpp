#include "CarParkSystem.h"

CarParkSystem::CarParkSystem()
{

}

CarParkSystem::~CarParkSystem()
{
    //dtor
}

void CarParkSystem::initialize()
{
    m_welcome = new ConsoleWelcomeScreen();
    m_welcome->InitializeWelcomeScreen();
}
