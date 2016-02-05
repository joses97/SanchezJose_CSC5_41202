/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Savitch 9thEd Chapter 5 problem 3
 * Created on February 3nd, 2016 7:44 AM
 */

//System Libraries
#include <iostream>//input output
#include <iomanip>//formatting
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void input3(int& meters, int& centi);//input
int calcCm3(int meters, int centi);  //calculate centimeters
int cmToft3(int meters, int centi);  //calculate feet
float ftToInc3(int meters, int centi);   //calculate the inches
void output3(int meters, int centi);     //output the results

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    int meters=0, centi=0;//the initial amount of meters and centimeters
    
    //set all out puts to two decimal places
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    //explain program 
    cout<<"Savitch 9thEd Chapter 5 problem 3"<<endl;
    cout<<"This program will convert meters and centimeters to feet and inches"<<endl;
    input3(meters, centi);   //run input function to input the meters and centimeters
    output3(meters, centi);  //run output function to output the results
    
  
    //Exit stage right and close
    return 0;
}
//******************************************************************************
//***********************input the meters and centimeters**********************
//******************************************************************************
void input3(int& meters, int& centi){
    cout<<"Please input meters and centimeters separated by a space"<<endl;
    cin>>meters>>centi;
}
//******************************************************************************
//************************calculate centimeters*********************************
//******************************************************************************
int calcCm3(int meters, int centi){
    int tot=meters*100.0f+centi; //calculate centimeters
    return tot;
}
//******************************************************************************
//***************************centimeters to feet*******************************
//******************************************************************************
int cmToft3(int meters, int centi){
    int feet=calcCm3(meters, centi)/30.48f;  //calculate feet
    return feet;
}
//******************************************************************************
//*****************************feet to inches***********************************
//******************************************************************************
float ftToInc3(int meters, int centi){
    float inch=calcCm3(meters, centi)/30.48f-cmToft3(meters, centi);  
    float totInch=inch*12;  //calculate the total amount of inches
    return totInch;
}
//******************************************************************************
//******************************output feet and inches*************************
//******************************************************************************
void output3(int meters, int centi){
    cout<<"There are "<<cmToft3(meters, centi)<<" feet";
    cout<<" and "<<ftToInc3(meters, centi)<<" inches ";
    cout<<"in "<<meters<<" meters and "<<centi<<" centimeters"<<endl;
}