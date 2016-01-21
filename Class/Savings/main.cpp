
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Savings
 * Created on January 21, 2016 11:06 AM
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //setw
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The Problem to solve
    cout<<endl<<"Fun look at savings and rule of 72"<<endl;
   
    //Declare variables
    float balance=100.0f;       //Initial Balance
    float intRate=0.05f;        //Interest Rate/year
    float rule72=0.72f/intRate;;//Rule of 72, future value=2*present value   
    float intErnd;              //Interest earned
    
    //Output the table heading
    cout<<"The interest rate ="<<intRate*100<<"%"<<endl;
    cout<<"At this interest Principle should double every";
    cout<<rule72<<" Years"<<endl;
    cout<<"Year Year Balance Interest"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    intErnd=balance*intRate;
    cout<<"   0 2016"<<setw(8)<<balance<<setw(9)<<intErnd<<endl;
    
    //Calculate the savings 
    balance*=(1+intRate);
    for(int y=1,year=2017;y<=50;y++,year++){
      intErnd=balance*intRate;
      cout<<setw(4)<<y<<" "<<year<<setw(8)<<balance<<setw(9)<<intErnd<<endl;
      balance*=(1+intRate);
    }
    
    //Exit stage right and close
    return 0;
}

