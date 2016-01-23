
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: liter and miles to mpg
 * Created on January 22 2016, 2:00PM
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Set precision 
using namespace std;

//User Libraries

//Global Constants
//Problem said to make this a global constant
const float LPERG=0.264179f; //conversion 1 gallon = 0.264179 liters
//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Problem explanation
    cout<<"Solution to Savitch Chapter 3 Practice Problem 1"<<endl;
    //Declare and initialize variables
    float miles; //number of miles traveled by the user
    float liters; //number of liters consumed by the users car
    float gallons; //number of gallons used by the car
    float mpg; // miles per gallon 
    
    //Input miles and liters
    cout<<"This program Takes liters consumed and miles "
            "traveled and converts it to miles per gallon"<<endl;
    cout<<"How many miles have you traveled?"<<endl;
    cin>>miles;     //input miles traveled
    cout<<"How many liters have you consumed?"<<endl;
    cin>>liters;    //input liters used
    
    //calculations
    gallons=liters*LPERG; //finding gallons, 
    mpg=miles/gallons;    //finding miles per gallon
    
    //output mpg
    cout<<"Your car had an efficiency of "
            ""<<fixed<<showpoint<<setprecision(2)<<mpg<<" miles per gallon"<<endl;
    //Exit stage right and close
    return 0;
}

