
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: throwing die
 * Created on January 25 2016
 */

//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //srand and rand function 
#include <ctime> //time to set the random seed
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    
    //frequency of our die throws 
    unsigned short frq2=0,frq3=0,frq4=0,frq5=0,frq6=0;
    unsigned short frq7=0,frq8=0,frq9=0,frq10=0,frq11=0,frq12=0;
    unsigned short wins=0,losses=0, games;
    
    //Input data and validate 
    cout<<"How many game would you like to play"<<endl;
    cout<<"Utilize a number between 10,000 and 40,000"<<endl;
    cin>>games;
    while(games<10000||games>40000){
        cout<<"How many game would you like to play"<<endl;
    cout<<"Utilize a number between 10,000 and 40,000"<<endl;
    cin>>games;
    //throw the dice
    for(int game=1;game<=games;game++){
        char die1=rand()%6+1;//number between [1,6]
        char die2=rand()%6+1;//number between [1,6]
        char sum=die1+die2;
        if(sum==2||sum==3||sum==12)losses++;
        else if(sum==7||sum==11)wins++;
        else{
            //roll again
            bool kpRln=true;
            do{
                die1=rand()%6+1;//number between 1 and 6
                die2=rand()%6+1;
                char sum2=die1+die2;
                switch(sum2==7){
                    case true: {losses++;kpRln=false;}
                    default:
                        if(sum==sum2){wins++;kpRln=false;}
                }}while(kpRln);
        }
    }
    //output the results
    cout<<"Out of "<<games<<" played"<<endl;
    cout<<"You won "<<wins<<" games and "<<endl;
    cout<<"You lost "<<losses<<" games"<<endl;
    cout<<"Percentage wise"<<endl;
    cout<<"You won "<<100.0f*wins/games<<"% games and "<<endl;
    cout<<"You lost "<<100.0f*losses/games<<"% games"<<endl;
    cout<<"Your wins and losses are "<<wins+losses<<endl;
    }
    //Exit stage right and close
    return 0;
}

