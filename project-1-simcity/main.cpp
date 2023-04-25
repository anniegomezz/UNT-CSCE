#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <any>
#include <variant>
#include "residential.h"
#include "industrial.h"
#include "commercial.h"
#include "road.h"
#include "powerroad.h"
#include "powerplant.h"
#include "powerline.h"
#include "pollution.h"




using namespace std;


int main()
{
//variables
    int totalPopulation = 0;
    int totalPollution = 0;

//FILE HANDLING HERE:
    int timeStep;
    int refreshRate;
    string region;
    string filename;
    ifstream config;

    //user-input for file name
    cout<<"Please enter name of config file: ";
    cin>>filename;

    config.open(filename); //open user-specified file
    while(config)
    {
        string extraLine;
        getline(config,extraLine,':');

        //READ IN REGION NAME:
        config>>region;
        cout<<extraLine<<": "<<region<<endl;
        config.ignore();

        //READ IN TIMESTEP
        getline(config,extraLine,':');
        config>>timeStep;
        cout<<extraLine<<": "<<timeStep<<endl;
        config.ignore();

        //READ IN REFRESH RATE
        getline(config,extraLine,':');
        config>>refreshRate;
        cout<<extraLine<<": "<<refreshRate<<endl;
        config.ignore();
        
    }
        config.close(); //close file
//end of config file read-in

//opens region csv file here:
ifstream initialRegion;
initialRegion.open(region); //opens files

//getting inital size of region
int lineCounter;
string line;
while(initialRegion.good())
{
    getline(initialRegion,line);
    lineCounter++; //counts number of lines in file (rows in region)
}
initialRegion.close(); //closes file


//storing data elements into the vector
initialRegion.open(region); //reopen to start at beginning of file again
//declaring data structure
vector<vector<char> > regionArr; //creates 2d char vector to hold region

//in file adding elements into vector regionArr
while(initialRegion.good())
{
        getline(initialRegion,line,',');
        vector<char> vecRow;
        vecRow.assign(line.begin(),line.end());
        regionArr.push_back(vecRow);
}
//printing initial region
for (const auto& lineCounter : regionArr)
{
    for (auto i : lineCounter)
    {
        cout << i << ' ';
    }
}
cout << endl;


//printing out the size of the 2d vector
//total number of elements in outer vector
int totalElements = regionArr.size();
cout << "Total Zones in Region: " << totalElements << endl;

//parsing through and printing out region
// for (auto i = 0; i != regionArr.size(); ++i)
//     {
//         cout << "Numbers in Element: " << i << endl;
//         for (auto j = 0; j != regionArr[i].size(); ++j){
//             cout << regionArr[i][j] << " ";
//         }
//         cout << endl;
//     }

int colCount = 0;
//number of rows
cout << "Rows: " << lineCounter << endl;
//number of columns
int numCols = totalElements/lineCounter;
cout << "Columns: " << numCols << endl;
cout << "Total population: " << totalPopulation << endl;
cout << "Total pollution: " << totalPollution << endl;
initialRegion.close(); //closes initial region file


//region manipulation
initialRegion.open(region); //re-open file 

//2D-Vector variant to hold every type of object in our region simulation
//vector<vector<variant<Residential, Industrial, Commercial, Road, Powerroad, Powerplant, Powerline, Pollution> > >simCity(lineCounter);
//2D-Vector to hold zoneType characters for each
vector<vector<string> > zoneType(lineCounter);
//vector to hold current row vector in 2D-Vector
vector<string> row;


/*

while(getline(region, line)){
    //push back character for each zone into zoneType 2D vector
}

for(int i = 0; i < timeStep; i++)
    if(timeStep % refreshRate == 0){
        cout << "Total population: " << totalPopulation << endl;
        cout << "Total pollution: " << totalPollution << endl;

    }

bool change = true; //holds boolean variable that acts as "switch" to track that changes occured between each timeStep

while(timeStep > 0 || change = true){ //continues to simulate growth while time limit hasn't been exceeded or while there are still changes between timeSteps
    bool cont = true; //boolean to continue switch case executijon
    char zoneType; //holds option character for switch case

//iterate through 2D zoneType vector in order to push current zone into respective cell in 2D simCity 2D vector
switch(zoneType){
    case 'R':{
        //push Residential zone object to simCity 2D vector
    }

    case 'I':{
        //push Industrial zone object to simCity 2D vector
    }

    case 'C':{
        //push Commercial zone object to simCity 2D vector

    }

    case '-':{
        //push Road object to simCity 2D vector
    }

    case 'T':{
        //push Powerline object to simCity 2D vector
    }

    case '#':{
        //push Powerroad (power line over road) object to simCity 2D vector
    }

    case'P':{
        //push Powerplant object to simCity 2D vector
    }

    default:{
        //default case
    }

}   //end of switch case 


//actual growth simulation
char zoneTypeChange;
switch(zoneTypeChange){
    //based on zoneType, apply changes
}

timeStep--; //de-increments timeStep to move onto next timeStep
} //end of while loop
*/

    return 0;
}