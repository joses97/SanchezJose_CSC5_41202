/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Created on Feb 4, 2016
 * Purpose: Menu for assignment 5
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //used for precision in decimals
#include <cmath>    //power function
#include <fstream>  //file i/o
#include <string>   //strings input
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
int srchId(int MAX, int number[], int input);
int binSrch(const int array[], int size, int value);
void Sort(int array[], int size);
void sort2(float [], int);       //function for sorting
void showArr2(float [], int);    //function for showing the array
void sort3(string [], int);  //sort function for strings
void showArr3(string [], int);   //show array function for strings
void sort5(string [], int);  //sort strings
void showArr5(string [], int);   //show array of strings
int binSrch5(string [], int, string);    //binary search for strings
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
   unsigned short nSoltn;//Problem solution to display
   char answr; //response to question
    
    //Menu to display solution 
   do{
        cout<<"Assignment 3 Problem set"<<endl;
        cout<<"Type 1 to Display the First Problem "<<endl;
        cout<<"Type 2 to Display the Second Problem "<<endl;
        cout<<"Type 3 to Display the Third Problem "<<endl;
        cout<<"Type 4 to Display the Fourth Problem "<<endl;
        cout<<"Type 5 to Display the Fifth Problem "<<endl;
        cout<<"Type 6 to Display the First Problem "<<endl;
        cout<<"Type 7 to Display the Second Problem "<<endl;
        cout<<"Type anything else to exit"<<endl<<endl;
        cin>>nSoltn;
       //Solution to all the problems
       switch(nSoltn){
           case 1: {problem1();}break;
           case 2: {problem2();}break;
           case 3: {problem3();}break;
           case 4: {problem4();}break;
           case 5: {problem5();}break;
           case 6: {problem6();}break;
           case 7: {problem7();}break;
           default : cout<<""<<endl;
       }
       cout<<"Would you like to see another problem?"<<endl;
       cin>>answr;
   }while(toupper(answr)=='Y');
   return 0;
}
/****************************************************************
**************************Problem1*******************************
*****************************************************************
*/
void problem1(){
    //declare and initialize variables
    const int MAX=18;   //max array size
    int number[MAX]{5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002};  //array values
    int input;      //users input
    int rtrnval;    //return value for search
        
    //explain program
    cout<<"Gaddis 8thed Chapter 8 Problem 1"<<endl;
    cout<<"This program test to see of an input is in the database"<<endl;
    //input the users number
    cout<<"Enter a number: ";
    cin>>input;
    
    //call the function 
    rtrnval=srchId(MAX, number, input);
    
    //test to see if number was found
    if(rtrnval != -1){
        cout<<"The ID: "<<input<<"was found in index "<<rtrnval<<"."<< endl; 
    }
    else {cout<<"ID: "<<input<<" not found"<<endl;}
}
//******************************************************************************
//*******************************Search function********************************
//******************************************************************************
int srchId(int MAX, int number[], int input){
    for(int i =0; i<MAX; i++){
        if(input==number[i]){
            return i;
        }
    }
    return -1;
}
/****************************************************************
**************************Problem2*******************************
*****************************************************************
*/
void problem2(){
    //declare and initialize variables
    const int MAX=10;   //max number in the array
    int number[MAX]{13579, 26791, 26792, 33445, 55555,
                    62483, 77777, 79422, 85647, 93121};
    int input;      //users input
    int rtrnval;    //return value for search
    
    //explain program
    cout<<"Gaddis 8thEd Chapter 8 Problem 2"<<endl;
    cout<<"This program finds if a user won the lottery"<<endl;
    //input the users number
    cout<<"Enter the winning lottery number: ";
    cin>>input;
    
    //call the function 
    rtrnval=srchId(MAX, number, input);
    
    //test to see if number  was in the database
    if(rtrnval != -1){
        cout<<input<<" Is the winning number! "<<endl;
    }
    else {cout<<input<<" Is not a winning number"<<endl;}
}
/****************************************************************
**************************Problem3*******************************
*****************************************************************
*/
void problem3(){
    //declare and initialize variables
    const int MAX=10;   //max number for array size
    int number[MAX]{13579, 26791, 26792, 33445, 55555,
                    62483, 77777, 79422, 85647, 93121}; //numbers for the array
    int input=0;    //set initial value for input
    int first=0;    //set initial value for first
    int last=9;     //set initial value for last
    int mid=0;      //set initial value for mid
    bool found=false;   //boolean found=false
    
    //explain program
    cout<<"This program finds if a user won the lottery"<<endl;
    //input the users number
    cout<<"Enter the winning lottery number: ";
    cin>>input;
    
    //use binary seach to find the number
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
    //if number was not found tell user number was not found
    if(!found){
        cout<<"The number "<<input<<" is not the winning number"<<endl;
    }
}
/****************************************************************
**************************Problem4*******************************
*****************************************************************
*/
void problem4(){
    //declare and initialize variables
    const int MAX=18;   //max for the array
    int number[MAX]{5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                    8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                    1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int input;      //users input
    int results=0;    //result from the bin search
    
    //explain program
    cout<<"Gaddis 8thEd Chapter 8 problem 4"<<endl;
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
        cout<<"The value "<<input<<" was found at index "
                ": "<<results<<" after the sort"<<endl;
    }
}
//******************************************************************************
//*******************************Sort the array*********************************
//******************************************************************************
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
//******************************************************************************
//*******************************Binary Search**********************************
//******************************************************************************
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
/****************************************************************
**************************Problem5*******************************
*****************************************************************
*/
void problem5(){
    //declare and initialize variables
    const int SIZE=12;  //size of the array
    float rain[SIZE];   //array for rain fall
    string month[SIZE] = {"January", "February", "March", "April", "May", "June"
    , "July", "August", "September", "October", "November", "December"};
    float total=0.0f;   //total amount of rainfall
    float avg;          //average rainfall for the year
    float min=0.0f;     //lowest rainfall
    float max=0.0f;     //highest rainfall for the year
    string high;         //highest month rainfall
    string low;          //lowest month rainfall
    
    //explain the function
    cout<<"Gaddis 8thEd Chapter 5 Problem 5"<<endl;
    cout<<"This program calculates the average, high, and low rainfall."<<endl;
    
    //set decimal places to 2
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    //tell user to input the rain fall per month
    for(int i=0;i<SIZE;i++){
        cout<<"Please input rainfall for month "<<month[i]<<endl;
        cin>>rain[i];   //input for the array
    }
    cout<<endl;
    //set the min and max equal to rain[0]
    min=rain[0];
    max=rain[0];
    //calculate total rainfall for the year
    for(int i=0;i<SIZE;i++){
        //calculate total amount of rainfall
        total+=rain[i];
        //find the maximum value for rainfall, and the highest month
        if(rain[i]>max){
            max=rain[i];
            high=month[i];
        }
        //find the minimum value for rainfall, and lowest month
        if(rain[i]<min){
            min=rain[i];
            low=month[i];
        }
    }
    //calculate the average for each month 
    avg=total/SIZE;
    
    //sort the array
    sort2(rain, SIZE);
    //show the array
    showArr2(rain, SIZE);
    
    //could not figure out how to get the months to display along with the sorted array
    
    //output the results
    cout<<"The total rainfall was "<<total<<endl;
    cout<<"The average monthly rainfall was  "<<avg<<endl;
    cout<<"The month with the highest rainfall was "<<high<<" with "<<max<<endl;
    cout<<"The month with the lowest rainfall was "<<low<<" with "<<min<<endl;
}
//******************************************************************************
//*******************************sort array function****************************
//******************************************************************************
void sort2(float array[], int size){
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
//******************************************************************************
//*********************************Show array **********************************
//******************************************************************************
void showArr2(float arry[], int size){
    for(int i=0; i<size; i++){
        cout<<arry[i]<<endl;
    }
}
/****************************************************************
**************************Problem6*******************************
*****************************************************************
*/
void problem6(){
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
    sort3(names, SIZE);
    
    //show the array
    showArr3(names, SIZE);
}
//******************************************************************************
//*******************************sort function**********************************
//******************************************************************************
void sort3(string array[], int size){
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
void showArr3(string arry[], int size){
    for(int i=0; i<size; i++){
        cout<<arry[i]<<endl;
    }
}

/****************************************************************
**************************Problem7*******************************
*****************************************************************
*/
void problem7(){
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
    cout<<"Please enter the name you are looking for: "<<endl;
    getline(cin, input);
    
    //sort the array
    sort5(names, SIZE);
    
    //show the array
    showArr5(names, SIZE);
    
    //run the binary search
    result=binSrch5(names, SIZE, input);
    
    if(result==-1){
        cout<<"Program did not want to work when I put it into the function, works alone. "<<endl;
    }
    else {cout<<"The entry was found at "<<result+1<<": "<<names[result]<<endl;}
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