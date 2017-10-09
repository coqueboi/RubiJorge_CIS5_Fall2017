
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 24, 2017, 10:45 PM
 * Purpose: How many calories?
 */
//System Libraries
#include <iostream> //I/O Stream Library

using namespace std; // The standard name-space for system libraries 

//User Libraries 

//Global constants - Physics/Math/Conversions only
int cookieC = 100; //Cookie calories per cookie

//Functions Prototypes 

//Execution Begins Here!

int main() {
    //Variable Declaration
    int cookEat; //Number of cookies eaten
    int calEat; //Number of calories eaten/consumed
    //Variable Initialization
    cout<<"This program calculates how many calories were \n"
            "consumed based on cookies eaten."<<endl;
    cout<<"\nPlease input how many cookies you have eaten."<<endl;
    cin>>cookEat;
    
    calEat = cookieC * cookEat;
    
    //Process Mapping - Inputs to Outputs 
    
    //Re-Display Inputs and write the Outputs
    cout<<"\nBased on "<<cookEat<<" cookies eaten, \n"
            "the total amount of calories consumed would be "<<calEat<<endl;
    
    //Exit function main, end of program
    
    return 0;
}
