#ifndef INDUSTRIAL_H
#define INDUSTRIAL_H
#include <iostream>
using namespace std;

class Industrial{
    private:
        int population;
        int workers;
        int pollution;
        bool adjPow;

    public:
        Industrial();
        Industrial(int population, int workers, int pollution, bool adjPow);
        int getPop();
        void setPop(int population);
        int getWorkers();
        void setWorkers(int workers);
        int getPoln();
        void setPoln(int pollution);
        void setAdjPow(bool adjPow);
        bool getAdjPow();
        void printInd();

};
#endif