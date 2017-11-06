/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on October 29, 2017 5:11 PM
 * Purpose:  Menu With Loops for Midterm Projects
 */

//System Libraries
#include <iostream>    //Input/Output Stream Library
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const int THSND = 1000;
const int HNDRD = 100;
const int TENS = 10;
const int ONES = 1;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Loop the Menu and Problems
    do{
    
        //Input Data/Variables
        cout<<"Choose from the Menu"<<endl;
        cout<<"1. Midterm Problem 1"<<endl;
        cout<<"2. Midterm Problem 2"<<endl;
        cout<<"3. Midterm Problem 3"<<endl;
        cout<<"4. Midterm Problem 4"<<endl;
        cout<<"5. Midterm Problem 5"<<endl;
        cout<<"6. Midterm Problem 6"<<endl;
        cin>>choice;

        //Process or map the inputs to the outputs
        switch(choice){
            case 1:{
                cout<<"You are in Problem 1"<<endl;
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

                break;
            }
            case 2:{
                cout<<"You are in Problem 2"<<endl;
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
                break;
            }
            case 3:{
                cout<<"You are in Problem 3"<<endl;
                //Variable Declaration
                string date,payee,actHldr,amtWord;          //User-entered data
                unsigned short amount,temp;                 //Amount in dollars
                unsigned char nThsnd, nHndrd, nTens, nOnes; //Number of (quantity) in amount

                //Input / Variable Initialization
                cout<<"This program writes a check!"<<endl;
                cout<<"To begin, please enter the current date in (MM/DD/YY) format: ";
                cin.ignore();
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
                break;
            }
            case 4:{
                cout<<"You are in Problem 4"<<endl;
                //Variable Declaration
                char package;
                unsigned short hours;
                float total,pk1chrg,pk2chrg,pk3chrg;

                //Input / Variable Initialization
                cout<<"This program offers the user a choice of 3 different ISP "
                        "subscription packages."<<endl;
                cout<<"It also calculates which package is best for you based on "
                        "the amount of hours you spend using the internet. "<<endl;
                cout<<"In doing so, the program calculates the user's monthly ISP "
                        "bill."<<endl;
                cout<<endl;

                //Process / Calculations
                cout<<"Here are the packages offered by your ISP: "<<endl;
                cout<<"Package 1:\n$16.75 per month, 5 hours access. Additional hours "
                        "are $0.85 up to 20 hours then $1 for all additional "
                        "hours."<<endl;
                cout<<endl;
                cout<<"Package 2:\n$23.75 per month, 15 hours access. Additional hours "
                        "are $0.65 up to 25 hours then $0.75 for each "
                        "hour above this limit."<<endl;
                cout<<endl;
                cout<<"Package 3:\n$29.95 per month unlimited access"<<endl;
                cout<<endl;
                cout<<"Please enter the number of the package you would like: ";
                cin>>package;
                cin.ignore();
                cout<<"Next, please enter the amount of hours you spend on the "
                        "internet per month: ";
                cin>>hours;
                cin.ignore();

                pk1chrg = 16.75;
                pk2chrg = 23.75;
                pk3chrg = 29.95;

                if(package=='1'){
                    if(hours<=5){
                        total += pk1chrg;
                    }
                    if((hours > 5) && (hours <= 20)){
                        total += pk1chrg;
                        total += ((hours-5)*0.85);
                    }
                    if(hours > 20){
                        total += pk1chrg;
                        total += (15*0.85);
                        total += ((hours-20)*1.0);
                    }
                }
                if(package=='2'){
                    if(hours<=15){
                        total += pk2chrg;
                    }
                    if((hours > 15) && (hours <= 25)){
                        total += pk2chrg;
                        total += ((hours-15)*0.65);
                    }
                    if(hours > 25){
                        total += pk2chrg;
                        total += ((hours-10)*0.65);
                        total += ((hours-25)*0.75);
                    }
                }
                if(package=='3'){
                    total += pk3chrg;
                }
                //Output
                cout<<endl;
                cout<<"Your total for the selected package is: "<<total<<endl;
                break;
            }
            case 5:{
                cout<<"You are in Problem 5"<<endl;
                //Variable Declaration
                float hours;
                float payRate,grsPay;

                //Input / Variable Initialization
                cout<<"This program calculates an employee's gross pay."<<endl;
                cout<<"Please enter the amount of hours worked: ";
                cin>>hours;
                cin.ignore();
                cout<<"Please enter the employee's rate of pay per hour: ";
                cin>>payRate;

                //Process / Calculations
                if(hours<=40){
                    grsPay = (hours*payRate);
                }
                if(hours>40 && hours<=50){
                    grsPay = ((40*payRate)+(((hours-40) * 1.5)*payRate));
                }
                if(hours>50){
                    grsPay = ((40*payRate)+((10*payRate) * 1.5)+
                            (((hours-50) * 2) * payRate));
                }

                //Output
                cout<<"This employee's gross pay is: "<<grsPay<<endl;
                break;
            }
            case 6:{
                cout<<"You are in Problem 6"<<endl;
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
                break;
            }
            default:{
                cout<<"Exiting, have a great day!"<<endl;
            }
        }
    }while(choice>0&&choice<7);
    
    //Exit the program
    return 0;
}