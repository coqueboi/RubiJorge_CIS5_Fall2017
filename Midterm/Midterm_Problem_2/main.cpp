/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 26, 2017, 12:22 PM
 * Purpose:  Midterm Problem 2
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv){
    //Declare all Variables Here
    string input;
    bool a,b,c,d;
    short temp0;
    short temp1;
    short temp2;
    short temp3;
    //Input or initialize values Here
    cout<<"This program takes 4 numbers entered by the user and ";
    cout<<"outputs a list consisting of the numbers entered, with the length ";
    cout<<"of the list based on the value of each number entered."<<endl;
    cout<<"Additionally, in the case that anything other than a number ";
    cout<<"is entered, the program will output: \"NAN\"."<<endl;
    cout<<"\nPlease enter four consecutive numbers (a four-digit-number)"
            " to get started: ";
    
    cin>>input;
    
    //Process/Calculations Here

    for(short num = 0; num<=3; num++){
        if(input[num]=='0'||input[num]=='1'||input[num]=='2'||input[num]=='3'||
                input[num]=='4'||input[num]=='5'||input[num]=='6'||
                input[num]=='7'||input[num]=='8'||input[num]=='9'){
            if(num==0)
                a = true;
            if(num==1)
                b = true;
            if(num==2)
                c = true;
            if(num==3)
                d = true;
        }
        else{
            if(num==0)
                b = false;
            if(num==1)
                b = false;
            if(num==2)
                c = false;
            if(num==3)
                d = false;
        }
    }
    temp0 = input[0] - '0';
    temp1 = input[1] - '0';
    temp2 = input[2] - '0';
    temp3 = input[3] - '0';
    if(!(a)||!(b)||!(c)||!(d)){
        if(a){
            cout<<input[0]<<" ";
            for(short count=0; count<temp0; count++){
                cout<<"*";
            }
            cout<<endl;
        }
        if(!(a))
            cout<<"NAN"<<endl;
        if(b){
            cout<<input[1]<<" ";
            for(short count=0; count<temp1; count++){
                cout<<"*";
            }
            cout<<endl;
        }
        if(!(b))
            cout<<"NAN"<<endl;
        if(c){
            cout<<input[2]<<" ";
            for(short count=0; count<temp2; count++){
                cout<<"*";
            }
            cout<<endl;
        }
        if(!(c))
            cout<<"NAN"<<endl;
        if(d){
            cout<<input[3]<<" ";
            for(short count=0; count<temp3; count++){
                cout<<"*";
            }
            cout<<endl;
        }
        if(!(d))
            cout<<"NAN"<<endl;
    }
    else{
        if(a){
            cout<<input[0]<<" ";
            for(short count=0; count<temp0; count++){
                cout<<temp0;
            }
            cout<<endl;
        }
        if(b){
            cout<<input[1]<<" ";
            for(short count=0; count<temp1; count++){
                cout<<temp1;
            }
            cout<<endl;
        }
        if(c){
            cout<<input[2]<<" ";
            for(short count=0; count<temp2; count++){
                cout<<temp2;
            }
            cout<<endl;
        }
        if(d){
            cout<<input[3]<<" ";
            for(short count=0; count<temp3; count++){
                cout<<temp3;
            }
            cout<<endl;
        }
    }
        
    
    
    //Output Located Here
    
    //Exit
    return 0;
}

