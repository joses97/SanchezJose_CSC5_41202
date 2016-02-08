/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on February 6th 2016
 */

//System Libraries
#include <iostream> //i/o
#include <string> //strings
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void sort5(string [], int);  //sort strings
void showArr5(string [], int);   //show array of strings
int binSrch5(string [], int, string);    //binary search for strings
//Execution Begins Here
int main(int argc, char** argv) {
    const int SIZE = 20;    //max size for the array
    string input;   //users input
    int result; //result of the binary search 
    string names[SIZE] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
        "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
        "Taylor, Terri", "Johnson, Jill",
        "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
        "James, Jean", "Weaver, Jim", "Pore, Bob",
        "Rutherford, Greg", "Javens, Renee",
        "Harrison, Rose", "Setzer, Cathy",
        "Pike, Gordon", "Sanchez, Jose" };  //values for the array
    
    //input the name 
    cout<<"Gaddis 8thed Chapter 8 Problem 7"<<endl;
    cout<<"This program find the users entry usuing strings"<<endl;
    cout<<"Please enter the name you are looking for: ";
    getline(cin, input);
    
    //sort the array
    sort5(names, SIZE);
    
    //show the array
    showArr5(names, SIZE);
    
    //run the binary search
    result=binSrch5(names, SIZE, input);
    
    if(result==-1){
        cout<<" The entry was not found"<<endl;
    }
    else {cout<<"The entry was found at "<<result+1<<": "<<names[result]<<endl;}
    //Exit stage right and close
    return 0;
}

//******************************************************************************
//*******************************sort function**********************************
//******************************************************************************
void sort5(string array[], int size){
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
//*******************************show array*************************************
//******************************************************************************
void showArr5(string arry[], int size){
    for(int i=0; i<size; i++){
        cout<<arry[i]<<endl;
    }
}
//******************************************************************************
//******************************Binary search***********************************
//******************************************************************************
int binSrch5(string array[], int size, string input){
    int first=0;        //first array element 
    int last=size-1;    //last array element
    int middle=0;         //midpoint of search
    int pos=-1;    //position of search value
    bool found=false;   //set found to false
    while(!found && first <= last){
        middle=(first+last)/2;
        if(array[middle]==input){
            pos=middle;
            found=true;
        }
        else if(array[middle]>input){
            last=middle-1;
        }
        else{
            first=middle+1;
        }
    }
    return pos;
}