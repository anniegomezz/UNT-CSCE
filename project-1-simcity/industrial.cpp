#include <iostream>
#include "industrial.h"

//default constructor definition
Industrial::Industrial(){
    population = 0;
    workers = 0;
    pollution = 0;
    adjPow = false;
}

Industrial::Industrial(int population, int workers, int pollution, bool adjPow){
    this->population = population;
    this->workers = workers;
    this->pollution = pollution;
    this->adjPow = adjPow;
}

//set and get for population variable definition
void Industrial::setPop(int population){
    population = population;
}

int Industrial::getPop(){
    return population;
}

//set and get for workers variable definition
void Industrial::setWorkers(int workers){
    workers = workers;
}

int Industrial::getWorkers(){
    return workers;
}

//set and get for pollution variable definition
void Industrial::setPoln(int pollution){
    pollution = pollution;
}

int Industrial::getPoln(){
    return pollution;
}

//set and get for adjacent to power line boolean variable
void Industrial::setAdjPow(bool adjPow){
    adjPow = adjPow;
}

bool Industrial::getAdjPow(){
    return adjPow;
}

//print function
void Industrial::printInd(){
    cout << "PRINT" << endl;
}
