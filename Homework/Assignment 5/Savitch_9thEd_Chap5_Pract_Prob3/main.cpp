/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Savitch 9thEd Chapter 5 problem 3
 * Created on February 3nd, 2016 7:44 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void input(int& meters, int& centi);
int calcCm(int meters, int centi);
int cmToft(int meters, int centi);
float ftToInc(int meters, int centi);
void output(int meters, int centi);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    int meters=0, centi=0;//the initial amount of meters and centimeters
    
    //set all out puts to two decimal places
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    //explain program 
    cout<<"Savitch 9thEd Chapter 5 problem 3"<<endl;
    cout<<"This program will convert meters and centimeters to feet and inches"<<endl;
    input(meters, centi);   //run input function to input the meters and centimeters
    output(meters, centi);  //run output function to output the results
    
  
    //Exit stage right and close
    return 0;
}
//******************************************************************************
//***********************input the meters and centimeters**********************
//******************************************************************************
void input(int& meters, int& centi){
    cout<<"Please input meters and centimeters separated by a space"<<endl;
    cin>>meters>>centi;
}
//******************************************************************************
//************************calculate centimeters*********************************
//******************************************************************************
int calcCm(int meters, int centi){
    int tot=meters*100.0f+centi;
    return tot;
}
//******************************************************************************
//***************************centimeters to feet*******************************
//******************************************************************************
int cmToft(int meters, int centi){
    int feet=calcCm(meters, centi)/30.48f;
    return feet;
}
//******************************************************************************
//*****************************feet to inches***********************************
//******************************************************************************
float ftToInc(int meters, int centi){
    float inch=calcCm(meters, centi)/30.48f-cmToft(meters, centi);
    float totInch=inch*12;
    return totInch;
}
//******************************************************************************
//******************************output feet and inches*************************
//******************************************************************************
void output(int meters, int centi){
    cout<<"There are "<<cmToft(meters, centi)<<" feet";
    cout<<" and "<<ftToInc(meters, centi)<<" inches ";
    cout<<"in "<<meters<<" meters and "<<centi<<" centimeters"<<endl;
}