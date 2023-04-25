#include<iostream>
#include "residential.h"


//default constructor definition
Residential::Residential(){
    population = 0;
    workers = 0;
    pollution = 0;
}

Residential::Residential(int population, int workers, int pollution){
    this->population = population;
    this->workers = workers;
    this->pollution = pollution;
}

//set and get for population variable definition
void Residential::setPop(int population){
    population = population;
}

int Residential::getPop(){
    return population;
}
//set and get for workers variable definition
void Residential::setWorkers(int workers){
    workers = workers;
}

int Residential::getWorkers(){
    return workers;
}

//set and get for pollution variable definition
void Residential::setPoln(int pollution){
    pollution = pollution;
}

int Residential::getPoln(){
    return pollution;
}

//increases population
void Residential::increasePop(){
    cout << "INCREASED" << endl; 
}

//printing function
void Residential::printRes(){
    cout << "PRINT" << endl; 
}