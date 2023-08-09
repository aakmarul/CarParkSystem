#ifndef CONSOLETASKEXECUTOR_H
#define CONSOLETASKEXECUTOR_H

#include "Task.h"
#include <iostream>
#include "graphics.h"

using namespace std;

class ConsoleTaskExecutor : public Task
{
    public:
        ConsoleTaskExecutor();
        virtual ~ConsoleTaskExecutor();

        virtual void showCarParkMap();

        virtual void showStatistics();

        void drawLines();

        void drawParkSensors();

    protected:

    private:
};

#endif // CONSOLETASKEXECUTOR_H
