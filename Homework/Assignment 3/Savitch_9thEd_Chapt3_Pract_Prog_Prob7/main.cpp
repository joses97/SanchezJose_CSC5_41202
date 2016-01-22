
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: find when degrees F = degrees C
 * Created on January 20, 2016 7:00 PM
 */

//System Libraries
#include <iostream> //I/O

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //initial variables for c and f
    int f=212, c=100; //fahrenhiet is 212 when c=100 
    //show program problem number and the problem 
    cout<<"Solution to Savitch 9thEd Practice Program Problem 7"<<endl;
    
    //Outputting  and program explanation 
    cout<<"This program find when Celsius = Fahrenheit"<<endl;
    //Do while loop to find when c=f
    do{
        c--;        //lowering c by 1 each loop
        f=(9.0f/5.0f)*c+32; //calculating for f
    }while (f!=c);          //condition, do while f!=c
    //Output when F=C
    cout<<"When Fahrenheit = "<<f<<" degrees Celsius"
                " is also "<<c<<" degrees";       
    //Exit stage right and close
    return 0;
}

