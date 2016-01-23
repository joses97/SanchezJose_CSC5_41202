
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: miles to gallons calculator
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
    cout<<"Solution to Savitch Chapter 3 Practice Problem 2"<<endl;
    //answr to repeat question
    unsigned char answr; //answer to repeat question 
    do{
        //Declare and initialize variables
        float miles, miles2; //number of miles traveled by the user
        float liters, liters2; //number of liters consumed by the users car
        float gallons, gallons2; //number of gallons used by the car
        float mpg, mpg2; // miles per gallon 

        //Input miles and liters
        cout<<"This program Takes liters consumed and miles "
                "traveled and converts it to miles per gallon"<<endl;
        cout<<"Please enter the miles traveled in the first car and press enter"<<endl;
        cout<<"Then enter the miles traveled of the second car"<<endl;
        cin>>miles>>miles2;     //input miles traveled
        cout<<"Please enter the liters consumed of the first car and press enter"<<endl;
        cout<<"Then enter the liters consumed by the second car"<<endl;
        cin>>liters>>liters2;    //input liters used

        //calculations for car 1
        gallons=liters*LPERG; //finding gallons, 
        mpg=miles/gallons;    //finding miles per gallon

        //calculations for car 2
        gallons2=liters2*LPERG; //finding gallons of second car
        mpg2=miles2/gallons2;    //finding miles per gallon secpnd car

        //output mpg and mpg2
        cout<<"Car 1 had an efficiency of"
                " "<<fixed<<showpoint<<setprecision(2)<<mpg<<" miles per gallon"<<endl;
        cout<<"Car 2 had an efficiency of "<<mpg2<<" miles per gallon"<<endl;
        //if statement to determine which car has a higher miles per gallon 
        if (mpg>mpg2){  //mpg>mpg2
            cout<<"The first car had a higher full efficiency"<<endl;
        }else if(mpg<mpg2){ //mpg<mpg2
            cout<<"The second car had a higher full efficiency"<<endl;
        }else{              //if mpg==mpg2
            cout<<"They had the same fuel efficiency!"<<endl;
        }
        cout<<"Would you like to try testing again? Y or N"<<endl;
        cin>>answr;
    }while(toupper(answr)=='Y');
    //Exit stage right and close
    return 0;
}

