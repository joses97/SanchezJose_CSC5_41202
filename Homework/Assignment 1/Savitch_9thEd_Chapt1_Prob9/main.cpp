/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Savitch 9thEd chapter 1 problem 9
 * Created on January 5, 2016, 6:08 PM
 */

/*
 * Purpose: To calculate worth of coins in cent value
 */
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    cout<<"Penny Calculator, Calculates penny value of Coins"<<endl;
    int Qtr, Dms, Nkl;                                 //Quarters dimes nickels.
    cout<<"Press enter after entering numbers"<<endl;
    cout<<"Enter number of Quarters"<<endl;
    cin>>Qtr;
    int penQ = 25 * Qtr;                     //penQ = Pennies worth of Quarters
    cout<<penQ<<" pennies worth of Quarters"<<endl;
    cout<<"Enter number of Dimes"<<endl;
    cin>>Dms;            
    int penD = 10 * Dms;                         //penD = pennies worth of dimes
    cout<<penD<<" pennies worth  of dimes"<<endl;
    cout<<"Enter number of Nickels"<<endl;
    cin>>Nkl;
    int penN = 5 * Nkl;                       //penN = pennies worth of nickels
    cout<<penN<<" pennies worth of nickels"<<endl;
    int penF = penQ + penD + penN;     //penF represents final number of pennies
    cout<<"Total number of pennies are ";
    cout<<penF;
    return 0;
}

