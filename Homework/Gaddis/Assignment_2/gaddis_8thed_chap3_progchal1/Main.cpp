
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * * Created on September 24, 2017 4:13 PM
 * purpose: Miles Per Gallon
 */

//System Libraries
#include <iostream> //I/O Stream Library

using namespace std; //The Standard namespace for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!

int main() {
    //Variable Declaration
    float mpg; //Miles per gallon
    float fullTnk; //capacity of a full tank
    float maxMile; //amount you can travel on a full tank
    
    //Variable Initialization
    cout<<"This program will calculate a car's gas mileage."<<endl;
    cout<<"\nPlease input the number of gallons your tank can hold."<<endl;
    cin>>fullTnk;
    cout<<"Next, input the number of miles possible on a full tank."<<endl;
    cin>>maxMile;
            
    //Process Mapping - Inputs to Outputs
    mpg = maxMile / fullTnk;
    
    //Re-display inputs and write the Outputs
    cout<<"Your car gets "<<mpg<<" Miles per Gallon"<<endl;
    
    //Exit function main, end of program
    return 0;
}

