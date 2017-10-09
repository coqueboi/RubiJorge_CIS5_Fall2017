
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
    short op1;  //Operand 1 -32768 to 32767 = (-2^15, 2^15-1)
    short op2;  //Operand 2 -32768 to 32767 = (-2^15, 2^15-1)
    int add;    //Add the result of adding op1 and op2 -> +-2 billion (-2^31, 2^31-1)
    int product;   //Prod the result of multiplying op1 and op2 -> +-2billion 
    
    //Variable Initialization
    op1=10000; //Example of literal initialization 
    
    //Input Data/Variables 
    cout<<"This program adds and multiplies 2 variables"<<endl;
    cout<<"the first variable is initialized to 10000"<<endl;
    cout<<"Input the second value with a range of -32768 to 32767 = (-2^15, 2^15-1)"<<endl;
    cin>>op2;
    
    //Process Mapping - Inputs to Outputs 
    add = op1 + op2;
    product = op1 * op2;
    
    //Re-Display Inputs and write the Outputs
    cout<<op1<<" + "<<op2<<" = "<<add<<endl;
    cout<<op1<<" * "<<op2<<" = "<<product<<endl;
    
    //Exit function main, end of program
    
    return 0;
}

