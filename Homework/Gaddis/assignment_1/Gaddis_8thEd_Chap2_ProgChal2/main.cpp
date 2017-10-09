
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 17, 2017, 1:14 AM
 * Purpose: Sales Prediction
 */
//System Libraries
#include <iostream> //I/O Stream Library

using namespace std; // The standard name-space for system libraries 

//User Libraries 

//Global constants - Physics/Math/Conversions only
const float TSP = 0.58; //Total Sales Percentage 
//Functions Prototypes 

//Execution Begins Here!

int main(int argc, char** argv) {
    //Variable Declaration
    float ttlSale, ecdSale; //Total Sale and East Coast Division Sales
    
    //Variable Initialization
    ttlSale = 8.6; //Million Dollars In Sales
    ecdSale = ttlSale * TSP; //Estimated Coast Division 
    
    //Process Mapping - Inputs to Outputs 
    
    //Re-Display Inputs and write the Outputs
    cout<<"The estimated total sales for the East Coast Devision was "
            <<ecdSale<<" million dollars"<<endl;
   
    //Exit function main, end of program
    
    return 0;
}

