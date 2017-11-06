
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 11 2017 11:05 PM
 * Purpose: Color Mixer
 */

//System libraries
#include <iostream>
using namespace std;

//User Libraries

//Global constants - Physics/Math/Conversions ONLY

//Function prototypes

//Execution begins here
int main() {
    //Variable Declaration
    string clrOne;
    string clrTwo;
    
    //Process mapping from inputs to outputs
    cout<<"This program will yield the secondary color that results from mixing"
            " two primary colors like red, blue, or yellow."<<endl;
    cout<<"Please enter the first primary color you'd like to mix."<<endl;
    cin>>clrOne;
    cout<<endl;
    cout<<"Please enter the second primary color you'd like to mix."<<endl;
    cin>>clrTwo;
    cout<<endl;
    
    //Re-Display Inputs and write the Outputs
    if (clrOne == "red" && clrTwo == "blue")
        cout<<"The result of mixing these two colors is purple!"<<endl;
    if (clrOne == "red" && clrTwo == "yellow")
        cout<<"The result of mixing these two colors is orange!"<<endl;
    if (clrOne == "blue" && clrTwo == "green")
        cout<<"The result of mixing these two colors is green!"<<endl;
    else
        cout<<"Error: non-primary color or case-sensitive text was entered."<<endl;
    
    
    //Exit function main, end program
    return 0;
}

