/* 
 * Author: Jose Sanchez
 * Created on January 7, 2016, 10:48
 * Purpose:  How far does it drop
 */

//System Libraries
#include <iostream> //I/O Library
#include <cstdlib>  //Random Funcion Location
#include <cmath>    //Math Functions
#include <ctime>    //Time to set the random seed
#include <iomanip>  //Format Library
#include <fstream>  //Reading/writing to a file
using namespace std;

//User Libraries

//Global Constant
const float GRAVITY=32.174f; //sea level earth acceleration constant ft/sec^2 


//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    ofstream out; // declare a file stream object called out
    float drpTime, dstance;    //time in seconds and distance in feet
    
    //Inputting he time with the random number
    drpTime=rand()%11+10;//[10, 20]secs
    const int SIZE=21;
    char fileNam [SIZE]="DropDistance.dat";
    out.open(fileNam);
    
    //calculate the total
    dstance=0.5f*GRAVITY*drpTime*drpTime;
    
    //Output the results
    cout<<"Drop time = "<<drpTime<<"(sec)"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint; //format the distance to 3 
    cout<<"Free Fall Distance x2 "<<setw(9)<<dstance<<" (feet)"<<endl;
    
    //calculate the total
    dstance=0.5f*GRAVITY*pow(drpTime,2);
    
    //Output the results
    cout<<fixed<<setprecision(3)<<showpoint; //format the distance to 3 
    cout<<"Free Fall Distance pow "<<setw(9)<<dstance<<" (feet)"<<endl;
    
    //calculate the total
    dstance=0.5f*GRAVITY*exp(2*log(drpTime));
    
    //Output the results
    out<<fixed<<setprecision(3)<<showpoint; //format the distance to 3 
    out<<"Free Fall Distance log"<<setw(9)<<dstance<<" (feet)"<<endl;
    
    //Exit stage right
    out.close();
    return 0;
}