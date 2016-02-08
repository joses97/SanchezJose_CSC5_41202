/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on February 6th 2016
 */

//System Libraries
#include <iostream> //input output
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

int srchId(int MAX, int number[], int input);
//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    const int MAX=18;   //max array size
    int number[MAX]{5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002};  //array values
    int input;      //users input
    int rtrnval;    //return value for search
        
    //explain program
    cout<<"Gaddis 8thed Chapter 8 Problem 1"<<endl;
    cout<<"This program test to see of an input is in the database"<<endl;
    //input the users number
    cout<<"Enter a number: ";
    cin>>input;
    
    //call the function 
    rtrnval=srchId(MAX, number, input);
    
    //test to see if number was found
    if(rtrnval != -1){
        cout<<"The ID: "<<input<<"was found in index "<<rtrnval<<"."<< endl; 
    }
    else {cout<<"ID: "<<input<<" not found";}
      
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
