
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on February 2nd, 2016 8:20
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>    //Radnom function 
#include <ctime>    //setting random seed with time
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void fillAry(int [], int);
void prntAry(int [], int, int);
void swap(int&, int&);
void lstSml(int [], int, int);
void markSrt(int [], int);

//Execution Begins Here
int main(int argc, char** argv) {
    //initialize the seed 
    srand((static_cast<unsigned int>(time(0))));
    
    //declare variables 
    const int SIZE=100;
    int array[SIZE];
    
    //fill the array with random 2 digit numbers
    fillAry(array, SIZE);
    
    //print the array
    prntAry(array, SIZE, 10);
    
    //finding the smallest element in the list
    markSrt(array, SIZE);
    
    //reprint the array
    prntAry(array, SIZE, 10);
    
    //Exit stage right and close
    return 0;
}
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Mark Sort
//Inputs:
// a->array or list
// n-> size of list
//Outputs:
// a->Sorted Array
void markSrt(int a[], int n){
    //find smallest in each successive list
    //from the beginning of the list to the
    //Outside Element of the list
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[j]=a[j]^a[i];//exclusive or XOR
                a[i]=a[j]^a[i];//exclusive or XOR
                a[j]=a[j]^a[i];//exclusive or XOR
            }
        }
    }
}

void prntAry(int a[], int n, int perLine){
    //loop and fill the array with random numbers
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  fill array
//Inputs:
// a->List
// n->Size of the array
//Outputs:
// a_>list initialized with random 2 digit numbers
void fillAry(int a[], int n){
    //loop and fill the array with random numbers
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10-99]
    }
}
