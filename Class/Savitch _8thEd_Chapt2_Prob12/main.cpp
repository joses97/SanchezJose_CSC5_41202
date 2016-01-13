/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Check out IDE
 * Created on January 13, 2016, 10:52AM
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
    //Declare and initialize variables 
    float n;//Input the value to obtain its square root
    float r, guess;
    
    //Input data
    cout<<"Input the value to take the square root of "<<endl;
    cin>>n;
    //approx square root
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The input value = "<<n<<endl;
    cout<<"The square of "<<n<<" = "<<sqrt(n)<<endl;
    cout<<"The first pass r = "<<r<<endl;
    cout<<"The first pass guess  = "<<guess<<endl;
    
    //approx square root
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The second pass r = "<<r<<endl;
    cout<<"The second pass guess  = "<<guess<<endl;
    
    //approx square root
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The third pass r = "<<r<<endl;
    cout<<"The third pass guess  = "<<guess<<endl;
    
    //approx square root
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The fourth pass r = "<<r<<endl;
    cout<<"The fourth pass guess  = "<<guess<<endl;
    
    //approx square root
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The fifth pass r = "<<r<<endl;
    cout<<"The fifth pass guess  = "<<guess<<endl;    
    
    //approx square root
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The sixth pass r = "<<r<<endl;
    cout<<"The sixth pass guess  = "<<guess<<endl;
    
    //Exit stage right and close
    return 0;
}

