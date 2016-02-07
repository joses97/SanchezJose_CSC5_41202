/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on February 6th 2016
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    const int SIZE=12;  //size of the array
    float rain[SIZE];   //array for rain fall
    string month[SIZE] = {"January", "February", "March", "April", "May", "June"
    , "July", "August", "September", "October", "November", "December"};
    float total=0.0f;   //total amount of rainfall
    float avg;          //average rainfall for the year
    float min=0.0f;     //lowest rainfall
    float max=0.0f;     //highest rainfall for the year
    string high;         //highest month rainfall
    string low;          //lowest month rainfall
    
    //set decimal places to 2
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    //tell user to input the rain fall per month
    for(int i=0;i<SIZE;i++){
        cout<<"Please input rainfall for month "<<month[i]<<endl;
        cin>>rain[i];
    }
    
    //set the min and max equal to rain[0]
    min=rain[0];
    max=rain[0];
    //calculate total rainfall for the year
    for(int i=0;i<SIZE;i++){
        //calculate total amount of rainfall
        total+=rain[i];
        //find the maximum value for rainfall, and the highest month
        if(rain[i]>max){
            max=rain[i];
            high=month[i];
        }
        //find the minimum value for rainfall, and lowest month
        if(rain[i]<min){
            min=rain[i];
            low=month[i];
        }
    }
    //calculate the average for each month 
    avg=total/SIZE;
    
    cout<<"The total rainfall was "<<total<<endl;
    cout<<"The average monthly rainfall was  "<<avg<<endl;
    cout<<"The month with the highest rainfall was "<<high<<" with "<<max<<endl;
    cout<<"The month with the lowest rainfall was  "<<low<<" with "<<min<<endl;
    
    //Exit stage right and close
    return 0;
}

