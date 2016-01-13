/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on January 4, 2016, 10:18 AM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    const float incr=0.076f;
    float salary, retro, retroT, retroM; 
    string ans;
    //Input data
    do {cout<<"How much did you earn in salary last year"<<endl;
    cin>>salary;
    //Calculate or map inputs to outputs
    retro=0.5*salary*0.076f;
    retroT=retro+salary;
    retroM=(salary/12)+(retro/6);
    //Output the results
    cout<<"You are owed an extra "<<retro<<" Dollars for the 6 month period"<<endl;
    cout<<"Your new annual salary is "<<retroT<<" Dollars"<<endl;
    cout<<"Your monthly salary during those 6 months will be "<<retroM<<" dollars"<<endl;
    cout<<"Continue? Yes or No"<<endl;
    cin>>ans;}
    while (ans=="Yes"||ans=="yes");
    cout<<"Goodbye"<<endl;
    //Exit stage right and close
    return 0;
}

