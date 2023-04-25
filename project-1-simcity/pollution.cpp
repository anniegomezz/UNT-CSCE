#include<iostream>
#include "pollution.h"
#include "residential.h"
#include "industrial.h"
#include "commercial.h"
#include <vector>
#include <iterator>
#include <string>

//default constructor definition
Pollution::Pollution(){
    currentPollution = 0;
    totalPollution = 0;
}

//set and get for pollution variable definition
void Pollution::setPollution(int newPol){
    currentPollution = newPol;
}

int Pollution::getPollution(){
    return currentPollution;
}
//set and get for total pollution variable
void Pollution::setTotalPollution(int newTotPol){
    totalPollution = newTotPol;
}

int Pollution::getTotalPollution(){
    return totalPollution;
}

//addPollution function definition
void Pollution::addPollution(int morePol){ //TO-DO, FINISH FUNCTION DEFINITION
    cout << "placeholder" << endl;
}

//outputPollutionRegion definition
void Pollution::outputPollutionRegion(){
    cout << "placeholder" << endl; //TO-DO, FINISH FUNCTION DEFINITION
}
