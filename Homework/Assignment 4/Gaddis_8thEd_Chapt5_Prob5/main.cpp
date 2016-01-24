/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: organize numbers least and greatest
 * Created on January 23, 2016
 */

//System Libraries
#include <iostream> //I/O formating
#include <iomanip>  //Formating 
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Problem to Solve
    cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob5"<<endl;
    cout<<"This program will calculate the increase in membership prices"<<endl;
    
    //Declare and initialize variables 
    float cost=2500; // cost of membership first year
    float percInc=0.04;//the amount the price will increase per year
    int numYear; //number of years this will take place for
    
    //input number of years this will take place fpr
    cout<<"Please enter the number of years you would"
            " like to see membership prices for"<<endl;
    cin>>numYear;//input number of years this will be calculated for 
    
    //loop for number of years
    for (int i=0;i<numYear;i++){
        cost=(percInc*cost)+cost;   //calculate the cost of the item 
        cout<<"In "<<i+1<<" years the price will be"
                " "<<fixed<<showpoint<<setprecision(2)<<cost<<"$"<<endl;
    }
    //Exit stage right and close
    return 0;
}

