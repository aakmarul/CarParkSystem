#include <iostream>
#include "ConsoleWelcomeScreen.h"
#include "CarParkSystem.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    //TODO: Atfer write a welcome screen factory. It may be needed.

    CarParkSystem m_carParkSystem;
    std::string userInput;

    m_carParkSystem.initialize();
    m_carParkSystem.getCarLicencePlate();
    m_carParkSystem.getUserOperationInput();

    userInput = m_carParkSystem.getUserInput();

    if(userInput == "1") //Show the map
    {
        m_carParkSystem.showMap();
    }
    else if(userInput == "2") //Show the statistics
    {
        m_carParkSystem.showParkStatistics();
    }
    else
    {

    }
    

    return 0;
}
