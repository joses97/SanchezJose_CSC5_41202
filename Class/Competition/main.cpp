/* 
 * File:   main.cpp
 * Author: Jose Sanchez, Luis Almazan
 * Purpose: Tax
 * Created on January 13, 2016
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
    int income;
    float netinc, taxes;
    //Input data
    cout<<"How much do you earn a year?"<<endl;
    cin>>income;
    
    //Calculate or map inputs to outputs
    if (income<5000) {
        netinc=income;
        taxes=0; }    
    if (income>5000&&income<=10000) {
        netinc=(income-((income-5000)*.1)); }
    if (income>10000&&income<=15000) {
        taxes=((income-10000)*.15)+(500);
        netinc=income-taxes;}
    if (income>15000&&income<=20000) {
        taxes=((income-15000)*.2)+(1250);
        netinc=income-taxes;}
    if (income>20000&&income<=25000) {
        taxes=((income-20000)*.25)+(2250);
        netinc=income-taxes;}
    if (income>25000&&income<=30000) {
        taxes=((income-25000)*.3)+(3500);
        netinc=income-taxes;}
    if (income>30000&&income<=35000) {
        taxes=((income-30000)*.35)+(5000);
        netinc=income-taxes;}
    if (income>35000&&income<=40000) {
        taxes=((income-35000)*.4)+(6750);
        netinc=income-taxes;}
    cout<<"Your net income is "<<netinc<<" dollars"<<endl;
    cout<<"You are taxed "<<taxes<<" Dollars"<<endl;
    
        
    
    //Output the results

    
    //Exit stage right and close
    return 0;
}

