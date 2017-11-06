
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 29, 2017, 5:07 PM
 * Purpose: Midterm Problem 4
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
    char package;
    unsigned short hours;
    float total,pk1chrg,pk2chrg,pk3chrg;
    
    //Input / Variable Initialization
    cout<<"This program offers the user a choice of 3 different ISP "
            "subscription packages."<<endl;
    cout<<"It also calculates which package is best for you based on "
            "the amount of hours you spend using the internet. "<<endl;
    cout<<"In doing so, the program calculates the user's monthly ISP "
            "bill."<<endl;
    cout<<endl;
    
    //Process / Calculations
    cout<<"Here are the packages offered by your ISP: "<<endl;
    cout<<"Package 1:\n$16.75 per month, 5 hours access. Additional hours "
	    "are $0.85 up to 20 hours then $1 for all additional "
	    "hours."<<endl;
    cout<<endl;
    cout<<"Package 2:\n$23.75 per month, 15 hours access. Additional hours "
            "are $0.65 up to 25 hours then $0.75 for each "
	    "hour above this limit."<<endl;
    cout<<endl;
    cout<<"Package 3:\n$29.95 per month unlimited access"<<endl;
    cout<<endl;
    cout<<"Please enter the number of the package you would like: ";
    cin>>package;
    cin.ignore();
    cout<<"Next, please enter the amount of hours you spend on the "
            "internet per month: ";
    cin>>hours;
    cin.ignore();
    
    pk1chrg = 16.75;
    pk2chrg = 23.75;
    pk3chrg = 29.95;
    
    if(package=='1'){
        if(hours<=5){
            total += pk1chrg;
        }
        if((hours > 5) && (hours <= 20)){
            total += pk1chrg;
            total += ((hours-5)*0.85);
        }
        if(hours > 20){
            total += pk1chrg;
            total += (15*0.85);
            total += ((hours-20)*1.0);
        }
    }
    if(package=='2'){
        if(hours<=15){
            total += pk2chrg;
        }
        if((hours > 15) && (hours <= 25)){
            total += pk2chrg;
            total += ((hours-15)*0.65);
        }
        if(hours > 25){
            total += pk2chrg;
            total += ((hours-10)*0.65);
            total += ((hours-25)*0.75);
        }
    }
    if(package=='3'){
        total += pk3chrg;
    }
    //Output
    cout<<endl;
    cout<<"Your total for the selected package is: "<<total<<endl;
    
    //Exit function main, end of program
    
    return 0;
}
