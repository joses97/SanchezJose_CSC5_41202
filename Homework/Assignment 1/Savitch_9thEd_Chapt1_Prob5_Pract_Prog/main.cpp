/* 
 * File:   main.cpp
 * Author: Jose
 * Savitch 9thEd Chapter 1 Practice Program 5
 * Created on January 5, 2016, 7:40 PM
 * Purpose: Find total length of fence needed
 */
 
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here

int main() {
    //Declare and Initialize variables
    unsigned short wdth, hght, T_wdth, T_hght, T_lngth;
    
    //Input Width and Height of area rectangular area
    cout<<"Hello"<<endl;
    cout<<"This is to calculate the total length of the fence needed"<<endl;
    cout<< "Press enter after entering a number"<<endl;
    cout<< "Enter the width in feet of the space"<<endl;
    cin>>wdth;
    cout<<"Now enter the height in feet of the space"<<endl;
    cin>>hght;
    
    //Calculate total length of fence needed
    T_hght  = hght * 2; 
    T_wdth  = wdth * 2;
    T_lngth = T_wdth + T_hght;
    
    //Output width. height, and total length
    cout<<"You have a width of " <<wdth<<" feet"<<endl;
    cout<<"And a height of "<<hght<<" feet"<<endl;
    cout<<"Total length of fence needed is ";
    cout<<T_lngth<<" feet"<<endl;
    
    //Exit stage right
    return 0;
}
