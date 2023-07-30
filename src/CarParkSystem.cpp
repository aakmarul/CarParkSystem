#include "CarParkSystem.h"

CarParkSystem::CarParkSystem()
{
    m_welcome = new ConsoleWelcomeScreen(); //TODO: Burada factory kullanarak tipine göre bir welcome creator kullanılarak seçim yapılabilir
    m_task = new ConsoleTaskExecutor();
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
}

void CarParkSystem::getUserOperationInput()
{
    m_welcome->getUserOperationInput();
    std::cout<<"Bu: "<<m_welcome->m_userInput<<std::endl;
}

std::string CarParkSystem::getUserInput()
{
    return m_welcome->getUserInput();
}

void CarParkSystem::showMap()
{
    m_task->showCarParkMap();
}

void CarParkSystem::showParkStatistics()
{
    m_task->showStatistics();
}

