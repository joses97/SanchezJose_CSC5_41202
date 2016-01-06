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
const char cnvPerc=100;//conversion to percentage

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float milBdgt=6e11f;//Military Budget of 581 Billion Dollars
    float fedBdgt=3.8e12f;//Federal Budget of 3.8 Trillion Dollars
    
    //Calculate the percentage for the military budget
    float percMil=milBdgt/fedBdgt*cnvPerc;
    
    //Output the results
    cout<<"The Military budget = $"<<milBdgt<<endl;
    cout<<"The Federal budget = "<<fedBdgt<<endl;
    cout<<"The percentage of the Federal Budget attributed to the Military = ";
    cout<<percMil<<"%"<<endl;
    
    //Exit stage right
    return 0;
}