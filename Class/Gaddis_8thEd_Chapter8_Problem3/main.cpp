/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on February 6th 2016
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    const int MAX=10;
    int number[MAX]{13579, 26791, 26792, 33445, 55555,
                    62483, 77777, 79422, 85647, 93121};
    int input=0;
    int first=0;
    int last=9;
    int mid=0;
    bool found=false;
    
      //explain program
    cout<<"This program finds if a user won the lottery"<<endl;
    //input the users number
    cout<<"Enter the winning lottery number: ";
    cin>>input;
    
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
    if(!found){
        cout<<"The number "<<input<<" is not the winning number"<<endl;
    }

    
    
    return 0;
}

