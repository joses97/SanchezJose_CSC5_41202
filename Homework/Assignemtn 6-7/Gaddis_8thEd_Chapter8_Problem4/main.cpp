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
void Sort(int [], int); //sort all of the numbers in the array
int binSrch(const int[], int, int); //use binary search to find the number
//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    const int MAX=18;   //max for the array
    int number[MAX]{5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                    8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                    1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int input;      //users input
    int results=0;    //result from the bin search
    
    //explain program
    cout<<"This program test to see of an input is in the database"<<endl;
    //input the users number
    cout<<"Enter a number: ";
    cin>>input; //user inputs number
      
    //sort the values
    Sort(number, MAX);  //program sorts the numbers
    
    //binary search
    results=binSrch(number, MAX, input);    //gets results, either -1, or middle
    
    if(results==-1){
        cout<<"The value was not found"<<endl;
    }else{
        cout<<"The value "<<input<<" was found at index  "<<results<<endl;
    }
    
    return 0;
}
//SORT THE ARRAY
void Sort(int array[], int size){
    int srtScan, minIndx, minVal;
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
//USER BINARY SEARCH 
int binSrch(const int array[], int size, int value){
    int first=0;        //first array element 
    int last=size-1;    //last array element
    int middle=0;         //midpoint of search
    int pos=-1;    //position of search value
    bool found=false;   //set found to false
    while(!found && first <= last){
        middle=(first+last)/2;
        if(array[middle]==value){
            pos=middle;
            found=true;
        }
        else if(array[middle]>value){
            last=middle-1;
        }
        else{
            first=middle+1;
        }
    }
    return pos;
}
