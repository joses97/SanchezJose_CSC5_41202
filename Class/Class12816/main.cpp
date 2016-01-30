
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on January 28, 2016 
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip> //setw
using namespace std;

//User Libraries

//Global Constants
const char PERCENT=100;
//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables 
    float pv=100.0f;     //Present value in Dollars $'s
    int iRate=6;         //interest rate in percent
    int nComp=12;        //number of compounding periods in years
    float fv=pv;         //future value
    
    //Output heading
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<endl<<"Year Savings"<<endl;
    //Calculate and display a table of results 
    for(int year=0;year<=nComp;year++){
        //roundup then truncate value
        int ifv=(fv+.005)*PERCENT; //shift 2 places for pennies 
        fv=static_cast<float>(ifv)/PERCENT;//Convert back
        cout<<setw(4)<<year<<setw(8)<<fv<<endl;;
        fv*=(1+static_cast<float>(iRate)/PERCENT);
    }
    
    //The MVC concept separates the view from the model
    //declare the array and initialize 
    float balance[nComp+1];
    balance[0]=pv;
    
    //Calculate the array, i.e. model
    for(int year=0;year<nComp;year++){
        //round up then truncate value
        int ifv=(balance[year]+.005)*PERCENT; //shift 2 places for pennies 
        balance[year]=static_cast<float>(ifv)/PERCENT;//Convert back
        balance[year+1]=balance[year]*(1+static_cast<float>(iRate)/PERCENT);
    }
    
    //display of he model
    cout<<endl<<"Year Savings"<<endl;
    for(int year=0;year<=nComp;year++){
        cout<<setw(4)<<year<<setw(8)<<balance[year]<<endl;;
    }
    //Exit stage right and close
    return 0;
}

