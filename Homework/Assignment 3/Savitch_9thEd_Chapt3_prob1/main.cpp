/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: paper rock scissors with computer
 * Created on January 20, 2016
 */

//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //rand function
#include <ctime>    //time to set the randome seed
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    cout<<endl<<"Solution to Savitch 9thEd chapter 3 problem 1"<<endl;
    cout<<endl<<"The rock-paper-scissors game"<<endl<<endl;
    
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables 
    char computr; //Computers play
    char player;  //The players move
    
    //Players turn
    do{
        cout<<"Whats your move P, R, S?"<<endl;
        cin>>player;
        player=toupper(player);
    }while (!(player=='P'||player=='R'||player=='S'));
    
    
    //Computer Generated play 
    do{
        computr=rand()%4+80;
    }while(computr=='Q');
    
    //Output the results
    cout<<"The computer played  "<<computr<<endl;
    cout<<"The Players move     "<<player<<endl;
    //Exit stage right and close
    return 0;
}

