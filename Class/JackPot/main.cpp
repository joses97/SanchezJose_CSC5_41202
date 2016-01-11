/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Jackpot
 * Created on January 11, 2016
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
    float Jackpot, lumpsum, aftrtx, mrrge;
    //Input data
    cout<<"What is the Jackpot in millions"<<endl;
    cin>>Jackpot;
    
    //Calculate or map inputs to outputs
	lumpsum=Jackpot*0.62;
	aftrtx=lumpsum*0.52;
	mrrge=aftrtx*0.50;
    
    //Output the results
	cout<<"Jackpot is "<<Jackpot<<" million"<<endl;
    cout<<"The lumpsum is "<<lumpsum<<" million"<<endl;
	cout<<"The after tax value is "<<aftrtx<<" million"<<endl;
	cout<<"The marriage fee is "<<mrrge<<" million"<<endl;
    
    //Exit stage right and close
    return 0;
}