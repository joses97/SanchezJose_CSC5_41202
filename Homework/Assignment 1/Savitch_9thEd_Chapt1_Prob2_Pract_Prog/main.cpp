/* 
 * File:   main.cpp
 * Author: Jose
 * Savitch 9thEd Chapter 1 Problem 2 Practice Programs
 * Created on January 5, 2016, 7:24 PM
 * Purpose: Add hello and goodbye to code from question 1 Practice Program
 */
 
/*
 * Question one asked to copy the code from example 1.8 directly
 *  that is why int variables are longer than 7 characters. 
 *  This is also why \n is used instead of endl;
 */
#include <iostream>

using namespace std;

int main() {
    int number_of_pods, peas_per_pod, total_peas;
    
    cout<<"Hello\n";
    cout<< "Press enter after entering a number.\n";
    cout<< "Enter the number of pods:\n";
   
    cin>>number_of_pods;
    
    cout<< "Enter the number of peas in a pod.\n";
    cin>>peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods.\n";
    cout<<"Goodbye\n";
    return 0;
}
