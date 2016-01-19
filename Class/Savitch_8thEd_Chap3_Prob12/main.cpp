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
    float pi, nTerms, x;
    //Input the value x
    cout<<"How many terms would you like to test for "<<endl;
    cin>>nTerms;
    
    //Calculate pi
    for (x<3.14;x>=3.14;pi=4*((pow(-1,nTerms))/(2*nTerms+1)));
    cout<<pi<<endl;
  

    
    //Output the results

    //Exit stage right and close
    return 0;
}

