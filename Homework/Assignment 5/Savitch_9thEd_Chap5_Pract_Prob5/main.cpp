/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Savitch 9thEd Chapter 5 problem 5
 * Created on February 3nd, 2016 
 */

//System Libraries
#include <iostream>//input output
#include <iomanip>//formatting
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void input5(int& lbs, int& oz);  //user inputs pounds and ounces
int ounce5(int lbs, int oz);     //calculates total ounces
int kilos5(int lbs, int oz);     //calculates total amount of kilograms
float grams5(int lbs, int oz);   //calculates total amount of grams
void output5(int lbs,int oz);    //outputs results

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    int lbs=0, oz=0;    //initial value for pounds and ounces 
    
    //set precision to 2
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    //describe the program
    cout<<"Savitch 9thEd Chapter 5 problem 5"<<endl;
    cout<<"This program will convert pounds and ounces and convert them to"
            "kilograms and grams"<<endl;
    
    //function for inputting the variables
    input5(lbs, oz); //input pounds and ounces
    output5(lbs, oz);//display results
    
    //Exit stage right and close
    return 0;
}
//******************************************************************************
//***********************input the pounds and ounces****************************
//******************************************************************************
void input5(int& lbs, int& oz){
    cout<<"Please input the pounds and ounces separated by a space"<<endl;
    cin>>lbs>>oz;
}
//******************************************************************************
//***********************calculate total ounces*********************************
//******************************************************************************
int ounce5(int lbs, int oz){
    int totOZ=lbs*16+oz;
    return totOZ;
}
//******************************************************************************
//***********************Ounces to kilograms************************************
//******************************************************************************
int kilos5(int lbs, int oz){
    int kilo=ounce5(lbs, oz)*0.02834f;
    return kilo;
}
//******************************************************************************
//***********************Ounces to grams****************************************
//******************************************************************************
float grams5(int lbs, int oz){
    float gram=(ounce5(lbs, oz)*0.02834f-kilos5(lbs, oz))*1000.0f;
    return gram;
}
//******************************************************************************
//***********************output all to user*************************************
//******************************************************************************
void output5(int lbs,int oz){
    cout<<"You have "<<lbs<<" pounds and "<<oz<<" ounces "<<endl;
    cout<<"This is equivalent to "<<kilos5(lbs, oz)<<" kilos and"
            " "<<grams5(lbs, oz)<<" grams"<<endl;
}