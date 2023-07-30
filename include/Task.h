#ifndef TASK_H
#define TASK_H


class Task
{
    public:
        Task();
        virtual ~Task();

        virtual void showCarParkMap() = 0;

        virtual void showStatistics () = 0;

    protected:

    private:
};

#endif // TASK_H
