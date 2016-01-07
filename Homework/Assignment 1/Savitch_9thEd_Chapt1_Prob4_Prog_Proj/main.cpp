/* 
 * File:   main.cpp
 * Author: Jose
 * Savitch Chapter 1 Programming project problem 4
 * Created on January 5, 2016, 8:55 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
unsigned char accl=32; //Acceleration rate is constant at 32

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    unsigned short scnds, dstnc;
    
    //Input the number of seconds
    cout<<"Free-fall Calculator"<<endl;
    cout<<"Please enter seconds elapsed, then press enter."<<endl;
    cin>>scnds;
    
    //Calculation of Distance
    dstnc=scnds*scnds*accl/2;
    
    //Output  total distance
    cout<<"The object would fall a total of "<<dstnc<<" feet";
    cout<<" in "<<scnds<<" seconds"<<endl;
    return 0;
}

