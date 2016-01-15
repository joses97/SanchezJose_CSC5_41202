/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: calculate room capacity
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
    unsigned short cap;     //capacity of the room
    unsigned short ppl;     //number of people in the room
    unsigned short diff;    //difference in capacity and people
    unsigned short diff2;   //difference in people and capacity
    //Input data for capacity and people
        cout<<"What is the capacity of the room?"<<endl;
        cin>>cap;
        cout<<"How many  people are in the room?"<<endl;
        cin>>ppl;
    //Calculate for difference and difference2
        diff=cap-ppl;
        diff2=ppl-cap;
        
    //If statement to test if people is more, less, or equal to capacity
    if (ppl<=cap) { //while the input is valid 
                    //display number of people, capacity, and difference
            cout<<"There are "<<ppl<<" in the room with a capacity "
                    "of "<<cap<<endl;
            cout<<"You have met the legal standards and can "
                    "fit "<<diff<<" more people"<<endl;
    }else if (ppl>cap){ //while the input is valid 
                        //display number of people, capacity, and difference2
            cout<<"The meeting cannot be held because the room is over "
                    "capacity by "<<diff2<<" people"<<endl;
    }


    //Exit stage right and close
    return 0;
}

