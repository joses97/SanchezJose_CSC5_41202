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
float input(int& feet, int& inches);
float ftToMe(int& feet, int& inches);
float ftToCm(int& feet, int& inches);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables  
    int feet=0, inches=0;
    input(feet, inches);

    
    //Exit stage right and close
    return 0;
}
//******************************************************************************
//****************************Convert feet to inches****************************
//******************************************************************************
float ftToMe(int& feet, int& inches){
    int inch=feet*12+inches;
    int meter=inch/39.3701f;
    return meter;
    
}
//******************************************************************************
//****************************Convert inches to meters**************************
//******************************************************************************
float ftToCm(int& feet, int& inches){
    int inch=feet*12+inches;
    float meter=inch/39.3701f;
    float centi=(meter-ftToMe(feet, inches))*100;
    return centi;
}
//******************************************************************************
//****************************Convert inches to meters**************************
//******************************************************************************
float input(int& feet, int& inches){
    cout<<"Input the feet and inches seperated by a space"<<endl;
    cin>>feet>>inches;
}