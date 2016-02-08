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
    const int MAX=20;   //array limit
    char corr[MAX]{'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C',
                    'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'};     //correct answers
    char answer[MAX];   //users answer
    int cor=0;          //counter for correct
    int wrong=0;        //counter for wrong
    
    //input users answers
    cout<<"Please enter the answers from the test taker"<<endl;
    //for loop gets users inputs and calculates counts the correct and wrong
    for(int i=0; i<MAX; i++){
        cout<<"Enter the answer for "<<i+1<<endl;
        cin>>answer[i];     //input answer 
        while(toupper(answer[i])<'A'||toupper(answer[i])>'D'){
           cout << "enter another letter: ";
           cin >> answer[i];}
        //if statement to find wrong and correct
        if(toupper(answer[i])==corr[i]){cor++;}
        else{wrong++;}
    }
    cout<<"The number correct was:"<<cor<<endl;
    cout<<"The number incorrect was:"<<wrong<<endl;
    //test if user passed of failed
    if(cor>=15){
        cout<<"You passed"<<endl;
    }else{cout<<"You failed"<<endl;}
    
    return 0;
}
