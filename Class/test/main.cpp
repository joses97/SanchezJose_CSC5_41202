/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Jackpot
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
    int hours, payrate=800, adjpay=1200, total1, total2;
    //Input data
    cout<<"Input the number hours worked in whole numbers"<<endl;
    cin>>hours;

    //Calculate or map inputs to outputs
    if (hours<5)
        cout<<"4000"<<endl;
    if (hours<8&&hours>5)
        total1=payrate*hours;
        cout<<"You owe "<<total1<<"dollars"<<endl;
    if (hours>8)
        total2=adjpay*hours;
        cout<<"You owe "<<total2<<"dollars"<<endl;
    //Output the results
        cout<<"Work was done for "<<hours<<" you must pay "<<endl;
    //Exit stage right and close
    return 0;
}