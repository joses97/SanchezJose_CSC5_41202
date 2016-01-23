
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
float mileper(float miles, float liters){ //miles and liters
    float mpg;  //miles per gallon
    float gallons;  //number of gallons
    gallons=liters*LPERG;   //calculate number of gallons
    mpg=miles/gallons;      //calculate miles per gallon
    return mpg;
}
//Execution Begins Here
int main(int argc, char** argv) {
    //Problem explanation
    cout<<"Solution to Savitch Chapter 3 Practice Problem 1"<<endl;
    //answer to repeat question 
    unsigned char answr; //answer to repeat question to repeat entire program
    do{
        //Declare and initialize variables
        float mls, mls2; //number of miles traveled by the user
        float lts, lts2; //number of liters consumed by the users car
        float mlsperg, mlsprg2; // miles per gallon 

        //Input miles and liters
        cout<<"This program Takes liters consumed and miles "
                "traveled and converts it to miles per gallon"<<endl;
        cout<<"How many miles did your first car travel?"<<endl;
        cin>>mls;//input miles traveled car1
        cout<<"How many miles did the second car travel?"<<endl;
        cin>>mls2;//input miles traveled car2
        cout<<"How many liters did the first car consume?"<<endl;
        cin>>lts;    //input liters used car1
        cout<<"How many liters did the second car consume?"<<endl;
        cin>>lts2;    //input liters used car2
        //output mpg
        cout<<"Your first car had an efficiency of "
                ""<<fixed<<showpoint<<setprecision(2)
                <<mileper(mls, lts) <<""
                " miles per gallon"<<endl;
        cout<<"Your second car had an efficiency of "
                ""<<fixed<<showpoint<<setprecision(2)
                <<mileper(mls2, lts2) <<""
                " miles per gallon"<<endl;
        if ((mileper(mls, lts))>(mileper(mls2, lts2))){
            cout<<"The first car had a higher fuel efficiency"<<endl;
        }else if ((mileper(mls, lts))<(mileper(mls2, lts2))){
            cout<<"The second car had a higher fuel efficiency"<<endl;
        }else {
            cout<<"The cars had the same fuel efficiency"<<endl;
        }  
        //input ask user if they wish to repeat
        cout<<"Would you like to try testing again? Y or N"<<endl;
        cin>>answr;
    }while(toupper(answr)=='Y');
    //Exit stage right and close
    return 0;
}

