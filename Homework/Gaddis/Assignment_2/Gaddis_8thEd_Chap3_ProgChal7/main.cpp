
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on September 24, 2017, 8:45 PM
 * Purpose: Box Office
 */
//System Libraries
#include <iostream> //I/O Stream Library
#include <iomanip>
using namespace std; // The standard name-space for system libraries 

//User Libraries 

//Global constants - Physics/Math/Conversions only
int adltTik = 10; //Price of an Adult Ticket
int chldTik = 6; //Price of a Child Ticket
float perThtr = 0.20; //Percent of gross profit kept by theater

//Functions Prototypes 

//Execution Begins Here!

int main() {
    //Variable Declaration
    string movie; //Name of movie 
    int nmAdult; //Number of adult tickets sold
    int nmChild; //Number of child tickets sold
    float grsProf; //Gross Box Office Profit
    float netProf; //Net Box Office Profit 
    float disProf; //Profits paid to distributor
    
    //Variable Initialization
    cout<<"This program calculates a theater's gross and "
            "net box office profits for a night."<<endl;
    cout<<"\nTo begin, enter the name of a movie:"<<endl;
    cin>>movie;
    cout<<"\nNext, enter the amount of adult tickets sold"<<endl;
    cin>>nmAdult;
    cout<<"\nNext, enter the amount of child tickets sold"<<endl;
    cin>>nmChild;
    
    grsProf = (adltTik * nmAdult) + (chldTik * nmChild);
    netProf = perThtr * grsProf;
    disProf = grsProf - netProf;
    
    
    //Process Mapping - Inputs to Outputs 
    
    //Re-Display Inputs and write the Outputs
    cout<<left<<setw(40)<<"Movie Name:"<<right<<movie<<endl;
    cout<<left<<setw(40)<<"Adult Tickets Sold:"<<right<<nmAdult<<endl;
    cout<<left<<setw(40)<<"Child Tickets Sold:"<<right<<nmChild<<endl;
    cout<<setprecision(2)<<fixed<<left<<setw(40)<<"Gross Box Office Profit:"<<right<<"$ "<<grsProf<<endl;
    cout<<left<<setw(40)<<"Net Box Office Profit:"<<right<<"$ "<<netProf<<endl;
    cout<<left<<setw(40)<<"Amount Paid to Distributor:"<<right<<"$ "<<disProf<<endl;
    //Exit function main, end of program
    
    return 0;
}
