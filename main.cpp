#include <iostream>
#include "ConsoleWelcomeScreen.h"
#include "CarParkSystem.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    //TODO: Atfer write a welcome screen factory. It may be needed.

    CarParkSystem m_carParkSystem;

    m_carParkSystem.initialize();
    m_carParkSystem.getCarLicencePlate();
    m_carParkSystem.getUserOperationInput();

    

    return 0;
}
