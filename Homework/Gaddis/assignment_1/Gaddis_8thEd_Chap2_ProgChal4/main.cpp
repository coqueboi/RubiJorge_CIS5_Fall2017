
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 17, 2017, 6:13 PM
 * Purpose: Restaurant Bill
 */
//System Libraries
#include <iostream> //I/O Stream Library

using namespace std; // The standard name-space for system libraries 

//User Libraries 

//Global constants - Physics/Math/Conversions only
const float percTax = 0.0675; //percent of tax on meal charge
const float percTip = 0.20; //percent of tip on meal charge

//Functions Prototypes 

//Execution Begins Here!

int main() {
    //Variable Declaration
    float mealCst; //Restaurant bill cost in dollars
    float mealTax; //Tax amount on meal
    float mealTip; //Tip amount on meal
    float mealTtl; //Total meal cost 
    
    //Variable Initialization
    mealCst = 88.67; //In Dollars
    mealTax = percTax * mealCst; //Calculate meal tax alone
    mealTip = percTip * (mealCst + mealTax); //Calculate meal tip alone
    mealTtl = mealCst + mealTax + mealTip; //Calculate Total
    
    //Process Mapping - Inputs to Outputs 
    
    //Re-Display Inputs and write the Outputs
    cout<<"------Receipt------"<<endl;
    cout<<"Cost of meal: $"<<mealCst<<endl;
    cout<<"Tax: $"<<mealTax<<endl;
    cout<<"Tip: $"<<mealTip<<endl;
    cout<<"Total: $"<<mealTtl<<endl;
    
    //Exit function main, end of program
    
    return 0;
}
