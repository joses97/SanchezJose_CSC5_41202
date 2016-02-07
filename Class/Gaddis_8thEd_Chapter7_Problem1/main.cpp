/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on February 6th 2016
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    const int SIZE=10;  //size of the array
    int number[SIZE];  //array
    int min=0;          //smallest number
    int max=0;          //highest number in the array
    
    //explaining the program
    cout<<"This "
    cout<<"This program finds the minimun and maximum of 10 whole numbers"<<endl;
    //tell user to input 10 variables
    for (int i=0; i<SIZE; i++){
        cout<<"Please enter number: "<<i+1<<endl;
        cin>>number[i];
    } 
    
    //set min and max equal to first number
    min=number[0];
    max=number[0];
    
    //for loop to find smallest number and largest number
    for (int i=0;i<SIZE;i++){
        if(number[i]<min){
            min=number[i];
        }
        if(number[i]>max){
            max=number[i];
        }
    }
    
    //output the smallest and largest number
    cout<<"The smallest number is "<<min<<endl;
    cout<<"The largest number is  "<<max<<endl;
    
    //Exit stage right and close
    return 0;
}

