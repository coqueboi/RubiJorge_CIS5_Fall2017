
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 11, 2017, 11:35 PM
 * Purpose: Change for a Dollar Game
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
    short pennies,nickels,dimes,quartrs; //Hold the user's input
    short total; //Value after calculation
    //Variable Initialization
    cout<<"This program allows the user to try and guess the combined "
            "number of coins required to make exactly one dollar."<<endl;
    cout<<"To begin, enter a number of pennies."<<endl;
    cin>>pennies;
    cout<<"Next, enter a number of nickels."<<endl;
    cin>>nickels;
    cout<<"Next, enter a number of dimes."<<endl;
    cin>>dimes;
    cout<<"Finally, enter a number of quarters."<<endl;
    cin>>quartrs;
    
    //Process Mapping - Inputs to Outputs 
    total = (pennies * 1) + (nickels * 5) + (dimes * 10)
            + (quartrs * 25);
    
    //Re-Display Inputs and write the Outputs
    if (total / 100 == 1)
    {
        cout<<"Congratulations! Your guess added up to exactly one dollar!"<<endl;
        cout<<"You've won!"<<endl;
    }    
    if (total < 99)
    {
        cout<<"Sorry, your guess was less than a dollar."<<endl;
    }
    if (total > 100)
    {
        cout<<"Sorry, your guess was greater than a dollar."<<endl;
    }
    //Exit function main, end of program
    
    return 0;
}
