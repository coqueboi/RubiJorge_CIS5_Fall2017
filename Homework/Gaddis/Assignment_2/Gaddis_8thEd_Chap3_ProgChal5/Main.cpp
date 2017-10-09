
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 24, 2017 7:51 PM
 * purpose: Male and Female Percentages
 */

//System Libraries
#include <iostream> //I/O Stream Library
using namespace std; //The Standard namespace for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!

int main() {
    //Variable Declaration
    float numMal; //Number of males
    float numFem; //Number of females
    float total; //The total in the class
    float percFem; //The percent of females in the class
    float percMal; //The percent of males in the class
    
    //Variable Initialization
    cout<<"This program calculates the percentages of males and females in a class."<<endl;
    cout<<"First, please enter the number of males in the class."<<endl;
    cin>>numMal;
    cout<<"Next, please enter the number of females in the class."<<endl;
    cin>>numFem;

    //Process Mapping - Inputs no Outputs
    total = numMal + numFem;
    percFem = (numFem / total) * 100;
    percMal = (numMal / total) * 100;
    //User Input/Data
    
    //re-display inputs
    cout<<"The total number of people in the group is "<<total<<". \n"
        <<percFem<<"% of them are female, and "<<percMal<<"% of them are male."<<endl;
    //Exit Function main, end of program
    return 0;
}

