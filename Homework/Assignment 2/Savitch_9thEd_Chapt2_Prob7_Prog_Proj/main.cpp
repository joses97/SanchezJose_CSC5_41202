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
    float cost, years, rate, adjrate;
    //Input data
    cout<<"What is the total cost of the item?"<<endl;
    cin>>cost;
    cout<<"How many years until this item is purchased?"<<endl;
    cin>>years;
    cout<<"What is the yearly inflation rate?"<<endl;
    cin>>rate;
    
    //Calculations
    adjrate=rate/100;
    //Condition
    do {
        cost=(cost+cost*adjrate);
        years=years-1;
        
    }
    while (years>0);
    cout<<"The cost of the item will be "<<cost<<" dollars"<<endl;
    
    //Output the results
    
    //Exit stage right and close
    return 0;
}

