
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 24 2017 11:14 PM
 * purpose: How Many Widgets?
 */

//System Libraries
#include <iostream> //I/O Stream Library

using namespace std; //The Standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only
const float widget = 12.5; //widget weight is 12.5 pounds

//Function Prototypes


//Execution Begins Here!


int main() {
    //Variable Declaration
    short pallet; //The weight of the pallet
    float total;  //The total weight
    float numWidg; //Number of widgets
    
    //Variable Initialization
    cout<<"This program takes the weight of a pallet of widgets and calculates "
            "the quantity of widgets on it."<<endl;
    cout<<"Please enter the total weight:"<<endl;
    cin>>total;
    cout<<"Please enter the weight of the pallet:"<<endl;
    cin>>pallet;
    
    numWidg = (total - pallet) / widget;
    
    //Process Mapping - Inputs no Outputs
    
    //User Input/Data

    //Re-Display Inputs and write the Outputs
    cout<<"the number of widgets you have is "<<numWidg<<endl;
    
    //Exit Function main, end of program
    return 0;
}

