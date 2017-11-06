
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 20, 2017, 8:30 PM
 * Purpose: 
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
    int input; //Placeholder for value entered by user
    int num; //Placeholder for calculating
    int sum; //Resulting sum
    
    //Variable Initialization
    num = 1; //Starting value for counting
    
    cout<<"This program asks for a positive integer and then calculates the sum "
            "of all the numbers from 1 to the number entered by the user."
            <<endl;
    cout<<"Please enter any positive integer."<<endl;
    cin>>input;
    for (input = num; num <= input; num++)
        sum = (num + num);
    cout<<"The sum is "<<sum<<endl;
    
    //Process Mapping - Inputs to Outputs 
    
    //Re-Display Inputs and write the Outputs
    
    
    //Exit function main, end of program
    
    return 0;
}
