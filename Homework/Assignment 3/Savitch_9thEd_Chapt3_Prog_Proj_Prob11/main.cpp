
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: PI calculator
 * Created on January 20, 2016 10:00PM
 */

//System Libraries
#include <iostream> //I/O
#include <cmath>    //for power function

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n; //Number of terms to calculate PI to
    float pi, piFin; //pi value given after calculations
    
    //Input terms and explanation 
    cout<<"This program estimates pi"<<endl;
    cout<<"Please enter the number of terms you would like to estimate"
            "PI to"<<endl;
    cin>>n;
    
    //Calculate pi to number of terms using while loop;
    pi=1; //to have for the initial addition of 1
    while (n>0){
        pi=pow((-1),n)/(2*n+1)+pi;
        cout<<pi<<endl;
        n--;
    }
    piFin=pi*4;
        cout<<"The Approximation for PI "<<piFin<<endl;
    //Exit stage right and close
    return 0;
}

