/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Savitch 9thEd chapter 1 problem 1
 * Created on January 5, 2016, 6:08 PM
 */

#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    cout<<"Penny Calculator"<<endl;
    int Qtr, Dms, Nkl;    //Quarters dimes nickels.
    cout<<"Enter number of Quarters"<<endl;
    cin>>Qtr;
    int penQ = 25 * Qtr;  //penQ = Pennies worth of Quarters
    cout<<penQ<<endl;
    cout<<"Enter number of Dimes"<<endl;
    cin>>Dms;            
    int penD = 10 * Dms;  //penD = pennies worth of dimes
    cout<<penD<<endl;
    cout<<"Enter number of Nickels"<<endl;
    cin>>Nkl;
    int penN = 5 * Nkl;   //penN = pennies worth of nickels
    cout<<penN<<endl;
    int penF = penQ + penD + penN;    //penF represents final number of pennies
    cout<<"Total number of pennies are ";
    cout<<penF;
    return 0;
}

