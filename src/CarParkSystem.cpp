#include "CarParkSystem.h"

CarParkSystem::CarParkSystem()
{
    m_welcome = new ConsoleWelcomeScreen(); //TODO: Burada factory kullanarak tipine göre bir welcome creator kullanılarak seçim yapılabilir
}

CarParkSystem::~CarParkSystem()
{
    //dtor
}

void CarParkSystem::initialize()
{
    m_welcome->InitializeWelcomeScreen();
}

void CarParkSystem::getCarLicencePlate()
{
    m_welcome->getCarLicencePlate();
    std::cout<<"Bu: "<<m_welcome->m_licencePlate<<std::endl;
}

void CarParkSystem::getUserOperationInput()
{
    m_welcome->getUserOperationInput();
    std::cout<<"Bu: "<<m_welcome->m_userInput<<std::endl;
}

