/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Uses loop to end calculation
 * Created on January 14, 2016, 10:29
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    float n;//Input the value to obtain its square root
    float r, guess;
    float tol=0.001f;//Accuracy of the result/tolerance
    int   counter;//see how many loops it took ti find the answer
    //Input data
    cout<<"Input the value to take the square root of "<<endl;
    cin>>n;
    //approx square root
    guess=n/2;
    
    //Output the results
    cout<<"The input value = "<<n<<endl;
    cout<<"The square of "<<n<<" = "<<sqrt(n)<<endl;

    
    //approx square root
   for (counter=0;abs((r-guess)/guess)*100>tol;counter++){
        r=n/guess;
        guess=(guess+r)/2;
        counter++;
    }
    //Output the results
    cout<<"The r = "<<r<<endl;
    cout<<"The guess  = "<<guess<<endl;
    cout<<"Loops executed = "<<counter<<endl;
    
    //Exit stage right and close
    return 0;
}

