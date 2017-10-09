
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 17, 2017, 5:01 PM
 * Purpose: Sales Tax
 */
//System Libraries
#include <iostream> //I/O Stream Library

using namespace std; // The standard name-space for system libraries 

//User Libraries 

//Global constants - Physics/Math/Conversions only
const float statTax = 0.04; // State Tax
const float countTax = 0.02; // County Tax
//Functions Prototypes 

//Execution Begins Here!

int main() {
    //Variable Declaration
    int purchase; //Purchase amount in $'s
    float total; //Total Purchase with Sales Tax
    float ttlTax; //Total Sales Tax without Purchase amount
    
    //Variable Initialization
    
    //Initial Purchase
    purchase = 95;
    
    //Calculation for Total Purchase WITH Sales Tax
    total = purchase + (purchase * statTax) + (purchase * countTax);
    
    //Calculation to find the total Sales Tax alone
    ttlTax = total - purchase;
    
    //Process Mapping - Inputs to Outputs 
    
    //Re-Display Inputs and write the Outputs
    cout<<"The total cost, with tax, of a "<<purchase<<" dollar purchase \n" 
            "would be $"<<total<<
            "\nTherefore, the total Sales Tax "
            "would be $"<<ttlTax<<endl;
   
    //Exit function main, end of program
    
    return 0;
}

