/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: create table of velocities and temperatures
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
    int temp1, temp2; //temp1 is first temp, temp 2 second temp
    float vel;        //velocity
    //Input data
    cout<<"This program creates a table of temperature and its relation to "
            "velocity"<<endl;
    cout<<"Please input the lower of the two temperature "<<endl;
    cin>>temp1;             //input temp1
    cout<<"Please input the higher of the two temperature "<<endl;
    cin>>temp2;             //input temp2
    
    //calculate and output the results
    do {                     //loop to create table of velocities
        vel=331.3+.61*temp1; //equation for velocity
        cout<<"At "<<temp1<<" degrees Celsius the velocity of sound is"
                " "<<vel<<" meters per second"<<endl;
        temp1+=1;            //temp1 increases by 1
    }
    while (temp2>=temp1);   //ends loop once temp1 is greater
    
    //Exit stage right and close
    return 0;
}

