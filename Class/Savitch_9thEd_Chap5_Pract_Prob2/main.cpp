/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Savitch 9thEd Chapter 5 problem 2
 * Created on February 2nd, 2016 7:44 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
int input(int& feet, int& inches); //user inputs the feet and inches
int ftToMe(int feet, int inches); //converts feet and inches to meters and centimeters
float meToCm(int feet, int inches);
void output(int feet, int inches);


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables  
    int feet=0, inches=0; //feet and inches
    
    //set decimal place output to 3
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Savitch 9thEd Chapter 5 Problem 2"<<endl;
    cout<<"This program will convert feet and inches to meters and centimeters"<<endl;
    input(feet, inches); //user inputs the feet and inches
    output(feet, inches);            //output the results
    
    
    
    //Exit stage right and close
    return 0;
}





int input(int& feet, int& inches){
    cout<<"Please input the feet and inches separated by a space"<<endl;
    cin>>feet>>inches;
}
int ftToMe(int feet, int inches){
    int totImp=feet*12+inches;      //calculate total number of inches
    int meters=totImp/39.3701f;   //calculates the number of meters
    return meters;
}
float ftToCm(int feet, int inches){
    float totImp=feet*12+inches;      //calculate total number of inches
    float meters=totImp/39.3701f;   //calculates the number of meters
    float centi=(meters-ftToMe(feet, inches))*100;
    return centi;
}
void output(int feet, int inches){
    cout<<"You had "<<feet<<" feet and "<<inches<<" inches"<<endl;
    cout<<"This converts to "<<ftToMe(feet, inches)<<" meters and "
            ""<<ftToCm(feet, inches)<<" centimeters"<<endl;
}