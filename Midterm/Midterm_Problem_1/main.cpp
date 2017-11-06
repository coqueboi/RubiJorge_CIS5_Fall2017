/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 25, 2017, 7:53 AM
 * Purpose:  Midterm Problem 1
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main() {
    //Declare all Variables Here
    short input; //Variable for user input
    short temp; //Temporary variable used to calculate based on user input
    
    //Input or initialize values Here
    cout<<"This program makes an x-shape based on the number you enter."<<endl;
    cout<<"Please enter a number:";
    cin>>input; //Request user input
    temp = input; //Temporary variable is set equal to user input
    
    //Process/Calculations Here
    for(short rows=1; rows<=input; rows++) //Create "rows" of output.
    {
        
        for(short cols=1; cols<=input; cols++) //Create "columns" output.
        {
            if((input%2) == 0) //Check if input is an even number.
            {
                if(rows == cols) //Output when condition.
                {
                    cout<<(input - temp) + 1;
                    temp -= 1;
                }
                else if(rows == (input - cols)+ 1) //Output when condition.
                {
                    cout<<(input - rows) + 1;
                }
                else
                {
                    cout<<" ";
                }
            }
            else
            {
                if(rows == cols) //Output when condition and adjust temp.
                {
                    cout<<temp;
                    temp -= 1;
                }
                else if(rows == (input - cols) + 1) //Output when condition.
                    cout<<(input - cols) + 1;
                
                else //Create a "blank" space when other conditions are not met.
                {
                    cout<<" ";
                }   
            }
        }
        cout<<endl; //Move to the next line once output on a row is complete.
    }

    //Exit
    return 0;
}

