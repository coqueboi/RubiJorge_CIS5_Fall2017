
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 17, 2017, 9:53 PM
 * Purpose: Total Purchase 
 */
//System Libraries
#include <iostream> //I/O Stream Library

using namespace std; // The standard name-space for system libraries 

//User Libraries 

//Global constants - Physics/Math/Conversions only
const float saleTax = 0.07; //Sales Tax percentage
//Functions Prototypes 

//Execution Begins Here!

int main() {
    //Variable Declaration
    float one,two,three,four,five; //Variables for items
    float subTotl; //Total price of the sale
    float taxTotl; //Total amount of sales tax alone
    float total; //total price with sales tax applied
    //Variable Initialization
    one     = 15.95;    //in dollars
    two     = 24.95;    //""
    three   = 6.95;     //""
    four    = 12.95;    //""
    five    = 3.95;     //""
    
    subTotl = one + two + three + four + five;
    taxTotl = subTotl * saleTax;
    total   = subTotl + taxTotl;
    
    //Process Mapping - Inputs to Outputs 
    
    //Re-Display Inputs and write the Outputs
    cout<<"Items: "<<endl;
    cout<<one<<"\n"<<two<<"\n"<<three<<"\n"<<four<<"\n"<<five<<endl;
    cout<<"Subtotal: "<<subTotl<<endl;
    cout<<"Sales Tax: "<<taxTotl<<endl;
    cout<<"Total: "<<total<<endl;
    
    //Exit function main, end of program
    
    return 0;
}
