
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 11, 2017, 9:45 PM
 * Purpose: Body Mass Index
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
    short height; //Height in inches
    short weight; //Weight in pounds
    float BMI; //Body Mass Index number
    //Variable Initialization
    cout<<"This program calculates and displays a person's Body "
          "Mass Index (BMI) as well as determining whether "
          "the person is overweight or underweight for their height."<<endl;
    cout<<"Please enter your height in inches."<<endl;
    cin>> height;
    cout<<"Next, please enter your weight in pounds."<<endl;
    cin>> weight;
    
    //Process Mapping - Inputs to Outputs 
    BMI = weight * 703 / (height*height); //BMI calculation
    
    //Re-Display Inputs and write the Outputs
    if (BMI > 18.5 && BMI < 25)
        cout<<"Based on a sedentary lifestyle, a BMI of "<<BMI<<" indicates the "
                "person's weight to be optimal."<<endl;
    if (BMI < 18.5)
        cout<<"Based on a sedentary lifestyle, a BMI of "<<BMI<<" indicates the "
                "person to be considered underweight."<<endl;
    if (BMI > 25)
        cout<<"Based on a sedentary lifestyle, a BMI of "<<BMI<<" indicates the "
                "person to be considered overweight."<<endl;
    
    
    //Exit function main, end of program
    
    return 0;
}
