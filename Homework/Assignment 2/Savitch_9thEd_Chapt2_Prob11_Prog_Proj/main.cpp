/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Check out IDE
 * Created on January 13, 2016, 10:52AM
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
    int temp1, temp2;
    float vel;
    //Input data
    cout<<"Please input the lower of the two temperature "<<endl;
    cin>>temp1;
    cout<<"Please input the higher of the two temperature "<<endl;
    cin>>temp2;
    
    //Calculations
    do {
        vel=331.3+.61*temp1;
        cout<<"At "<<temp1<<" degrees Celsius the velocity of sound is"
                " "<<vel<<" meters per second"<<endl;
        temp1+=1;
    }
    while (temp2>=temp1);
    //Condition
    
    //Output the results
    
    //Exit stage right and close
    return 0;
}

