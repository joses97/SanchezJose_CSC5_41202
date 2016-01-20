/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Find when Fahrenheit == Celsius 
 * Created on January 20, 2016
 */

//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //random function
#include <cmath>    
#include <iomanip> 
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The Problem to solve
    cout<<endl<<"Solution to Gaddis 8thEd Chap 5 Prob12"<<endl;
    cout<<endl<<"Display a temperature table"<<endl<<endl;
    
    //Declare variables
    float slope=5.0f/9;//Slope of the line for temp conversion c/f
    char intrcpt=-32;   //Scale 9/5 degrees c
    unsigned char c1=0, c2=100, f1=32, f2=212;//Data points of freezing a boiling
    
    //Loop to generate the degree Celsius and output the table 
    cout<<"Fahrenheit   Celsius   Celsius"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for (int f=f1;f<=f2;f++){
        float ceq=slope*(f+intrcpt);
        float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
        cout<<setw(10)<<f<<setw(10)<<ceq<<setw(10)<<cintrp<<endl;
    }
    
    //Players turn
    
    //Keep playing

    //Exit stage right and close
    return 0;
}

