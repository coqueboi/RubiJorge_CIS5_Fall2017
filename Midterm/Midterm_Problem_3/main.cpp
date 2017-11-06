
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 28, 2017, 2:00 PM
 * Purpose: Midterm Problem 3
 */
//System Libraries
#include <iostream> //I/O Stream Library
#include <iomanip>
#include <string>
using namespace std; // The standard name-space for system libraries 

//User Libraries 

//Global constants - Physics/Math/Conversions only
const int THSND = 1000;
const int HNDRD = 100;
const int TENS = 10;
const int ONES = 1;

//Functions Prototypes 

//Execution Begins Here!

int main() {
    //Variable Declaration
    string date,payee,actHldr,amtWord;          //User-entered data
    unsigned short amount,temp;                 //Amount in dollars
    unsigned char nThsnd, nHndrd, nTens, nOnes; //Number of (quantity) in amount
    
    //Input / Variable Initialization
    cout<<"This program writes a check!"<<endl;
    cout<<"To begin, please enter the current date in (MM/DD/YY) format: ";
    getline(cin,date);
    cout<<"Next, enter the name of the payee: ";
    getline(cin,payee);
    cout<<"Next, enter the amount to be paid: ";
    cin>>amount;
    cin.ignore();
    cout<<"Next, enter the name of the account holder: ";
    getline(cin,actHldr);
        
    //Process / Calculations
    temp = amount; //Temporary variable to perform calculations w/amount's value
    
    nThsnd = temp/THSND; //Calculations to grammatically output the amount
    temp %= THSND;
    
    nHndrd = temp/HNDRD;
    temp %= HNDRD;
    
    nTens = temp/TENS;
    temp %= TENS;
    
    nOnes = temp;
    
    //Output
    switch(nThsnd){
        case 1: amtWord += "One Thousand ";break;
    }
    switch(nHndrd){
        case 9: amtWord += "Nine Hundred ";break;
        case 8: amtWord += "Eight Hundred ";break;
        case 7: amtWord += "Seven Hundred ";break;
        case 6: amtWord += "Six Hundred ";break;
        case 5: amtWord += "Five Hundred ";break;
        case 4: amtWord += "Four Hundred ";break;
        case 3: amtWord += "Three Hundred ";break;
        case 2: amtWord += "Two Hundred ";break;
        case 1: amtWord += "One Hundred ";break;
    }
    switch(nTens){
        case 9: amtWord += "Ninety ";break;
        case 8: amtWord += "Eighty ";break;
        case 7: amtWord += "Seventy ";break;
        case 6: amtWord += "Sixty ";break;
        case 5: amtWord += "Fifty ";break;
        case 4: amtWord += "Fourty ";break;
        case 3: amtWord += "Thirty ";break;
        case 2: amtWord += "Twenty ";break;
        case 1:{ 
            if(temp==9){
                amtWord += "Nineteen ";
                temp = 0;
                nOnes = 0;
            }
            if(temp==8){
                amtWord += "Eighteen ";
                temp = 0;
                nOnes = 0;
            }
            if(temp==7){
                amtWord += "Seventeen ";
                temp = 0;
                nOnes = 0;
            }
            if(temp==6){
                amtWord += "Sixteen ";
                temp = 0;
                nOnes = 0;
            }
            if(temp==5){
                amtWord += "Fifteen ";
                temp = 0;
                nOnes = 0;
            }
            if(temp==4){
                amtWord += "Fourteen ";
                temp = 0;
                nOnes = 0;
            }
            if(temp==3){
                amtWord += "Thirteen ";
                temp = 0;
                nOnes = 0;
            }
            if(temp==2){
                amtWord += "Twelve ";
                temp = 0;
                nOnes = 0;
            }
            if(temp==1){
                amtWord += "Eleven ";
                temp = 0;
                nOnes = 0;
            }
        }
    }
    switch(nOnes){
        case 9: amtWord += "Nine ";break;
        case 8: amtWord += "Eight ";break;
        case 7: amtWord += "Seven ";break;
        case 6: amtWord += "Six ";break;
        case 5: amtWord += "Five ";break;
        case 4: amtWord += "Four ";break;
        case 3: amtWord += "Three ";break;
        case 2: amtWord += "Two ";break;
        case 1: amtWord += "One ";break;
    }
    amtWord += "and no/100s Dollars";
    
    cout<<endl;
    cout<<actHldr<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<left<<setw(44)<<"CITY, STATE  ZIP";
    cout<<right<<"Date:  "<<date<<endl;
    cout<<left<<"\nPay to the Order of:  "<<payee;
    cout<<right<<setw(16)<<"$ ";
    cout<<amount<<".00"<<endl;
    cout<<endl;
    cout<<amtWord<<endl;
    cout<<endl;
    cout<<left<<"BANK OF CSC5"<<endl;
    cout<<endl;
    cout<<left<<setw(44)<<"FOR: GOTTA PAY THE RENT";
    cout<<right<<actHldr;
    
    //Exit function main, end of program
    
    return 0;
}
