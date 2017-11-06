
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 29, 2017, 1:45 PM
 * Purpose: Midterm Problem 5
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
    float hours;
    float payRate,grsPay;
    
    //Input / Variable Initialization
    cout<<"This program calculates an employee's gross pay."<<endl;
    cout<<"Please enter the amount of hours worked: ";
    cin>>hours;
    cin.ignore();
    cout<<"Please enter the employee's rate of pay per hour: ";
    cin>>payRate;
    
    //Process / Calculations
    if(hours<=40){
        grsPay = (hours*payRate);
    }
    if(hours>40 && hours<=50){
        grsPay = ((40*payRate)+(((hours-40) * 1.5)*payRate));
    }
    if(hours>50){
        grsPay = ((40*payRate)+((10*payRate) * 1.5)+
                (((hours-50) * 2) * payRate));
    }
    
    //Output
    cout<<"This employee's gross pay is: "<<grsPay<<endl;
    
    //Exit function main, end of program
    
    return 0;
}
