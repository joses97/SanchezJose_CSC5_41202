/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: convert 24 hour clock to 12 hour clock 
 * Created on February 4, 2016
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
int input(int& hour, int& min);
int hrConv(int hour);

//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    int hour=0, min=0; //initial time for the clock
    
    //output program description
    cout<<"Savitch 9thEd "<<endl;
    cout<<"This program converts from a 24 hour format to a 12 hour format"<<endl;
    input(hour, min);

    //Exit stage right and close
    return 0;
}
int input(int& hour, int& min){
    cout<<"Please input the  hour and minutes on the 24 hour clock separated by a space"<<endl;
    cin>>hour>>min;
}
int hrConv(int hour){
    int hr12;
    if (hour>12){
        hr12=hour-12;
    }else {
        hr12=hour;
    }
    return hr12;
}




