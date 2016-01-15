/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: create table for average tests
 * Created on January 13, 2016, 10:52AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    int nmbrtst=1; //test number
    float tests, score; //number of tests wanting to calculate, test score
    float max, perc;     //max possible points, percent scored
    //Input data tests
    cout<<"How many test would you like to average?"<<endl;
    cin>>tests;
   //Do while statement
    do { //Input score and max score
        cout<<"Please enter test score "<<endl;
        cin>>score;
        cout<<"Please enter total amount possible"<<endl;
        cin>>max;
        //Output test number, score, and max score.
        cout<<"Score received for test   "<<nmbrtst<<" is "<<score<<endl;
        cout<<"Total amount possible     "<<max<<endl;
        
        //Calculations 
        float perc=((score)/(max))*100;
        
        //Output percentage earned on test
        cout<<"Your average score was    "<<perc<<"% "<<endl;
        nmbrtst+=1;  //increase test number by 1 each lop around
        tests-=1; //decrease tests by 1 each loop around
    }
    while (tests>0); //condition tests>0
    
    //Exit stage right and close
    return 0;
}

