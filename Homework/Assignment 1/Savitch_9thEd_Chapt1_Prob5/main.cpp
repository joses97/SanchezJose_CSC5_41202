/* 
 * File:   main.cpp
 * Author: Jose
 * Savitch 9thEd Chapter 1 Problem 5
 * Created on January 5, 2016, 7:40 PM
 */
 
#include <iostream>

using namespace std;

int main() {
    int wdth, hght;
    
    cout<<"Hello"<<endl;
    cout<< "Press enter after entering a number"<<endl;
    cout<< "Enter the length of the width in feet"<<endl;
    cin>>wdth;
    int T_wdth  = wdth * 2;
    cout<<"Now enter the hieght"<<endl;
    cin>>hght;
    int T_hght  = hght * 2; 
    cout<<"Total length of fence needed is ";
    int T_lngth = T_wdth + T_hght;
    cout<<T_lngth<<endl;
            
    
    return 0;
}
