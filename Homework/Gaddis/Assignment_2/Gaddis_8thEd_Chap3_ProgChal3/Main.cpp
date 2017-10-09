
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * * Created on September 24, 2017 6:28 PM
 * purpose: Test Average
 */

//System Libraries
#include <iostream> //I/O Stream Library
#include <iomanip>

using namespace std; //The standard name-space for system libraries

//User Libraries

//Global Constants - Physics/Math/Conversions only

//Function Prototypes

//Execution Begins Here!

int main() {
    //Variable Declaration
    float score1,score2,score3,score4,score5; //Variables to represent scores
    
    float average; //The average for all the test scores
    
    //Variable Initialization
    cout<<"This program takes five test scores and calculates the average score."<<endl;
    cout<<"Please enter the first test score.";
    cin>>score1;
    cout<<"Next, enter the second.";
    cin>>score2;
    cout<<"Next, the third.";
    cin>>score3;
    cout<<"Next, the fourth.";
    cin>>score4;
    cout<<"Finally, please enter the fifth score.";
    cin>>score5;
    
    average = (score1 + score2 + score3 + score4 + score5) / 5;
    
    //Process Mapping - Inputs to Outputs
    
    //User Input/Data
    
    //re-display inputs
    cout<<"The average test score is a score of "<<setprecision(2)<<fixed<<average<<endl;
    
    //Exit Function main, end of program
    return 0;
}

