#include "ConsoleTaskExecutor.h"

ConsoleTaskExecutor::ConsoleTaskExecutor()
{
    //ctor
}

ConsoleTaskExecutor::~ConsoleTaskExecutor()
{
    //dtor
}

void ConsoleTaskExecutor::showCarParkMap()
{
    std::cout<<"showCarParkAMp secildi.";
    initwindow(900,600);
    bgiout<<"Hello World"<<endl;
    outstreamxy(100,100);   

    getch();
    //system("COLOR 9F");
}

void ConsoleTaskExecutor::showStatistics()
{
    std::cout<<"showStatistics secildi.";
}
