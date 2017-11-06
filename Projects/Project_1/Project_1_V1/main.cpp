
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
    short board[10][10];
    
    //Input / Variable Initialization
    
    for(short y=0; y<10; y++){
        
        for(short x=0; x<10; x++){
            board[y][x] = {0};
            cout<<board[y][x]<<" ";
        }
        cout<<endl;
    }
    
    //Process / Calculations
    
    //Output
    
    
    //Exit function main, end of program
    
    return 0;
}
