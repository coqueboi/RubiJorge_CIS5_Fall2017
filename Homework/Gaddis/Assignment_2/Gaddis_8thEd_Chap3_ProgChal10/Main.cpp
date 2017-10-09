
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 24, 2017 11:44
 * purpose: How Much Insurance?
 */

//System Libraries
#include <iostream> //I/O Stream Library
using namespace std; //The Standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!


int main() {
    //Variable Declaration
    float house; //The total cost for house
    float insur; //The total amount of money needed to pay the insurance.
    float percnt = 0.8; //The percentage needed to insure the house
    
    //Variable Initialization
    cout<<"This program will calculate the minimum amount of money needed to "
            "finance a house"<<endl;
    cout<<"\nPlease enter the cost to rebuild your house."<<endl;
    cin>>house;
    
    insur = house * percnt;
   
    //Process Mapping - Inputs no Outputs
    
    //User Input/Data
    
    //Re-Display Inputs and write the Outputs
    cout<<"the total amount of money needed to insure your house is "
    <<insur<<" dollars."<<endl;
    
    //Exit Function main, end of program
    return 0;
}

