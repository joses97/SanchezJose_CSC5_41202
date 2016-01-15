/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Babylonian square root calculator
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
    float n;//Input the value to obtain its square root
    float r, guess;
    float tol=0.001f;//Accuracy of the result/tolerance
    //Input data
    cout<<"Input the value to take the square root of "<<endl;
    cin>>n;         //input number wanting to take square root of
    //approx square root
    guess=n/2; //calculates for guess 
    r=n/guess;  //calculates for r
    guess=(guess+r)/2;      //calculates for the new guess
    
    //Output the results
    cout<<"The input value = "<<n<<endl;    //output the value
    cout<<"The square of "<<n<<" = "<<sqrt(n)<<endl;//output the square root
    cout<<"The first pass r = "<<r<<endl;           //output r
    cout<<"The first pass guess  = "<<guess<<endl;  //output first guess
    
    //approx square root
    do {
        r=n/guess;
        guess=(guess+r)/2;
    }   while (abs((r-guess)/guess)*100>tol); //ends the loop when close enough 
    //Output the results
    cout<<"The r = "<<r<<endl;
    cout<<"The guess  = "<<guess<<endl;
    
    //Exit stage right and close
    return 0;
}

