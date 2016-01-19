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
    float etox=1,x;//e^x
    //Input the value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //Calculate e^x
    for (int n=1;n<nTerms;n++){
        //Declare and initialize variables 
        unsigned int factN=1;//N and N!

        //Calculate or map inputs to outputs
        for (int i=1; i<=n;i++){
            factN*=i;
        }
        //Calculate e^x with the above factorial
        etox+=pow(x,n)/factN;
    }
    //Output the results
    cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
    cout<<"The approx value of e^"<<x<<"="<<etox<<endl;
    //Exit stage right and close
    return 0;
}

