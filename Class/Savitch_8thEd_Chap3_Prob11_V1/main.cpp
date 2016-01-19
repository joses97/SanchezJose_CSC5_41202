/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Check out IDE
 * Created on January 4, 2016, 10:18 AM
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

