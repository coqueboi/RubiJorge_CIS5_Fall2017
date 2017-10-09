
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 17, 2017, 8:45 PM
 * Purpose: Annual Pay
 */
//System Libraries
#include <iostream> //I/O Stream Library

using namespace std; // The standard name-space for system libraries 

//User Libraries 

//Global constants - Physics/Math/Conversions only
const int payAmnt = 2200; //Amount of pay per pay period
const short payPer = 26; //Pay periods in a year
//Functions Prototypes 

//Execution Begins Here!

int main() {
    //Variable Declaration
    int payYear;
    
    //Variable Initialization
    
    payYear = payAmnt * payPer;
    
    //Process Mapping - Inputs to Outputs 
    
    //Re-Display Inputs and write the Outputs
    cout<<"The employee's total annual pay is $"<<payYear<<"."<<endl;
    
    
    //Exit function main, end of program
    
    return 0;
}
