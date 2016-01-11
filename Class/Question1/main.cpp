/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Jackpot
 * Created on January 11, 2016
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    int score1=80, score2=60;
    int avg=(score1+score2)/2;
    
    //Output the results
    cout<<"score 1 is "<<score1<<" "<<"score 2 is "<<score2<<endl;
    
    if (avg>=70)
    {
        cout<<"Pass"<<endl;
    }
    else
    {
        cout<<"Fail"<<endl;
    }
    
    //Exit stage right and close
    return 0;
}