/* 
 * Author: Jose Sanchez
 * Created on January 6, 2016, 11:43
 * Purpose:  Robbing Banks
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char  wtBill=1;//Cents per quarter
const float cnvLbs=1.0f/453.5f;//cents per dime


//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int amtStl;    //amount to steal
    unsigned short denom;   //Bill denomination
    unsigned char wtPers=80;//Weight person can carry in lbs
    unsigned char nPerps;   //number of perpetrators
    
    //input the number of coins
    cout<<"How much money would you like o aquire"<<endl;
    cin>>amtStl;
    cout<<"What is the bill denomination "<<endl;
    cin>>denom;
   
    
    //calculate the total
    nPerps=cnvLbs*amtStl*wtBill/denom/wtPers+1;
    
    //Output the results
    cout<<"Amount Desire = "<<amtStl<<endl;
    cout<<"Denominations Desires = $"<<denom<<endl;
    cout<<"number of individuals required on the job "
            <<static_cast<int>(nPerps)<<endl;
    //Exit stage right
    return 0;
}