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
    float         payRate=1e1f;  //Pay Rate in 's/hour
    unsigned char hrsWrkd=40;    // Hours worked (hrs)
    
    //Calculate or map inputs to outputs
    float payChk=payRate*hrsWrkd;
    
    //Output the results
    cout<<"Pay Rate = $"    <<payRate<<"/hr"<<endl;
    cout<<"Hours Worked = " <<static_cast<int>(hrsWrkd)<<" hours"<<endl;
    cout<<"Pay Check = $"   <<payChk<<endl;
    
    //Exit stage right
    return 0;
}

