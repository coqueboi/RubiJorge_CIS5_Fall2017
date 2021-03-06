
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
    char board[10][10]; //Array to create the functional game board
    string rows,cols,guess; //Strings for holding game info
    short turns; //Turn counter
    short flip; //Temporary value for determining orientation of a ship
    short coordY,coordX;//Temporary values for setting ship coordinates on board
    bool ship1,ship2,ship3,ship4,ship5;//Expressions to ensure a ship is created
    
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
    ship1 = true; //Initialize ship creation functions
    
    //Process / Calculations
    
    //Board reset
    for(short temp = 0; temp < 10; temp++){
        for(short tempTwo = 0; tempTwo < 10; tempTwo++){
            board[temp][tempTwo] = 0;
        }
    }
    
    do{
        for(short y=0; y<10; y++){

            if(y==0){
                cout<<cols<<endl;
            }
            cout<<rows[y]<<" ";
            
            for(short x=0; x<10; x++){
                
                //test for X "Hit"
                if(board[y][x] == 1){
                    board[y][x] = {'X'};
                    //Consider "life pool" variable for high score
                }
                else if(!(board[y][x] == 'X')){
                    board[y][x] = {'+'};
                }
                else{
                    board[y][x] = {'X'};
                }
                //if(board[y][x] == 'X'){
                //    board[y][x] = {'X'};
                //}
                //if(board[y][x] == '1' cout O?... ie:for hidden ships?
                //else{
                //    board[y][x] = {'O'};
                //}
                
                
                cout<<board[y][x]<<" ";   
            }
            cout<<endl;
        }
        /*
        //Create Battleship coordinates
        //Ship 1 - Size 2
        if(ship1==true){
            flip = rand()%2+1; //[1,2]
            if(flip==1){ //Vertical
                coordX = rand()%9+0; 
                coordY = rand()%8+0; //[0,8] to avoid board collision
                board[coordY][coordX] = {'2'};
                for(short size=2;size>1;size--){
                    board[(coordY+=1)][coordX] = {'2'};
                }
            }
            if(flip==2){ //Horizontal
                coordX = rand()%8+0; 
                coordY = rand()%9+0; //[0,8] to avoid board collision
                board[coordY][coordX] = {'2'};
                for(short size=2;size>1;size--){
                    board[coordY][(coordX+=1)] = {'2'};
                }
            }
            ship1=false;
        }
        */
        //cin>>guess;
        
        //Convert guessed letter into readable numbers for game
        //Board starts at 0, Adjust Y due to ASCII character values
        /*if(guess[0]>=65||guess[0]<=97){
            guess[0] -= 65;
        } 
        else{
            guess[0] -= 97;
        }
        //Adjust X due to ASCII character values
        if((guess[1]>=48)&&(guess[1]<=57)){
            guess[1] -= 48;
        }
        //Sets value for an attempted attack 
        
        
        //Check for ship placement
        //If ship placement lies in area of attempted attack, "Hit"!
        //Consider boolean for ship being hit
        */
        turns-=1;
        //Consider "while lifepool > 0"
    }while(turns>=0);
    
    //Output
    
    //Exit function main, end of program
    
    return 0;
}
