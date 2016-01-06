/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Savitch chapter 1 problem 7 
 * Created on January 5, 2016, 5:37 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    short  vrbl_1=20, vrbl_2=8;    //vrbl= variable
    short add_1, mlti_1;           //mlti= multiply result
    add_1  = vrbl_1 + vrbl_2;
    mlti_1 = vrbl_1 * vrbl_2;
    cout<<"20 and 8 are added together"<<endl;
    cout<<"Then 20 and 8 are multiplied together"<<endl;
    cout<<"The sum of 20 and 8 is ";
    cout<<add_1<<endl;
    cout<<"The product of 20 and 8 is ";
    cout<<mlti_1<<endl;
    return 0;
}

