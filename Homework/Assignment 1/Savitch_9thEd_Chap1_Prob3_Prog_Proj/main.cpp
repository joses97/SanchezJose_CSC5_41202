/* 
 * Author: Jose Sanchez
 * Created on January 6, 2016, 8:18
 * Purpose:  Calculated Military Budget Percentage
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char cnvQrtr=25;//Cents per quarter
const char cnvDime=10;//cents per dime
const char cnvNikl=5;//cents per nickel
const char cnvPnD1=100;//cents per dollar

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nQrtrs, nNckls, nDimes;//Declare inputs, number of Q, D, N
    unsigned short total;//total
    
    //input the number of coins
    cout<<"How many quarters do you have 0-9"<<endl;
    cin>>nQrtrs;
    cout<<"How many dimes do you have 0-9"<<endl;
    cin>>nDimes;
    cout<<"How many Nickels do you have 0-9"<<endl;
    cin>>nNckls;
    
    //calculate the total
    total=nQrtrs*cnvQrtr+nDimes*cnvDime+nNckls*cnvNikl;
    
    //Output the results
    cout<<"Number of Quarters input = "<<nQrtrs<<endl;
    cout<<"Number of Dimes input = "<<nDimes<<endl;
    cout<<"Number of Quarters input = "<<nNckls<<endl;
    cout<<"The Dollar amount is = "<<1.0f*total/cnvPnD1<<endl;
    //Exit stage right
    return 0;
}