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
    int mins;                //whole minutes per mile
    float sec, mph;          //remaining seconds per mile, miles per hour
    //Input data for mph
    cout<<"Enter the Miles Per Hour"<<endl;
    cin>>mph;
    
    //Calculations
    mins=(1/(mph/60));      //calculate whole minutes per mile pace
    sec=((1/(mph/60))-mins)*60;//remaining seconds per mile pace, 
    //Output the results minutes per mile, then the remaining seconds per mile
    cout<<"The speed will be "<<mins<<" minutes per mile with "<<sec<<" "
            "seconds"<<endl;
    
    //Exit stage right and close
    return 0;
}

