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
    
    //Loop until player wants to quit
    char qstion;  //Question, does player want to keep playing 
    
    //Players turn
    do{
        //Declare and initialize variables
        char computr; //Computers play
        char player;  //The players move
        do{
            cout<<"Whats your move P, R, S?"<<endl;
            cin>>player;
            player=toupper(player);
        }while (!(player=='P'||player=='R'||player=='S'));


        //Computer Generated play 
        do{
            computr=rand()%4+80;
        }while(computr=='Q');

        //Output the moves by th computer and player 
        cout<<"The computer played  "<<computr<<endl;
        cout<<"The Players move     "<<player<<endl;

        //Determine the result
        if (computr==player){
            cout<<"The result is a tie"<<endl;
        } else if(player=='P'&&computr=='R'){
            cout<<"The player wins!"<<endl;
        }else if(player=='R'&&computr=='S'){
            cout<<"The player wins!"<<endl;
        }else if(player=='S'&&computr=='P'){
            cout<<"The player wins!"<<endl;
        }else{
            cout<<"Player loses"<<endl;
        }
    //Keep playing
    cout<<endl<<"Do you want to continue playing?"<<endl<<endl;
    cin>>qstion;
    }while(toupper(qstion)=='Y');
    //Exit stage right and close
    return 0;
}

