
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 11, 2017, 10:26 PM
 * Purpose: Mass and Weight
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
    int mass; //Measured in Kilograms
    int weight; //Measured in Newtons
    
    //Variable Initialization
    cout<<"This program calculates the weight, in newtons, of "
    "an object given that you know the amount of mass of the object."<<endl;
    cout<<"To calculate the weight, please enter the mass, in kilograms,"
            "of the object."<<endl;
    cin>> mass;
    
    //Process Mapping - Inputs to Outputs 
    weight = (mass * 9.8); //Calculate weight based on mass
    
    //Re-Display Inputs and write the Outputs
    if (weight > 1000)
        cout<<"The object weighs over 1000 newtons! It is too heavy!"<<endl;
    if (weight < 10)
        cout<<"The object weights below 10 newtons! It is too light!"<<endl;
    else 
        cout<<"The weight, in newtons, of the object is "<<weight<<"."<<endl;
    
    
    //Exit function main, end of program
    
    return 0;
}
