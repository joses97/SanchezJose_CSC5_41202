/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on February 6th 2016
 */

//System Libraries
#include <iostream> //input output
#include <fstream>  //file input
#include <string>   //strings
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    ifstream inFile;    //infile
    string file;        //name of file being taken in
    const int MAX=10;   //max for array
    int array[MAX];     //array
    int numFile;        //read number from file 
    int counter=0;      //set counter equal to zero
    int tot=0;          //set the total equal to zero
    int high, low;      //high and low 
    
    //explain program
    cout<<"Gaddis 8thEd Chapter 7 Problem  7"<<endl;
    cout<<"This program reads in a users input and outputs the file and averages"<<endl;
    
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

