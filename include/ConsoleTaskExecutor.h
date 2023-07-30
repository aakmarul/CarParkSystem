#ifndef CONSOLETASKEXECUTOR_H
#define CONSOLETASKEXECUTOR_H

#include "Task.h"
#include <iostream>

class ConsoleTaskExecutor : public Task
{
    public:
        ConsoleTaskExecutor();
        virtual ~ConsoleTaskExecutor();

        virtual void showCarParkMap();

        virtual void showStatistics();

    protected:

    private:
};

#endif // CONSOLETASKEXECUTOR_H
