
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on January 22 2016, 2:00PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    unsigned short guess;  //user's number guess for the wheel
    char opt1;  //user's choice for color or number bet
    string color;   //users choice for black or red
    unsigned int maxMon;     //users wallet to spend on gambling 
    float bet;     //users bet for that go around
    const unsigned int LIMIT=10000; //table limit for a single bet
    
    //input users choice of color and total amount to bet
    cout<<"Welcome to the roulette wheel"<<endl;
    cout<<"How much money do you have to bet tonight? MAX:100,000"<<endl;
    cin>>maxMon;
    
    //set time to 0 for gambling 
    srand(static_cast<unsigned int>(time(0)));
    
    
    //run gambling while user still has money 
    while(maxMon>0){
        cout<<"Would you like to bet on a number or a color? c/n"<<endl;
        cin>>opt1;
        cout<<"How much money are you putting down on this bet?"<<endl;
        cout<<"The table max per bet is  10,000"<<endl;
        cin>>bet;
        bet=bet<LIMIT?bet:LIMIT; //ternary operator, user cant exceed table limit
        
        //if opt1 is number run gamble for number betting
        if (toupper(opt1)=='N'){
            cin>>guess; //input users guess for the roulette wheel
            char roll=rand()%38+1;  //set the random number range 1-38
            cout<<static_cast<int>(roll)<<endl; //display number out of the roulette wheel
                //if they got guess right run 
                if (guess==roll){
                    cout<<"Congrats on your win"<<endl;
                }else{
                    cout<<"you lose!"<<endl;
                }
        }
        //if user picked color run gambling for black or red
        else if (toupper(opt1)=='C'){
            cout<<"You picked color"<<endl;
            cout<<"Please enter the color Black or Red"<<endl;
            cin>>color; //input users color choice
            if (toupper(color[0])=='B'){
                cout<<"black"<<endl;
            }
            else if (toupper(color[0])=='R'){
                cout<<"red"<<endl;
            }
            
    }}
    
    //Exit stage right and close
    return 0;
}

