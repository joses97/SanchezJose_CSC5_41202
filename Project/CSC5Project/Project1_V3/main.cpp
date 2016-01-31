
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: version 3
 * Created on January 22 2016, 2:00PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>  
#include <ctime>    //rng
#include <iomanip>  //formatting
#include <string>   //strings
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    unsigned short guess;           //user's number guess for the wheel
    char opt1;                      //user's choice for color or number bet
    string color;                   //users choice for black or red
    float totMon;                     //users wallet to spend on gambling 
    float bet;                      //users bet for that go around
    const unsigned int LIMIT=10000; //table limit for a single bet
    char answr='Y';                 //users answer to keep playing
    unsigned short wins=0, loss=0, plays=0; //counts the number of wins and losses user has
    string blank; //no purpose, simply makes the user hit enter to begin the roulette ball
    char winCol;                    //the winning color for gambling on a color
    char pick;                      //the numbers the uses gets for choosing a color
    
    //input users choice of color and total amount to bet
    cout<<"Welcome to the roulette wheel"<<endl;
    cout<<"How much money do you have to bet tonight? MAX:100,000"<<endl;
    cin>>totMon;
    
    //set time to 0 for gambling 
    srand(static_cast<unsigned int>(time(0)));
    
    //run gambling while user still has money 
    while(totMon>0&&toupper(answr)=='Y'){
        cout<<"Would you like to bet on a number or a color? c/n"<<endl;
        cin>>opt1;
        cout<<"How much money are you putting down on this bet?"<<endl;
        cout<<"The table max per bet is  10,000"<<endl;
        cin>>bet;
        bet=bet<LIMIT?bet:LIMIT; //ternary operator, user cant exceed table limit
        if (bet>totMon){
            cout<<"Your bet has been changed to your remaining balance of $"<<totMon<<endl;
        }
        bet=bet>totMon?totMon:bet; //ternary operator, user cannot bet more than they have
        
        //if opt1 is number run gamble for number betting
        if (toupper(opt1)=='N'){
            cout<<"You selected to play for number"<<endl;
            cout<<"Enter in your guess"<<endl;
            cin>>guess; //input users guess for the roulette wheel
            cout<<"You have $"<<bet<<" on "<<guess<<endl;
            cout<<"Enter ''GO'' to gamble."<<endl;
            cin>>blank;//doesnt do anything, used to create a pause
            //begin rng for the outcome
            char roll=rand()%38+1;  //set the random number range 1-38
            cout<<"The number is "<<static_cast<int>(roll)<<endl; //display number out of the roulette wheel
                //if they got guess right run 
                if (guess==roll){
                    cout<<"You've won"<<endl;
                    cout<<"Your pay out is"<<bet*37<<endl;
                    totMon+=(bet*37);
                    cout<<"Your remaining balance is $"<<totMon<<endl;
                    wins++;
                }else{
                    cout<<"you lose!"<<endl;
                    cout<<"You lost $"<<bet<<" on this gamble"<<endl;
                    totMon=totMon-bet;  //calculate remaining balance 
                    cout<<"Your remaining balance is $"<<totMon<<endl;
                    loss++;
                }
        }
        //if user picked color run gambling for black or red
        else if (toupper(opt1)=='C'){
            cout<<"You picked to gamble on a color"<<endl;
            cout<<"Please enter the color Black or Red"<<endl;
            cin>>color; //input users color choice
            if(toupper(color[0])=='B'){
                cout<<"You picked Black"<<endl;
                pick=1;
            }else{
                cout<<"You Picked Red"<<endl;
                pick=2;
            }
            //calculate random number from roulette wheel
            winCol=rand()%38+1;
            cout<<static_cast<int>(winCol)<<endl;
            //if statement to determine 
            if (((winCol<=36&&winCol>18)&&pick==1)||winCol<=18&&pick==2){
                cout<<"You've won by placing your bet "<<color<<endl;
                cout<<"Your pay out is $"<<bet*1.05f<<endl;
                totMon=totMon+(bet*1.05f); //calculate new balance
                cout<<"Your new balance is $"<<totMon<<endl;
                wins++;
            }else{
                cout<<"You've lost by placing it your bet on "<<color<<endl;
                totMon=totMon-bet;
                cout<<"Your new balance is $"<<totMon<<endl;
                loss++;
            }}
        cout<<"Continue gambling? Y/N"<<endl;
        cin>>answr;
    }
    cout<<"Displaying your statistic for your bets!"<<endl;
    cout<<"You played a total of "<<wins+loss<<" times"<<endl;
    cout<<"Your win percentage was "<<wins/(wins+loss)<<endl;
    
    //Exit stage right and close
    return 0;
}

