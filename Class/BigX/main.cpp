
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
const int COL=50;

//Function prototypes
int fillAry(char[][COL], int);
int prntAry(char [][COL], int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //initialize the seed 
    srand((static_cast<unsigned int>(time(0))));
    
    //declare variables 
    const int ROW=50;
    int array[ROW][COL];
    
    //fill the array with random 2 digit numbers
    int row_col=fillAry(array, ROW);
    
    //print the array
    int row_col=prntAry(array, ROW, row_col);
    
    //Exit stage right and close
    return 0;
}
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  print array
//Inputs:
// a->A 2 dimensional array
// ROW->number of rows in the array
// COL->number of columns in the array
//Outputs:
// a_>list initialized with random 2 digit numbers
void prntAry(char a[], int n, int perLine){
    //loop and fill the array with random numbers
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  print array
//Inputs:
// a->A 2 dimensional array
// ROW->number of rows in the array
// COL->number of columns in the array
//Outputs:
// a_>list initialized with random 2 digit numbers
int fillAry(char a[][COL], int ROW){
    //randomly choose how many rows and columns 
    int row_col=rand()%49+2; //[2,50]
    //loop and fill the array with random numbers
    for(int row=0;row<row_col;row++){
        for(int col=0;col<COL;col++){
         a[row][col]=' ';   
        }
    }
    //fill the back slash part of X
    for(int row=0;row<row_col;row++){
        for(int col=0;col<COL;col++){
         if (row==col)a[row][col]=row+1;   
        }
    }
    //fill the backslash
    for(int row=0;row<row_col;row++){
        for(int col=0;col<COL;col++){
         if (row==col)a[row][col]=row+1;   
        }
    }
    
    //send back how many cells are occupied 
    return row_col; 
}
