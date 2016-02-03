/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Savitch 9thEd Chapter 5 problem 2
 * Created on February 2nd, 2016 7:44 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
float ftToIn(int feet, int inches);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables  
    int feet, inches; //feet and inches 
    //Input the feet and inches
    cout<<"Savitch 9thEd Chaoter 5 Practice Rroblem 2"<<endl;
    cout<<"This program will convert feet and inches to meters and centimeters"<<endl;
    cout<<"Please input the feet and inches separated by a space"<<endl;
    cin>>feet>>inches;
    cout<<ftToIn(feet, inches)<<endl;
    
    
    //Exit stage right and close
    return 0;
}
//******************************************************************************
//****************************Convert feet to inches****************************
//******************************************************************************
float ftToIn(int feet, int inches){
    int inch=feet*12+inches;
    return inch;
}