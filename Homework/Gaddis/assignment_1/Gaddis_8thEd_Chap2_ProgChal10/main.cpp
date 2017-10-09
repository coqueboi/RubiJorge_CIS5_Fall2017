
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 17, 2017, 10:28 PM
 * Purpose: Miles Per Gallon
 */
//System Libraries
#include <iostream> //I/O Stream Library

using namespace std; // The standard name-space for system libraries 

//User Libraries 

//Global constants - Physics/Math/Conversions only

//Functions Prototypes 

//Execution Begins Here!

int main() {
    //Variable Declaration
    short tank; //How much gas the car can hold
    int miles; //How many miles before refuelling
    short mpg; //Calculation for miles per gallon
    
    //Variable Initialization
    tank = 15;
    miles = 375;
    mpg = miles / tank;
    
    //Process Mapping - Inputs to Outputs 
    
    //Re-Display Inputs and write the Outputs
    cout<<"The miles per gallon a car with "<<tank<<" gallons of gas gets per "
            <<miles<<" miles is: "<<mpg<<endl;
    
    //Exit function main, end of program
    
    return 0;
}
