/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Savitch 9thEd Chapter 5 problem 2
 * Created on February 2nd, 2016 7:44 AM
 */

//System Libraries
#include <iostream> //i/o
#include <iomanip>  //formatting
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
int input2(int& feet, int& inches); //user inputs the feet and inches
int ftToMe2(int feet, int inches); //converts feet and inches to meters and centimeters
float meToCm2(int feet, int inches); //calculates the centimeters 
void output2(int feet, int inches);  //outputs the results


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables  
    int feet=0, inches=0; //feet and inches
    
    //set decimal place output to 3
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Savitch 9thEd Chapter 5 Problem 2"<<endl;
    cout<<"This program will convert feet and inches to meters and centimeters"<<endl;
    input2(feet, inches); //user inputs the feet and inches
    output2(feet, inches);            //output the results
    
    
    
    //Exit stage right and close
    return 0;
}
//******************************************************************************
//***************************input***********************************************
//******************************************************************************
int input2(int& feet, int& inches){
    cout<<"Please input the feet and inches separated by a space"<<endl;
    cin>>feet>>inches;
}
//******************************************************************************
//****************************calculate meters *********************************
//******************************************************************************
int ftToMe2(int feet, int inches){
    int totImp=feet*12+inches;      //calculate total number of inches
    int meters=totImp/39.3701f;   //calculates the number of meters
    return meters;
}
//******************************************************************************
//****************************calculate centimeters*****************************
//******************************************************************************
float ftToCm2(int feet, int inches){
    float totImp=feet*12+inches;      //calculate total number of inches
    float meters=totImp/39.3701f;   //calculates the number of meters
    float centi=(meters-ftToMe2(feet, inches))*100;
    return centi;
}
//******************************************************************************
//****************************output the results********************************
//******************************************************************************
void output2(int feet, int inches){
    //output the feet and inches, and meters and centimeters
    cout<<"You had "<<feet<<" feet and "<<inches<<" inches"<<endl;
    cout<<"This converts to "<<ftToMe2(feet, inches)<<" meters and "
            ""<<ftToCm2(feet, inches)<<" centimeters"<<endl;
}