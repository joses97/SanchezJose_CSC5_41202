/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on February 6th 2016
 */

//System Libraries
#include <iostream> //inout output
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    const int MAX=10;   //max number for array size
    int number[MAX]{13579, 26791, 26792, 33445, 55555,
                    62483, 77777, 79422, 85647, 93121}; //numbers for the array
    int input=0;    //set initial value for input
    int first=0;    //set initial value for first
    int last=9;     //set initial value for last
    int mid=0;      //set initial value for mid
    bool found=false;   //boolean found=false
    
    //explain program
    cout<<"This program finds if a user won the lottery"<<endl;
    //input the users number
    cout<<"Enter the winning lottery number: ";
    cin>>input;
    
    //use binary seach to find the number
    while (first<=last&&!found){
        mid=(first+last)/2;
        if(input>number[mid]){
            first=mid+1;
        }
        else if(input<number[mid]){
            last=mid-1;
        }
        else{
            cout<<"The number "<<input<<" is the winning number!"<<endl;
            found=true;
        }
    }
    //if number was not found tell user number was not found
    if(!found){
        cout<<"The number "<<input<<" is not the winning number"<<endl;
    }
    return 0;
}

