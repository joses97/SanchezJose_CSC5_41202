/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Savitch chapter 1 Problem 1 Programming Projects
 * Created on January 5, 2016, 5:37 PM
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char nmbr1=20; //First number
const char nmbr2=8;// Second Number

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    
    //Declare and Initialize 
    unsigned char addR, mltiR; //Results of addition and multiplication
  
    //Calculate Addition and Multiplication
    addR  = nmbr1 + nmbr2;
    mltiR = nmbr1 * nmbr2;
    
    //Output
    cout<<"20 and 8 are added together"<<endl;
    cout<<"Then 20 and 8 are multiplied together"<<endl;
    cout<<"The sum of 20 and 8 is ";
    cout<<static_cast<int>(addR)<<endl;
    cout<<"The product of 20 and 8 is ";
    cout<<static_cast<int>(mltiR)<<endl;
    
    //Exit stage right
    return 0;
}

