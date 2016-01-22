/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: paper rock scissors with computer
 * Created on January 20, 2016 2:00 PM
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
    //show which problem it is and name the game
    cout<<endl<<"Solution to Savitch 9thEd chapter 3 problem 1"<<endl;
    cout<<endl<<"The rock-paper-scissors game"<<endl<<endl;
    
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables 
    char computr; //Computers play
    char player;  //The players move
    char answr;   //Answer for repeat question
    
    //Players turn
    do{
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

        //Win, Loss or Tie result
        if (player==computr){
            cout<<"Its a Tie!"<<endl;
        }else if(player=='R'&&computr=='S'){
            cout<<"You Win, Congrats!"<<endl;
        }else if(player=='S'&&computr=='P'){
            cout<<"You Win, Congrats!"<<endl;
        }else if(player=='P'&&computr=='R'){
            cout<<"You Win, Congrats!"<<endl;
        }else {
            cout<<"You lose!"<<endl;
        }
    cout<<"Play Rock Paper Scissors again? Please enter Y or N"<<endl;
    cin>>answr;
    }while(toupper(answr)=='Y');    
    //Exit stage right and close
    return 0;
}

