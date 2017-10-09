
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 24, 2017 5:09 PM
 * purpose: Stadium Seating
 */

//System Libraries
#include <iostream> //I/O Stream Library
#include <iomanip>

using namespace std; //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only
short priceA = 15; //Price of seats
short priceB = 12; // ""
short priceC = 9;  // ""

//Function Prototypes

//Execution Begins Here!

int main() {
    //Variable Declaration
    float seatA; //seat section A
    float seatB; //seat section B
    float seatC; //seat section C
    float totMony; //total seats sold in dollars

    //Variable Initialization
    cout<<"This program will calculate income based on class of seats sold."<<endl;
    cout<<"\nPlease enter the amount of seats sold in Section A."<<endl;
    cin>>seatA;
    cout<<"Next, please enter the amount of seats sold in Section B."<<endl;
    cin>>seatB;
    cout<<"Lastly, please enter the amount of seats sold in Section C?"<<endl;
    cin>>seatC;
    
    //Process Mapping - Inputs no Outputs
    totMony = (seatA * priceA) + (seatB * priceB) + (seatC * priceC);
    
    //User Input/Data
    
    //Re-display inputs
    
    cout<<"the total profit is "<<setprecision(2)<<fixed<<totMony<<" dollars."<<endl;
    
    //Exit Function main, end of program
    return 0;
}

