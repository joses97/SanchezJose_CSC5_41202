/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on January 14 201, 11 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    float qwnty=0.25f;//a value to add repeatedly
    float sum=0;//the result of a repetitive addition
    float nloops=10000000;//Number of times to loop
    float answer; //the computed answer
    //Input data
    for (int i=1;i<=nloops;i++) {
        sum+=qwnty;
    }
    
    //Calculate or map inputs to outputs
    answer=nloops*qwnty;
    //Output the results
    cout<<"the product answer = "<<answer<<endl;
    cout<<"The sum answer     = "<<sum<<endl;
    cout<<"The percent error  = "<<(answer-sum)/answer*100<<"%"<<endl;
    //Exit stage right and close
    return 0;
}

