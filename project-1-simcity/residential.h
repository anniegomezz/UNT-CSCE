#ifndef RESIDENTIAL_H
#define RESIDENTIAL_H
#include<iostream>
using namespace std;

class Residential{

    private:
        int population;
        int workers;
        int pollution;

    public:
        Residential(); //default constructor
        Residential(int population, int workers, int pollution); //parameterized constructor
        int getPop();
        void setPop(int population);
        int getWorkers();
        void setWorkers(int workers);
        int getPoln();
        void setPoln(int pollution);
        void increasePop();
        void printRes();
};
#endif