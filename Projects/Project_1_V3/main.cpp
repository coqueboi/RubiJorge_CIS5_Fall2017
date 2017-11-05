
/* 
 * File:   main.cpp
 * Author: Jorge Rubi
 * Created on November 4, 2017, 7:00 PM
 * Purpose: Project 1 : Battleship!
 */
//System Libraries
#include <iostream> //I/O Stream Library
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std; // The standard name-space for system libraries 

//User Libraries 

//Global constants - Physics/Math/Conversions only

//Functions Prototypes 

//Execution Begins Here!

int main() {
    //Random # seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Variable Declaration
    //Create an array for the game board.
    char board[10][10];
    string rows,cols,guess;
    short turns;
    
    //Input / Variable Initialization
    rows = "ABCDEFGHIJ";
    cols = "  0 1 2 3 4 5 6 7 8 9";
    cout<<" ___________________ "<<endl;
    cout<<"|   W E L C O M E   |"<<endl;
    cout<<"|        T O        |"<<endl;
    cout<<"|    BATTLE SHIP    |"<<endl;
    cout<<"|___________________|"<<endl;
    cout<<"Please enter the number of turns you wish to play: ";
    cin>>turns;
    cin.ignore();
    //'1' is an attack
    //'2' is a successful attack aka "Hit"/"X"
    //'*' is an unsuccessful attack aka "Miss"
    //Process / Calculations
    do{
        for(short y=0; y<10; y++){

            if(y==0){
                cout<<cols<<endl;
            }
            cout<<rows[y]<<" ";
            
            for(short x=0; x<10; x++){
                
                //test for X "Hit"
                if(board[y][x] == '2'){
                    board[y][x] = {'X'};
                    //Consider "lifepool" variable for highscore
                }
                else{
                    board[y][x] = {'O'};
                }
                
                
                cout<<board[y][x]<<" ";   
            }
            cout<<endl;
        }
        
        cin>>guess;
        
        //Convert guessed letter into readable numbers for game
        //Board starts at 0, Adjust Y due to ascii character values
        
        if(guess[0]>=65||guess[0]<=97){
            guess[0] -= 65;
        } 
        else{
            guess[0] -= 97;
        }
        //Adjust X due to ascii character values
        if((guess[1]>=48)&&(guess[1]<=57)){
            guess[1] -= 48;
        }
        //Sets value for an attempted attack 
        board[guess[0]][guess[1]] = {'1'};
        
        //Check for ship placement
        //If ship placement lies in area of attempted attack, "Hit"!
        //Consider boolean for ship being hit
        
        turns-=1;
    }while(turns>=0);
    
    //Output
    
    //Exit function main, end of program
    
    return 0;
}
