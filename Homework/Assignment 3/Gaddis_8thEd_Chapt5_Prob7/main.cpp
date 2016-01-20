/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Table of Salary Doubling
 * Created on January 20, 2016
 * double is required because number of significant digits
 * anything larger than $99,999.99 requires a double
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
    cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob7"<<endl;
    cout<<endl<<"Display a Salary Table"<<endl<<endl;
   
    //Declare variables
    unsigned int salary=1; //Salary starting at a penny 
    double totPay=salary;          //Total pay by summing the salary
    
    //Loop o generate the salary Table and Total Paid
    cout<<"Day        $Salary         $Total"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<1<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
    for (int day=2;day<=31;day++){
        salary*=2;
        totPay+=salary;
        cout<<setw(3)<<day<<setw(15)<<salary/100.0<<setw(15)<<totPay/100.0<<endl;
    }
    
    
    //Output the results
    
    //Exit stage right and close
    return 0;
}

