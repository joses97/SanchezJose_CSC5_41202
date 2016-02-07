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
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    ifstream inFile;
    string file;
    const int MAX=10;
    int array[MAX];
    int numFile; // read number from file 
    int counter = 0; 
    int tot=0;
    int high, low;
    
    //input the file name
    cout<<"Please input the file name fr.txt"<<endl;
    cin>>file;
    //open the file
    inFile.open(file.data());
    
    //output file not found 
    if(!inFile){
        cout<<"File not found"<<endl;
    }
    
    //while loop for assigning array value and calculate total
    while(inFile >> array[counter]&&counter<MAX){
        tot+=array[counter];
        counter++;
    }
    //output total
    cout<<"The total is "<<tot<<endl;
    //set high and low to first array value
    high=low=array[0];
    
    //for loop, find high and low
    for(int i=0; i<MAX; i++){
        if(array[i]>high){
            high=array[i];
        }
        if(array[i]<low){
            low=array[i];
        }
    }
    //output high and low values and average
    cout<<"The high number was "<<high<<" and the low number was "<<low<<endl;
    cout<<"The average of these values was "<<(float)tot/MAX<<endl;
    //Exit stage right and close
    return 0;
}

