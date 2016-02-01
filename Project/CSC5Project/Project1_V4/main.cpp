
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: version 3
 * Created on January 30 2016, 2:00PM
 */

//System Libraries
#include <iostream> //IO
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
    unsigned short winsC=0, lossC=0, playsC=0; //counts the number of wins and losses user has for color
    string blank; //no purpose, simply makes the user hit enter to begin the roulette ball
    char winCol;                    //the winning color for gambling on a color
    char pick;                      //the numbers the uses gets for choosing a color
    
    //input users choice of color and total amount to bet
    cout<<"Welcome to the roulette wheel"<<endl;
    cout<<"How much money do you have to bet tonight? MAX:100,000"<<endl;
    cin>>totMon;
    
    //set time to 0 for gambling 
    srand(static_cast<unsigned int>(time(0)));
    
    //output all to 2 decimal places
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    //run gambling while user still has money 
    while(totMon>0&&toupper(answr)=='Y'){
        cout<<"Would you like to bet on a number or a color? Number=N  Color=C"<<endl;
        cin>>opt1;
        cout<<"How much money are you putting down on this bet?"<<endl;
        cout<<"The table max per bet is  10,000"<<endl;
        cin>>bet;
        if (bet>LIMIT){
            cout<<"Your bet has been changed to the limit"<<endl;
        }
        bet=bet<LIMIT?bet:LIMIT; //ternary operator, user cant exceed table limit
        if (bet>totMon){
            cout<<"Your bet has been changed to your remaining balance of $"<<totMon<<endl;
        }
        bet=bet>totMon?totMon:bet; //ternary operator, user cannot bet more than they have
        
        //if opt1 is number run gamble for number betting
        if (toupper(opt1)=='N'){
            cout<<"You selected to play for number"<<endl;
            cout<<"Enter in your guess"<<endl;
            cout<<"NOTE: input 37 for 0. 38 for 00"<<endl;
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
                    wins++; //add 1 to number win
                }else{
                    cout<<"you lose!"<<endl;
                    cout<<"You lost $"<<bet<<" on this gamble"<<endl;
                    totMon=totMon-bet;  //calculate remaining balance 
                    cout<<"Your remaining balance is $"<<totMon<<endl;
                    loss++; //add 1 to number loss
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
            //if statement to determine 
            switch (winCol){
                case 1: case 3: case 5: case 7: case 9: case 12: case 14: case 16:
                case 18: case 19: case 21: case 23:case 25: case 27: case 30: 
                case 32: case 34: case 36: {
                    cout<<"The number is "<<static_cast<int>(winCol)<<endl;
                    if (pick==2){
                        totMon=totMon+(bet*1.05f);//calculate new balance
                        cout<<"Its Red! You won    $"<<bet*1.05f<<endl;
                        cout<<"Your new balance is $"<<totMon<<endl;
                        winsC++;    //add one to wins for color
                    }else if(pick==1){
                        totMon=totMon-bet;//calculate
                        cout<<"Its Red! You lost $"<<bet<<endl;
                        cout<<"Your new balance is $"<<totMon<<endl;
                        lossC++;    //add one to losses for color                       
                    }
                }break;
                case 37: case 38:{
                    totMon=totMon-bet;
                    if (winCol==37){cout<<"The ball landed on 0!"<<endl;}
                    else if (winCol==38){cout<<"The ball landed on a 00!"<<endl;}
                    cout<<"You lost $"<<bet<<endl;
                    lossC++; //add one to losses for color
                }break;
                default:{
                    if(pick==2){
                        totMon=totMon-bet;
                        cout<<"Its Black! You lost $"<<bet<<endl;
                        cout<<"Your new balance is $"<<totMon<<endl;
                        lossC++;    //increment color losses
                    }else if(pick==1){
                        totMon=totMon+(bet*1.05f);
                        cout<<"Its Black! You won  $"<<bet*1.05f<<endl;
                        cout<<"Your new balance is $"<<totMon<<endl;
                        winsC++;    //increment color wins 
                    }
                }break;
            }
        }
        cout<<"Continue gambling? Y/N"<<endl;
        cin>>answr;
        //calculate some statistics
        plays=wins+loss;//counts the number of times user played for numbers
        playsC=winsC+lossC; //counts the number of times the user played for color  
    }
    cout<<"Displaying your statistic for your bets!"<<endl;
    cout<<"You played a total of "<<wins+loss+winsC+lossC<<" times"<<endl;
    
    
    //Exit stage right and close
    return 0;
}

