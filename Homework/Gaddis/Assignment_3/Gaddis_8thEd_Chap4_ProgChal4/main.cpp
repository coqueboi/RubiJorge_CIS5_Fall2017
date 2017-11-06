
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 11, 2017, 9:20 PM
 * Purpose: Areas of Rectangles
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
    int lenOne; //Length of FIRST rectangle
    int widOne; //Width of FIRST rectangle
    int lenTwo; //Length of SECOND rectangle
    int widTwo; //Width of SECOND rectangle
    
    int areaOne,areaTwo; //Calculated areas of rectangles based on their length and width
    
    //Variable Initialization
    cout<<"This program takes the lengths and widths of two rectangles and "
            "compares their respective areas to determine which of the two "
            "has the greater area."<<endl;
    cout<<"Please enter the length of the first rectangle."<<endl;
    cin>> lenOne;
    cout<<"Now please enter the width of the first rectangle."<<endl;
    cin>> widOne;
    cout<<"Next, please enter the length of the second rectangle."<<endl;
    cin>> lenTwo;
    cout<<"Finally, please enter the width of the second rectangle."<<endl;
    cin>> widTwo;
    
    //Process Mapping - Inputs to Outputs 
    areaOne = lenOne * widOne; //Calculations to find the area of the rectangles
    areaTwo = lenTwo * widTwo; //""
    
    //Re-Display Inputs and write the Outputs
    if (areaOne > areaTwo)
        cout<<"The area of rectangle one is GREATER than the area of rectangle two!"<<endl;
    if (areaTwo > areaOne)
        cout<<"The area of rectangle two is GREATER than the area of rectangle one!"<<endl;
    if (areaOne == areaTwo)
        cout<<"The areas of the rectangles are EQUAL to each other."<<endl;
    
    
    //Exit function main, end of program
    
    return 0;
}
