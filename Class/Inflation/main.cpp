
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Inflation
 * Created on January 21, 2016 11:45 AM
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
    cout<<endl<<"Fun look at inflation"<<endl<<endl;
   
    //Declare variables
    float price=0.25f;       //Initial Balance
    float inflate=0.07f;        //Interest Rate/year
    float rule72=0.72f/inflate;;//Rule of 72, future value=2*present value   
    float infYear;              //Inflation oer year
    //Output the table heading
    cout<<"The inflation rate ="<<inflate*100<<"%"<<endl;
    cout<<"At this inflation rate Price should double every";
    cout<<rule72<<" Years"<<endl;
    cout<<"Year Year  Price Inflation"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    infYear=price*inflate;
    cout<<"   0 2016"<<setw(7)<<price<<setw(10)<<infYear<<endl;
    
    //Calculate the savings 
    price*=(1+inflate);
    for(int y=1,year=2017;y<=50;y++,year++){
      infYear=price*inflate;
      cout<<setw(4)<<y<<" "<<year<<setw(7)<<price<<setw(10)<<infYear<<endl;
      price*=(1+inflate);
    }
    
    //Exit stage right and close
    return 0;
}

