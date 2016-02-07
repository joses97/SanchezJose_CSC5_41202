/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on February 6th 2016
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    const int ID=7;
    long int empId[ID]{5658845, 4520125, 7895122, 8777541,
                        8451277, 1302850, 7580489};
    int hours[ID];
    float payRate[ID];
    float wages[ID];
    
    //set decimal 2
    cout<<fixed<<setprecision(2)<<showpoint;
    
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

