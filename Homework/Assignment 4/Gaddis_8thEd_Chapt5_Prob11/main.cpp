/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: population increase
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
    cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob11"<<endl;
    cout<<"Hello this program predicts the population of an organism"<<endl;
    //declare variables
    int pop; //population
    float dayIncr; //average daily population increase as a percent 
    unsigned short numDays;    //number of days they will multiply for
    unsigned short counter;    //count the number of days
    
    //input the initial population, daily population increase
    cout<<"Please enter the initial population of the organism"<<endl;
    cin>>pop;    //input initial population
    cout<<"Please enter the daily population increase percent EX: 10"<<endl;
    cin>>dayIncr;   //input daily increase as a percent
    cout<<"Enter the number of days the population will grow for"<<endl;
    cin>>numDays;//input number of days
   
    //calculations
    dayIncr=dayIncr/100.0f; //convert day increase to a percent decimal form
    
    //statement to determine valid variables
    if (pop>2&&dayIncr>=0&&numDays>1){
         //loop to determine final population after numDays
        for(int i=0;i<numDays;i++){
            counter++;  //increase counter for number of days
            pop=(pop*dayIncr)+pop;  //calculate increasing population 
            cout<<"For day "<<counter<<" population is "<<pop<<endl;
        }
    }else{  //telling user to input valid variables
        cout<<"Please enter a population larger than two"<<endl;
        cout<<"A positive daily population increase"<<endl;
        cout<<"And a number larger than one for the number of days"<<endl;
    }
        //Exit stage right and close
    return 0;
}

