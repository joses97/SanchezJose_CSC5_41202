/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on January 22 2016, 2:00PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //output Hello World
    int vals[]{4,7,11}, *valp;
    valp=vals;;
    
    cout<<*(valp+2)<<endl;
    
    //Exit stage right and close
    return 0;
}

