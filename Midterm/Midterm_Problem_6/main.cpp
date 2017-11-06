
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 28, 2017, 7:17 PM
 * Purpose: Midterm Problem 6
 */
//System Libraries
#include <iostream> //I/O Stream Library
#include <cmath>
using namespace std; // The standard name-space for system libraries 

//User Libraries 

//Global constants - Physics/Math/Conversions only

//Functions Prototypes 

//Execution Begins Here!

int main() {
    //Variable Declaration
    int x,n;
    int calc;
    float sum;
    bool addSub; //Controls switch for adding or subtracting
    
    //Input / Variable Initialization
    cout<<"This program creates a sequence in a";
    cout<<"\nsum = x - x^3/3! + x^5/5! - x^7/7! + ............"<<endl;
    cout<<"fashion."<<endl;
    cout<<"\nTo begin, please enter a value for x: ";
    cin>>x;
    cout<<"Next, enter the number of terms you'd like to calculate: ";
    cin>>n;
    
    //Process / Calculations
    calc = 1;
    addSub = true;
    for (int temp = 1, powerOf = 1, fact = 1 ; temp <= n; temp++, powerOf+=2){
        if(addSub){
            for(;fact<=powerOf;fact++){ //Factorial calculations
                calc *= fact; 
            }
            sum += (pow(x,powerOf)/calc);
            addSub=false;
        }
        else if(!(addSub)){
            for(;fact<=powerOf;fact++){
                calc *= fact;
            }
            sum -= (pow(x,powerOf)/calc);
            addSub=true;
        }
    }
    
    //Output
    cout<<"\nThe sum result is: "<<sum<<endl;
    
    //Exit function main, end of program
    
    return 0;
}
