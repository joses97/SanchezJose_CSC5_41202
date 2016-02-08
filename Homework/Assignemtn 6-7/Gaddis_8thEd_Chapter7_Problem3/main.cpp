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

//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    const int SIZE=5;  //size of the array
    int sales[SIZE];   //array sales
    string salsa[SIZE] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int total=0;   //total amount salsa sold
    int min=0;     //lowest sales of salsa
    int max=0;     //highest sales of salsa
    string high;         //highest salsa seller
    string low;          //lowest salsa seller
    
    //explain program
    cout<<"Gaddis 8thEd Chapter 6 Problem 3"<<endl;
    cout<<"This program takes the sales of salsa and finds the total sales as "
            "well as the highest and lowest selling salsa"<<endl;
    
    //set decimal places to 2
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    //tell user to input the sales for each salsa
    for(int i=0;i<SIZE;i++){
        cout<<"Please input salsa sales for "<<salsa[i]<<endl;
        cin>>sales[i];
    }
    
    //set the min and max equal sales[0]
    min=sales[0];
    max=sales[0];
    //calculate total amount of sales for the year
    for(int i=0;i<SIZE;i++){
        //calculate total sales
        total+=sales[i];
        //find the maximum sales for salsa, and the salsa it is 
        if(sales[i]>max){
            max=sales[i];
            high=salsa[i];
        }
        //find the minimum sales for salsa, and the salsa it is
        if(sales[i]<min){
            min=sales[i];
            low=salsa[i];
        }
    }
    
    cout<<"The sales for the year was "<<total<<endl;
    cout<<"The Salsa with the highest sales was "<<high<<" with "<<max<<endl;
    cout<<"The Salsa with the lowest sales was "<<low<<" with "<<min<<endl;
    
    //Exit stage right and close
    return 0;
}

