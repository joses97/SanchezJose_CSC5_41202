/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on January 12 2016
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
    unsigned short cap, ppl, diff, diff2;
    //Input data
        cout<<"What is the capacity of the room?"<<endl;
        cin>>cap;
        cout<<"How many  people are in the room?"<<endl;
        cin>>ppl;
    //Calculate or map inputs to output
        diff=cap-ppl;
        diff2=ppl-cap;
        
    //If statements to determine capacity
    if (ppl<=cap) {
            cout<<"There are "<<ppl<<" in the room with a capacity "
                    "of "<<cap<<endl;
            cout<<"You have met the legal standards and can "
                    "fit "<<diff<<" more people"<<endl;
    }else if (ppl>cap){
            cout<<"The meeting cannot be held because the room is over "
                    "capacity by "<<diff2<<" people"<<endl;
    }


    //Exit stage right and close
    return 0;
}

