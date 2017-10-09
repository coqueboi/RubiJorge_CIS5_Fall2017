
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 17, 2017, 8:45 PM
 * Purpose: 
 */
//System Libraries
#include <iostream> //I/O Stream Library

using namespace std; // The standard name-space for system libraries 

//User Libraries 

//Global constants - Physics/Math/Conversions only
const float lvlRise = 1.5; //Rate, in millimeters, of which ocean level is rising per year.

//Functions Prototypes 

//Execution Begins Here!

int main() {
    //Variable Declaration
    float fiveYr; //millimeters higher in 5 years
    float sevenYr; //millimeters higher in 7 years
    float tenYr; //millimeters higher in 10 years
    
    //Variable Initialization
    fiveYr = lvlRise * 5;
    sevenYr = lvlRise * 7;
    tenYr = lvlRise * 10;
    
    //Process Mapping - Inputs to Outputs 
    
    //Re-Display Inputs and write the Outputs
    cout<<"The number of millimeters higher that the ocean's\n level will be in 5 years is: "
            <<fiveYr<<endl;
    cout<<"The number of millimeters higher that the ocean's\n level will be in 7 years is: "
            <<sevenYr<<endl;
    cout<<"The number of millimeters higher that the ocean's\n level will be in 10 years is: "
            <<tenYr<<endl;
    
    
    //Exit function main, end of program
    
    return 0;
}
