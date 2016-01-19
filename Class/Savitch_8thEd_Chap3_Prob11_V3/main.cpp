/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Calculate e^x
 * Created on January 4, 2016, 11:01 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables for e^x
    const unsigned char nTerms=13;
    float tol=1e-6f,term=1,etox=1, x;//e^x
    float nTerm=1; //counter to determine how many terms
    //Input the value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //Calculate e^x
    for (nTerm=1; term>tol;term*=x/nTerm++,etox+=term);
    
    //Output the results
    cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
    cout<<"The number of terms it took to approx e^ "<<x<<" is "<<nTerm<<endl;
    cout<<"The approx value of e^"<<x<<"="<<etox<<endl;
    //Exit stage right and close
    return 0;
}

