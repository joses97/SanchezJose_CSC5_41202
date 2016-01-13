/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on January 12, 2016
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
    float salary, retro, retroT, retroM, months, cnvMnth;
    string ans;
    //Input data
    do {
        cout<<"How much did you earn in salary last year"<<endl;
        cin>>salary;
        cout<<"How many months of that year did you receive the bonus pay?"<<endl;
        cin>>months;
    //Calculate or map inputs to outputs
        cnvMnth=months/12;
        retro=cnvMnth*salary*0.076f;
        retroT=retro+salary;
        retroM=(retro/months)+(salary/12);
    //Output the results
        cout<<"You are owed an extra "<<retro<<" Dollars for the "<<months<<" months worked"<<endl;
        cout<<"Your new annual salary is "<<retroT<<" Dollars"<<endl;
        cout<<"Your monthly salary during those "<<months<<" months will be "<<retroM<<" dollars"<<endl;
        cout<<"Continue? Yes or No"<<endl;
        cin>>ans;}
    while (ans=="Yes"||ans=="yes");
    cout<<"Goodbye"<<endl;
    //Exit stage right and close
    return 0;
}

