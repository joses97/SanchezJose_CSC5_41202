/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Calculate bonus pay 
 * Created on January 12, 2016
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
    const float incr=0.076f;        //increase in pay percent
    float salary;                   //salary for the year
    float retro;                    //bonus money earned, 
    float retroT;                   //total salary with bonus
    float retroM;                   //salary during bonus pay months
    //Input data
    cout<<"How much did you earn in salary last year"<<endl;
    cin>>salary;                    //input salary
    //Calculate or map inputs to outputs
    retro=0.5*salary*0.076f;        //calculation for retro
    retroT=retro+salary;            //calculation for retroT
    retroM=(salary/12)+(retro/6);   //calculation for retroM
    //Output the results fore retro, retroT, and retroM, 
    cout<<"You are owed an extra "<<retro<<" Dollars for the 6 month period"<<endl;
    cout<<"Your new annual salary is "<<retroT<<" Dollars"<<endl;
    cout<<"Your monthly salary during those 6 months will be "<<retroM<<" dollars"<<endl;
    //Exit stage right and close
    return 0;
}

