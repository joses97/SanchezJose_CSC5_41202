/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: find factorial of N
 * Created on January 20 2016
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Output question number, chapter, book
    cout<<"Solution to Savitch 8thEd Chapt3 Problem 11"<<endl;
    cout<<"Factorial of N"<<endl;
    //Declare and initialize variables 
    unsigned int n, factN=1;//N and N!
    //Input data
    cout<<"Enter the number you would like to compute the factorial n!"<<endl;
    cout<<"The limit of this calculation is <=13"<<endl;
    cin>>n;
    
    //Calculate or map inputs to outputs
    for (int i=1; i<=n;i++){
        factN*=i;
    }
    //Output the results
    cout<<n<<"! = "<<factN<<endl;
    
    //Exit stage right and close
    return 0;
}

