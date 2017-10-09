
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 17, 2017, 7:46 PM
 * Purpose: Average of Values
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
    short a,b,c,d,e,sum;
    float average; 
    //Variable Initialization
    a = 28;
    b = 32;
    c = 37;
    d = 24;
    e = 33;
    
    sum = a + b + c + d + e;
    average = sum / 5;
    
    //Process Mapping - Inputs to Outputs 
    
    //Re-Display Inputs and write the Outputs
    cout<<"The average of "<<a<<", "<<b<<", "<<c<<", "
            <<d<<", and "<<e<<" is "<<average<<endl;
    
    //Exit function main, end of program
    
    return 0;
}
