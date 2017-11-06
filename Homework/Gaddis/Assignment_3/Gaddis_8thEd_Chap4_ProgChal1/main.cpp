/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 9, 2017, 8:35 AM
 * Purpose: Minimum/Maximum
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int a;
    int b;
    string result;
    //Input or initialize values Here
    cout<<"This program takes two integers and determines which of the "
            "two is larger."<<endl;
    cout<<"Please input the first integer (a)."<<endl;
    cin>>a;
    cout<<"Thank you, now please enter the second integer (b)."<<endl;
    cin>>b;   
    
    //Process/Calculations Here
    result = a > b ?  "a is greater than b." : "a is less than b." ;
    
    //Output Located Here
    cout<<"\n";
    cout<<result<<endl;
    
    
    //Exit
    return 0;
}

