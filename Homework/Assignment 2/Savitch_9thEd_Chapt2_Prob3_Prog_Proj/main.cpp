/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Calculate bonus pay with month variable
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
    float months;                   //months received bonus pay
    float cnvMnth;                  // months of the year with extra pay
    //Input data
        cout<<"This program calculates bonus pay at 7.6% "<<endl;
        cout<<"How much did you earn in salary last year"<<endl;
        cin>>salary;            //input salary earned
        cout<<"How many months of that year did you receive the bonus pay?"<<endl;
        cin>>months;            //input number of months with extra salary
    //Calculate or map inputs to outputs
        cnvMnth=months/12;              // months of the year with extra pay
        retro=cnvMnth*salary*0.076f;    //calculate retro pay
        retroT=retro+salary;            //calculate new salary
        retroM=(retro/months)+(salary/12);//monthly pay in increased pay period
    //Output the results for retro, months, retroT, retroM
        cout<<"You are owed an extra "<<retro<<" Dollars for the"
                " "<<months<<" months worked"<<endl;
        cout<<"Your new annual salary is "<<retroT<<" Dollars"<<endl;
        cout<<"Your monthly salary during those "<<months<<" months will be "
                ""<<retroM<<" dollars"<<endl;
    //Exit stage right and close
    return 0;
}

