
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 17, 2017, 8:45 PM
 * Purpose: Roman Numeral Converter
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
    short numCho; //Number choice (Between 1-10)
    
    //Variable Initialization
    cout<<"This program takes a number between 1 thru 10 and converts it to Roman"
            " numerals."<<endl;
    cout<<"Please enter a number between 1 thru 10 that you would like to convert."<<endl;
    
    cin>> numCho;
    
    //Process Mapping - Inputs to Outputs 
    
    
    //Re-Display Inputs and write the Outputs
    switch (numCho)
    {
        case 1: cout<<"The Roman numeral for 1 is I"; break;
        case 2: cout<<"The Roman numeral for 2 is II"; break;
        case 3: cout<<"The Roman numeral for 3 is III"; break;
        case 4: cout<<"The Roman numeral for 4 is IV"; break;
        case 5: cout<<"The Roman numeral for 5 is V"; break;
        case 6: cout<<"The Roman numeral for 6 is VI"; break;
        case 7: cout<<"The Roman numeral for 7 is VII"; break;
        case 8: cout<<"The Roman numeral for 8 is VIII"; break;
        case 9: cout<<"The Roman numeral for 9 is VIIII"; break;
        case 10: cout<<"The Roman numeral for 10 is X"; break;
        default: cout<<"You did not enter a number between 1 and 10.";             
    }
    
    //Exit function main, end of program
    
    return 0;
}
