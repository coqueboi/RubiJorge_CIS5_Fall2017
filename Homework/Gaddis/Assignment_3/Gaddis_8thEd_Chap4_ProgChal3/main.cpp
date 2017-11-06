
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 11, 2017, 8:45 PM
 * Purpose: Magic Dates
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
    short month; //Numeric form of date
    short day;  //""
    short year; //Two-digit year
    
    //Variable Initialization
    cout<<"This program takes the month, day, and year of a date and calculates "
            "whether or not the date is a magic date.\n"<<endl;
    cout<<"To begin, please enter the numeric form of the month of the date."<<endl;
    cin>> month;
    cout<<"\nNext, please enter the numeric form of the day of the date."<<endl;
    cin>> day;
    cout<<"Finally, please enter the two-digit numeric form of the year of the date."<<endl;
    cin>> year;
    
    //Process Mapping - Inputs to Outputs
    
    //Re-Display Inputs and write the Outputs
    if ((month * day) == year) //Check for "Magic Date"
        cout<<"Congratulations! This date is a magic date!\n"
        "The month times the day is equal to the year!"<<endl;
    else
        cout<<"Sorry, this date is not magic.\n"
        "The month times the day is not equal to the year."<<endl;
    
    //Exit function main, end of program
    
    return 0;
}
