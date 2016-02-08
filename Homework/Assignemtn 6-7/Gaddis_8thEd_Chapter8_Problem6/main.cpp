/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on February 6th 2016
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void sort(string [], int);  //sort function for strings
void showArr(string [], int);   //show array function for strings
//Execution Begins Here
int main(int argc, char** argv) {
    const int SIZE = 20; //max size for the array 
    string names[SIZE] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
        "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
        "Taylor, Terri", "Johnson, Jill",
        "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
        "James, Jean", "Weaver, Jim", "Pore, Bob",
        "Rutherford, Greg", "Javens, Renee",
        "Harrison, Rose", "Setzer, Cathy",
        "Pike, Gordon", "Holland, Beth" };  //set array values
    //explain program 
    cout<<"Gaddis 8thEd Chapter 8 Problem 6"<<endl;
    cout<<"This program takes the array values and sorts them"<<endl;
    
    //sort the array
    sort(names, SIZE);
    
    //show the array
    showArr(names, SIZE);
    
    //Exit stage right and close
    return 0;
}

//******************************************************************************
//*******************************sort function**********************************
//******************************************************************************
void sort(string array[], int size){
    int srtScan, minIndx;
    string minVal;
    for (srtScan = 0; srtScan < (size-1); srtScan++){
        minIndx = srtScan;
        minVal = array[srtScan];
        for(int index = srtScan + 1; index < size; index++){
            if (array[index] < minVal){
                minVal = array[index];
                minIndx = index;
            }
        }
        array[minIndx] = array[srtScan];
        array[srtScan] = minVal;
    }
 }
//******************************************************************************
//*******************************show array function****************************
//******************************************************************************
void showArr(string arry[], int size){
    for(int i=0; i<size; i++){
        cout<<arry[i]<<endl;
    }
}
