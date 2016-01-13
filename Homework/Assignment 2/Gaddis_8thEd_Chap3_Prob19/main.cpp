/* 
    File:   main.cpp
    Author: Jose Sanchez
    Created on January 13, 2016, 08:45 AM
    Purpose:  Car Payment
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
unsigned short CNVPRC=12*100;//Percent per month

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short  loanAmt;//Car Loan Amount $'s
    unsigned short  intRate;//Interest Rate %
    unsigned short  nMonths;//Number of Payments (months)
    float           payment;//Payment $'s
    float           intrest;//Total interest paid
    
    //Input data
    cout<<"Car Loan Payment Calculator"<<endl;
    cout<<"Input Loan Amount for Car"<<endl;
    cin>>loanAmt;
    cout<<"Input Number of monthly payments"<<endl;
    cin>>nMonths;
    cout<<"Input the interest rate in percent"<<endl;
    cin>>intRate;
    
    //Calculate or map inputs to outputs
    float temp=static_cast<float>(pow(1+static_cast<float>(intRate)/CNVPRC,nMonths));
    payment=temp*intRate/CNVPRC*loanAmt/(temp-1);
    intrest=nMonths*payment-loanAmt;
    
    //Output the results
    cout<<endl<<"Car Loan Payment Calculator Results"<<endl;
    cout<<"Loan Amount for Car        = $"<<loanAmt<<endl;
    cout<<"Number of monthly payments =  "<<nMonths<<endl;
    cout<<"Interest rate              =  "<<intRate<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Payment            = $"<<payment<<endl;
    cout<<"Interest Paid              = $"<<intrest<<endl;
    

    //Exit stage right
    return 0;
}