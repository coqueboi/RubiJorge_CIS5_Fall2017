
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on August 28, 2017, 9:49 AM
 * Purpose: First Program
 */
//System Libraries
#include <iostream> //I/O Stream Library

using namespace std; // The standard name-space for system libraries 

//User Libraries 

//Global constants - Physics/Math/Conversions only

//Functions Prototypes 

//Execution Begins Here!

int main(int argc, char** argv) {
    //Variable Declaration
    short gasTank; //Number of Gallons to fill Tank
    short milesDriven; //Miles driven on a tank of Gas
    short mpg; //Miles Per Gallon
    
    //Variable Initialization
    cout<<"This program calculates miles per gallon"<<endl;
    cout<<"Input the number of gallons your tank can hold"<<endl;
    cin>>gasTank;
    cout<<"Input the miles driven until empty"<<endl;
    cin>>milesDriven;
    
    //Process Mapping - Inputs to Outputs 
    mpg = milesDriven/gasTank;
    
    //Re-Display Inputs and write the Outputs
    cout<<mpg<<" mpg = "<<milesDriven<<" miles / "<<gasTank<<" Gallons"<<endl;
    
    //Exit function main, end of program
    
    return 0;
}
