
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
float mileper(float miles, float liters);
//Execution Begins Here
int main(int argc, char** argv) {
    //Problem explanation
    cout<<"Solution to Savitch Chapter 3 Practice Problem 1"<<endl;
    //answer to repeat question 
    unsigned char answr; //answer to repeat question to repeat entire program
    do{
        //Declare and initialize variables
        float mls; //number of miles traveled by the user
        float lts; //number of liters consumed by the users car
        float glns; //number of gallons used by the car
        float mlsperg; // miles per gallon 

        //Input miles and liters
        cout<<"This program Takes liters consumed and miles "
                "traveled and converts it to miles per gallon"<<endl;
        cout<<"How many miles have you traveled?"<<endl;
        cin>>mls;     //input miles traveled
        cout<<"How many liters have you consumed?"<<endl;
        cin>>lts;    //input liters used

        //output mpg
        cout<<"Your car had an efficiency of "
                ""<<fixed<<showpoint<<setprecision(2)
                <<mileper(mls, lts) <<""
                " miles per gallon"<<endl;
        //input ask user if they wish to repeat
        cout<<"Would you like to try testing again? Y or N"<<endl;
        cin>>answr;
    }while(toupper(answr)=='Y');
    //Exit stage right and close
    return 0;
}float mileper(float miles, float liters){ //miles and liters
    float mpg;  //miles per gallon
    float gallons;  //gallons
    gallons=liters*LPERG;   //calculate gallons 
    mpg=miles/gallons;     //calculate miles per gallon
    return mpg;
}

