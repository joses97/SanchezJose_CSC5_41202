
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Buoyancy
 * Created on January 21, 2016 3:00PM
 */

//System Libraries
#include <iostream> //I/O
#include <cmath>    //for pi fucntion 
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare variables
    float weight; //weight for sphere
    float radius; //radius of sphere
    float volume; //volume of the sphere
    float buoy;   //calculation for buoyancy
    //Explanation for program
    cout<<"Solution to Savitch 9thEd Chapter 3 Programming Project "
            "Problem 6"<<endl;
    cout<<"Hello this program will help you with finding if an object "
            "is buoyant"<<endl;
    //Input the weight and the radius of the sphere
    cout<<"Please input the weight of the sphere in pounds"<<endl;
    cin>>weight;
    cout<<"Please enter the radius of the sphere"<<endl;
    cin>>radius;
    
    //calculations for volume of the sphere
    volume=(4.0f/3.0f)*M_PI*(radius*radius*radius);
    cout<<volume<<endl;
    //calculate value for buoyancy 
    buoy=volume*62.4f;
    cout<<buoy<<endl;
    
    //if statements for buoyancy test 
    if (buoy>=weight){ //if buoy>=weight, 
        cout<<"The sphere you entered will float!"<<endl;//sphere floats!
    }else {            //else 
        cout<<"There sphere you entered will sink!"<<endl; //sphere sinks
    }
    
    //Exit stage right and close
    return 0;
}

