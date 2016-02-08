/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on February 6th 2016
 */

//System Libraries
#include <iostream> //I/O
#include <fstream>  //file input
#include <string>   //strings
#include <iomanip>  //formatting
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    const int ID=7; //max amount for array
    long int empId[ID]{5658845, 4520125, 7895122, 8777541, 
                       8451277, 1302850, 7580489};  //set array values
    int hours[ID];  //array for number of hours
    float payRate[ID];  //array for the pay rate
    float wages[ID];    //array for the wages
    
    //Explain program 
    cout<<"Gaddis 8thEd Chapter 7 Problem 9"<<endl;
    cout<<"This program takes user enter hours and payrate and finds wages"<<endl;
    
    //set decimal 2
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //for loop to input hours worked and payrate, calculates wage 
    for(int i=0; i<ID; i++){
        cout<<"Enter the hours for employee "<<i+1<<" ID:"<<empId[i]<<endl;
        cin>>hours[i];
        while(hours[i]<0){
            cout<<"Invalid hours. Enter a valid number"<<endl;
            cin>>hours[i];
        }
        cout<<"Enter the pay rate of employee "<<i+1<<" ID:"<<empId[i]<<endl;
        cin>>payRate[i];
        while(payRate[i]<15){
            cout<<"Invalid pay rate. Enter a valid pay rate"<<endl;
            cin>>payRate[i];
        }
        wages[i]=hours[i]*payRate[i];
        cout<<"Employee "<<i+1<<" ID:"<<empId[i]<<" is owed $"<<wages[i]<<endl;
    }
    
    return 0;
}

