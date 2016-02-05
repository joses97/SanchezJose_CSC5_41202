/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Savitch 9thEd Chapter 5 problem 
 * Created on February 2nd, 2016 7:44 AM
 */

//System Libraries
#include <iostream>//i/o
#include <cmath>//power function 
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
float showRes(float v1, float v2, float v3, float v4); //shows results of the calculations
float avg(float v1, float v2, float v3, float v4);      //calculates the average of the inputs
float stdDev(float v1, float v2, float v3, float v4);   //calculates the standard deviation

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float var1, var2, var3, var4; //varibales 1 2 3 and 4 for users input
    float avrg;                  //average score for the student
    float stdDev;               //standard deviation of the users inouts
    
    
    //input var1, var2, var3, var4
    cout<<"Savitch 9thEd Chapter 5 Practice Problem 1"<<endl;
    cout<<"This program caculates the average and the standard deviation of four inputs"<<endl;
    cout<<"Please enter the four numbers, each separated by a space"<<endl;
    cin>>var1>>var2>>var3>>var4;    //input the four variables
    showRes(var1, var2, var3, var4);
    
    
    //Exit stage right and close
    return 0;
}
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//Inputs:
//v1->first score
//v2->second score
//v3->third score
//v4->fourth score
float showRes(float v1, float v2, float v3, float v4){
    cout<<"The average is "<<avg(v1, v2, v3, v4)<<endl;;    //output avg
    cout<<"The standard deviation is "<<stdDev(v1, v2, v3, v4)<<endl;   //output standard deviation
}
//******************************************************************************
//****************************Calculate Average********************************
//******************************************************************************
float avg(float v1, float v2, float v3, float v4){
    float avrg=(v1+v2+v3+v4)/4.0f;  //find the average
    return avrg;                    //return the average
}
//******************************************************************************
//***********************Calculate Standard Deviation***************************
//******************************************************************************
float stdDev(float v1, float v2, float v3, float v4){
    float sqr, dev;     //find the standard deviation 
    sqr=pow((v1-avg(v1,v2,v3,v4)),2)+pow((v2-avg(v1,v2,v3,v4)),2)+
            pow((v3-avg(v1,v2,v3,v4)),2)+pow((v4-avg(v1,v2,v3,v4)),2);
    dev=sqrt(sqr/3.0f);
    return dev;
}