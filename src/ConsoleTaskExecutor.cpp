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
    setfillstyle(SOLID_FILL, GREEN);
    circle(172,115,5);
    floodfill(172,115,WHITE);
    bgiout<<"1"<<endl;
    outstreamxy(170,249);
    setfillstyle(SOLID_FILL, GREEN);
    circle(311,115,5);
    floodfill(311,115,WHITE);
    bgiout<<"2"<<endl;
    outstreamxy(311,249);
    setfillstyle(SOLID_FILL, GREEN);
    circle(450,115,5);
    floodfill(450,115,WHITE);
    bgiout<<"3"<<endl;
    outstreamxy(450,249);
    setfillstyle(SOLID_FILL, GREEN);
    circle(589,115,5);
    floodfill(589,115,WHITE);
    bgiout<<"4"<<endl;
    outstreamxy(589,249);
    setfillstyle(SOLID_FILL, GREEN);
    circle(728,115,5);
    floodfill(728,115,WHITE);
    bgiout<<"5"<<endl;
    outstreamxy(728,249);

    setfillstyle(SOLID_FILL, GREEN);
    circle(172,335,5);
    floodfill(172,335,WHITE);
    bgiout<<6<<endl;
    outstreamxy(170,469);
    setfillstyle(SOLID_FILL, GREEN);
    circle(311,335,5);
    floodfill(311,335,WHITE);
    bgiout<<"7"<<endl;
    outstreamxy(311,469);
    setfillstyle(SOLID_FILL, GREEN);
    circle(450,335,5);
    floodfill(450,335,WHITE);
    bgiout<<"8"<<endl;
    outstreamxy(450,469);
    setfillstyle(SOLID_FILL, GREEN);
    circle(589,335,5);
    floodfill(589,335,WHITE);
    bgiout<<"9"<<endl;
    outstreamxy(589,469);
    setfillstyle(SOLID_FILL, GREEN);
    circle(728,335,5);
    floodfill(728,335,WHITE);
    bgiout<<"10"<<endl;
    outstreamxy(728,469);
}

void ConsoleTaskExecutor::drawParkAreas()
{
    //First area
    line(105,105,239,105);
    line(239,105,239,275);
    line(239,275,105,275);
    line(105,105,105,275);

    //Second Area
    line(244,105,378,105);
    line(378,105,378,275);
    line(378,275,244,275);
    line(244,105,244,275);

    //Third Area
    line(383,105,517,105);
    line(517,105,517,275);
    line(517,275,383,275);
    line(383,105,383,275);

    //Fourth Area
    line(522,105,656,105);
    line(656,105,656,275);
    line(656,275,522,275);
    line(522,105,522,275);

    //Fifth Area
    line(661,105,795,105);
    line(795,105,795,275);
    line(795,275,661,275);
    line(661,105,661,275);

    //Sixth area
    line(105,325,239,325);
    line(239,325,239,495);
    line(239,495,105,495);
    line(105,325,105,495);

    //Seventh Area
    line(244,325,378,325);
    line(378,325,378,495);
    line(378,495,244,495);
    line(244,325,244,495);

    //Eighth Area
    line(383,325,517,325);
    line(517,325,517,495);
    line(517,495,383,495);
    line(383,325,383,495);

    //Ninth Area
    line(522,325,656,325);
    line(656,325,656,495);
    line(656,495,522,495);
    line(522,325,522,495);

    //Tenth Area
    line(661,325,795,325);
    line(795,325,795,495);
    line(795,495,661,495);
    line(661,325,661,495);




}

void ConsoleTaskExecutor::showCarParkMap()
{
    std::cout<<"showCarParkAMp secildi.";
    initwindow(900,600);
    bgiout<<"CAR PARK MAP"<<endl; //Total 12 char. so to be central do calculation 450 - 12/2
    outstreamxy(400,50);

    ConsoleTaskExecutor::drawLines();
    ConsoleTaskExecutor::drawParkAreas();
    ConsoleTaskExecutor::drawParkSensors();




    line(100,100,800,100);

    getch();
    //system("COLOR 9F");


}

void ConsoleTaskExecutor::showStatistics()
{
    std::cout<<"showStatistics secildi.";
}
