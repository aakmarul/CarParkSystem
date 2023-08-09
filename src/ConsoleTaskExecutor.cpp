#include "ConsoleTaskExecutor.h"

ConsoleTaskExecutor::ConsoleTaskExecutor()
{
    //ctor
}

ConsoleTaskExecutor::~ConsoleTaskExecutor()
{
    //dtor
}

void ConsoleTaskExecutor::drawLines()
{
    line(100,100,800,100);
    line(800,100,800,500);
    line(100,100,100,500);
    line(100,500,800,500);
}

void ConsoleTaskExecutor::drawParkSensors()
{
    circle(170,120,6);
}

void ConsoleTaskExecutor::showCarParkMap()
{
    std::cout<<"showCarParkAMp secildi.";
    initwindow(900,600);
    bgiout<<"CAR PARK MAP"<<endl; //Total 12 char. so to be central do calculation 450 - 12/2
    outstreamxy(400,50);

    ConsoleTaskExecutor::drawLines();
    ConsoleTaskExecutor::drawParkSensors();




    line(100,100,800,100);

    getch();
    //system("COLOR 9F");


}

void ConsoleTaskExecutor::showStatistics()
{
    std::cout<<"showStatistics secildi.";
}
