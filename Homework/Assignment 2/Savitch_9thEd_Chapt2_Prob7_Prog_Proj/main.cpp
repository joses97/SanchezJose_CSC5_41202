/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Interest on item
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
    float cost, years;  //cost of item, years until item is purchased
    float rate, adjrate;//rate of inflation, rate in percentage form
    //Input data for cost, years, and rate
    cout<<"This program calculates the cost of an item years "
            "into the future"<<endl;
    cout<<"What is the total cost of the item?"<<endl;
    cin>>cost;
    cout<<"How many years until this item is purchased?"<<endl;
    cin>>years;
    cout<<"What is the yearly inflation rate?"<<endl;
    cin>>rate;
    
    //Calculation for adjrate
    adjrate=rate/100;   
    //Condition
    do { //use loop to calculate cost and years while years>0
        cost=(cost+cost*adjrate);
        years=years-1; 
    } while (years>0);
    
    //Output the results
    cout<<"The cost of the item will be "<<cost<<" dollars"<<endl;
    
    //Exit stage right and close
    return 0;
}

