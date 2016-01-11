/* 
 * File:   main.cpp
 * Author: Jose
 * Savitch 9thEd Chapter 1 Practice Problem 4
 * Created on January 5, 2016, 7:32 PM
 * Purpose: change multiplication to addition to see logic error
 */
 
/*
 * Question four asked to change the multiplication of pods and peas
 * to addition in order to see the logic error.
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
    total_peas = number_of_pods + peas_per_pod;
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
