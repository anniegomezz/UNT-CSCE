#ifndef POLLUTION_H
#define POLLUTION_H
#include<iostream>
#include "pollution.h"
#include "residential.h"
#include "industrial.h"
#include "commercial.h"
#include <vector>
#include <iterator>
#include <string>
using namespace std;

class Pollution{

    private:
        int currentPollution;
        int totalPollution;


    public:
        Pollution(); //default constructor
        //set and get for pollution variable
        void setPollution(int newPol);
        int getPollution();
        //set and get for total pollution variable
        void setTotalPollution(int newTotPol);
        int getTotalPollution();

        void addPollution(int morePol); //increases region pollution

        void outputPollutionRegion();


};
#endif