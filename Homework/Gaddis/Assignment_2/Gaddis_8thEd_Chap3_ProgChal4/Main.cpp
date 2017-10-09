
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 24, 2017 7:03 PM
 * purpose: Average Rainfall
 */

//System Libraries
#include <iostream> //I/O Stream Library

using namespace std; //The Standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!

int main() {
    //Variable Declaration
    string month1,month2,month3; 
    float inch1,inch2,inch3; //amount of inches of rain for month 
    float average; //average of rainfall
    
    //Variable Initialization
    cout<<"This program takes three inputed months and tells you the "
        "average rainfall for those months"<<endl;
    cout<<"Please input the first month."<<endl;
    cin>>month1;
    cout<<"Next, input the second month."<<endl;
    cin>>month2;
    cout<<"Lastly, input the third month."<<endl;
    cin>>month3;

    cout<<"Now, please input the average inches of rainfall for the first month"<<endl;
    cin>>inch1;
    cout<<"Next, please input the average inches of rainfall for the second month"<<endl;
    cin>>inch2;
    cout<<"Lastly, please input the average inches of rainfall for the third month"<<endl;
    cin>>inch3;
    
    average = (inch1 + inch2 + inch3) / 3;
    //Process Mapping - Inputs to Outputs
    
    //User Input/Data
    
    //re-display inputs
    cout<<"the average rainfall for "<<month1<<", "<<month2<<", and "<<month3<<
        " is "<<average<<" inches of rain"<<endl;  
    
    //Exit Function main, end of program
    return 0;
}

