
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 24, 2017, 6:45 PM
 * Purpose: Ingredients Adjuster
 */
//System Libraries
#include <iostream> //I/O Stream Library
#include <iomanip>
using namespace std; // The standard name-space for system libraries 

//User Libraries 

//Global constants - Physics/Math/Conversions only
float sugarC = 1.5/48; //Conversion for cups of sugar per recipe of 48 cookies
float butterC = 1/48; //Conversion for cups of butter per recipe of 48 cookies
float flourC = 2.75/48; //Conversion for cups of flour per recipe of 48 cookies
//Functions Prototypes 

//Execution Begins Here!

int main() {
    //Variable Declaration
    float cookies; //Amount of cookies desired by the user
    float postSug; //Sugar quantity for specific amount of cookies
    float postBut; //Butter quantity for specific amount of cookies
    float postFlo; //Flour quantity for specific amount of cookies
    
    //Variable Initialization
    cout<<"This program adjusts the ingredient ratios necessary "
          "for a recipe of cookies based on the quantity of cookies desired."
          "\nPlease enter the number of cookies you'd like to make!"<<endl;
    cin>>cookies;
    
    postSug = sugarC * cookies;
    postBut = butterC * cookies;
    postFlo = flourC * cookies;
    //Process Mapping - Inputs to Outputs 
    
    //Re-Display Inputs and write the Outputs
    cout<<"For a batch of "<<cookies<<" cookies, you'll need:"<<endl;
    cout<<setprecision(2)<<fixed<<postSug<<" cups of Sugar."<<endl;
    cout<<setprecision(2)<<fixed<<postBut<<" cups of Butter. \n&"<<endl;
    cout<<setprecision(2)<<fixed<<postFlo<<" cups of Flour."<<endl;
    
    //Exit function main, end of program
    
    return 0;
}
