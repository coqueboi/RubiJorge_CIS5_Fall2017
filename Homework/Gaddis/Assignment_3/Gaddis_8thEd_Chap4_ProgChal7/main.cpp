
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 11, 2017, 10:45 PM
 * Purpose: Time Calculator
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
    int seconds; //The number of seconds
    short minutes;
    short hours;
    int days;
    
    //Variable Initialization
    cout<<"This program takes a number of seconds and converts it to minutes,"
            " hours, or days based on the size of the number entered."<<endl;
    cout<<"Please enter a number of seconds."<<endl;
    cin>> seconds;
    
    //Process Mapping - Inputs to Outputs 
    
    //Re-Display Inputs and write the Outputs
    if (seconds >= 60 && seconds < 3600)
    {   
        minutes = (seconds / 60);
        cout<<"The number of minutes in "<<seconds<<" seconds is "<<minutes<<"."<<endl;
    }
    if (seconds >= 3600 && seconds < 86400 )
    {
        hours = (seconds / 3600);
        cout<<"The number of hours in "<<seconds<<" seconds is "<<hours<<"."<<endl;
    }    
    if (seconds >= 86400);
    {
        days = (seconds / 86400);
        cout<<"The number of days in "<<seconds<<" seconds is "<<days<<"."<<endl;        
    }
    //Exit function main, end of program
    
    return 0;
}
