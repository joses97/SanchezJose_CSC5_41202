/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on February 6th 2016
 */

//System Libraries
#include <iostream> //I/O
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

int srchId(int MAX, int number[], int input);
//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    const int MAX=10;   //max number in the array
    int number[MAX]{13579, 26791, 26792, 33445, 55555,
                    62483, 77777, 79422, 85647, 93121};
    int input;      //users input
    int rtrnval;    //return value for search
    
    //explain program
    cout<<"Gaddis 8thEd Chapter 8 Problem 2"<<endl;
    cout<<"This program finds if a user won the lottery"<<endl;
    //input the users number
    cout<<"Enter the winning lottery number: ";
    cin>>input;
    
    //call the function 
    rtrnval=srchId(MAX, number, input);
    
    //test to see if number  was in the database
    if(rtrnval != -1){
        cout<<input<<" Is the winning number! "<<endl;
    }
    else {cout<<input<<" Is not a winning number";}
      
    return 0;
}
//******************************************************************************
//*******************************Search function********************************
//******************************************************************************
int srchId(int MAX, int number[], int input){
    for(int i =0; i<MAX; i++){
        if(input==number[i]){
            return i;
        }
    }
    return -1;
}
