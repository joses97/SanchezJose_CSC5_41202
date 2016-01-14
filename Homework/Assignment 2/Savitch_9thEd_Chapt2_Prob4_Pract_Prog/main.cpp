/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Check out IDE
 * Created on January 13, 2016, 10:52AM
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    int mins;
    float sec, mph;
    //Input data
    cout<<"Enter the Miles Per Hour"<<endl;
    cin>>mph;
    
    //Calculations
    mins=(1/(mph/60));
    sec=((1/(mph/60))-mins)*60;
    //Output the results
    cout<<"The speed will be "<<mins<<" minutes per mile with "<<sec<<" "
            "seconds"<<endl;
    
    //Exit stage right and close
    return 0;
}

