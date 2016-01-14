/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Check out IDE
 * Created on January 13, 2016, 10:52AM
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
    int tests, score, max, nmbrtst=1;
    //Input data
    cout<<"How many test would you like to average?"<<endl;
    cin>>tests;
    //Calculations
    do {
        cout<<"Please enter test score"<<endl;
        cin>>score;
        cout<<"Please enter total amount possible"<<endl;
        cin>>max;
    //Calculations 
        cout<<"Score received for test "<<nmbrtst<<endl;
        nmbrtst+=1;
        tests-=1;
    }
    while (tests>0);
    //Condition
    
    //Output the results
    
    //Exit stage right and close
    return 0;
}

