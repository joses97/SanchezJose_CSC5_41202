/* 
 * Author: Jose Sanchez
 * Created on January 6, 2016, 8:18
 * Purpose:  Calculate Cents
 * Problem 3 Programming Project
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char CNVQRTR=25;//Cents per quarter
const char CNVDIME=10;//cents per dime
const char CNVNIKL=5;//cents per nickel

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nQrtrs, nNckls, nDimes;//Declare inputs, number of Q, D, N
    unsigned short total;//total
    
    //input the number of coins
    cout<<"How many quarters do you have "<<endl;
    cin>>nQrtrs;
    cout<<"How many dimes do you have "<<endl;
    cin>>nDimes;
    cout<<"How many Nickels do you have "<<endl;
    cin>>nNckls;
    
    //calculate the total
    total=nQrtrs*CNVQRTR+nDimes*CNVDIME+nNckls*CNVNIKL;
    
    //Output the results
    cout<<"Number of Quarters = "<<nQrtrs<<endl;
    cout<<"Number of Dimes    = "<<nDimes<<endl;
    cout<<"Number of nNckls= "<<nNckls<<endl;
    cout<<"You have a total of "<<total<<" cents "<<endl;
    
    //Exit stage right
    return 0;
}