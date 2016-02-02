
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
    //loop and compare 
    for(int i=0;i<n-1;i++){
        lstSml(a, n, i);
    }
}
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  smallest in list 
//Inputs:
// a->array or list
// n-> size of list
//pos-> to place smalles in the list that follows
//Outputs:
// a[pos]->smallest element in [a[pos],a[n-1]]
void lstSml(int a[], int n, int pos){
    //loop and compare 
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}

//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 swap
//Inputs:
// a->first variable
// b->Second variable
//Outputs:
// a->first varibale with value of b
void swap(int &a, int&b){
    a=a^b;//exclusive or XOR
    b=a^b;//exclusive or XOR
    a=a^b;//exclusive or XOR
}

//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  print array
//Inputs:
// a->List
// n->Size of the array
//Outputs:
// a_>list initialized with random 2 digit numbers
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
