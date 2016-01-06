/* 
 * File:   main.cpp
 * Author: Jose
 * Savitch Chapter 1 Question 10
 * Created on January 5, 2016, 8:55 PM
 */

/*
 * Purpose:
 */
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int scnds;
    cout<<"Free-fall Calculator"<<endl;
    cout<<"Please enter seconds elapsed, then press enter."<<endl;
    cin>>scnds;
    int scnds2 = scnds + 0;
    int scnds3 = scnds2 * scnds;
    int accl = 32 * scnds3;
    int dstnc = accl / 2;
    cout<<"The object would fall a total of "<<dstnc<<" feet";
    cout<<" in "<<scnds<<endl;
    
    
    return 0;
}

