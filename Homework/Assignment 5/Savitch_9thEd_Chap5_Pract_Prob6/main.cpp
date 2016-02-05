/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Savitch 9thEd Chapter 5 problem 6
 * Created on February 3rd, 2016 
 */

//System Libraries
#include <iostream>//input output
#include <iomanip>//formatting
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void input6(int& kilos, int& grams); //inputs the amount of grams and kilos
int grams6(int kilos,int grams); //calculate grams
int pound6(int kilos, int grams); //calculate pounds
float ounces6(int kilos, int grams); //calculate ounces
void output6(int kilos, int grams);//output the results



//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    int kilos=0, grams=0;   //initial amount of kilos and grams
    
   //set precision
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
   
    //describe the program
    cout<<"Savitch 9thEd Chapter 5 problem 6"<<endl;
    cout<<"This program converts kilograms and grams to pounds and ounces"<<endl;
    input6(kilos, grams);   //output the results
    output6(kilos, grams); //output the results
    //Exit stage right and close
    return 0;
}
//******************************************************************************
//***********************input the kilos and grams******************************
//******************************************************************************
void input6(int& kilos, int& grams){
    cout<<"Please enter the kilograms and grams separated by a space"<<endl;
    cin>>kilos>>grams;
}
//******************************************************************************
//***********************convert kilos and grams to grams***********************
//******************************************************************************
int grams6(int kilos,int grams){
    int totG=kilos*1000+grams;
    return totG;
}
//******************************************************************************
//***********************convert grams to pounds *******************************
//******************************************************************************
int pound6(int kilos, int grams){
    int pounds=grams6(kilos, grams)*0.002204;
    return pounds;
}
//******************************************************************************
//***********************convert grams to ounces *******************************
//******************************************************************************
float ounces6(int kilos, int grams){
    float lbs=grams6(kilos, grams)*0.002204f-pound6(kilos, grams);
    float oz=lbs*16.0f;
    return oz;
}
//******************************************************************************
//***********************output the results*************************************
//******************************************************************************
void output6(int kilos, int grams){
    cout<<"You entered "<<kilos<<" kilograms and "<<grams<<" grams"<<endl;
    cout<<"This translates to "<<pound6(kilos, grams)<<" pounds and"
            " "<<ounces6(kilos, grams)<<" ounces"<<endl;
}