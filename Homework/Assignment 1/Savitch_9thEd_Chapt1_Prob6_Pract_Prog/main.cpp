/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Savitch 9thEd chapter 1 problem 6
 * Created on January 5, 2016, 6:08 PM
 */

/*
 * Purpose:Create errors and document them. 
 */
#include <iostream> //space between < and iostream FIXED

using namespace std;
int main(int argc, char** argv) {                     //unable to resolve identifier FIXED
    cout<<"Penny Calculator, Calculates penny value of Coins"<<endl;
    short Qtr, Dms, Nkl;                                //Quarters dimes nickels.
    cout<<"Press enter after entering numbers"<<endl;  //invalid operands of types FIXED
    cout<<"Enter number of Quarters"<<endl;
    cin>>Qtr;
    short penQ = 25 * Qtr;                              //penQ = Pennies worth of Quarters
    cout<<penQ<<" pennies worth of Quarters"<<endl;
    cout<<"Enter number of Dimes"<<endl;
    cin>>Dms;                                          //ci was no declared in this scope FIXED
    short penD = 10 * Dms;                              //penD = pennies worth of dimes
    cout<<penD<<" pennies worth  of dimes"<<endl;
    cout<<"Enter number of Nickels"<<endl;
    cin>>Nkl;                                          //penN was not declared, missing ;
    short penN = 5 * Nkl;                               //penN = pennies worth of nickels
    cout<<penN<<" pennies worth of nickels"<<endl;
    short penF = penQ + penD + penN;                    //penF represents final number of pennies
    cout<<"Total number of pennies are ";
    cout<<penF;
    return 0;
}

