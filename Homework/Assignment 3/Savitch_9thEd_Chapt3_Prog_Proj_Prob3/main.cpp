
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Roman numeral conversions
 * Created on January 21, 2016 8:55 AM
 */

//System Libraries
#include <iostream> //I/O
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The Problem to solve
    cout<<endl<<"Solution to Savitch 9thEd Chap3 Prob3"<<endl;
    cout<<endl<<"The Roman numeral conversion program"<<endl;
    
    //Declare and initialize variables
    unsigned short number;           //variable for user input
    unsigned char n1000,n100,n10,n1; //number of 1000s,100s,10s,1s
    
    //Input number to convert to Roman numerals
    cout<<"Please input a number between 1000-3000 to convert"<<endl;
    cin>>number;
    cout<<"The number to convert= "<<number<<endl;
    
    //Calculate the number of 1000's, 100's, 10's, 1's
    n1000 =(number-number%1000)/1000;//number of 1000s
    number=(number-n1000*1000);     //subtract off 1000s
    n100  =(number-number%100)/100; //number of 100s
    number=(number-n100*100);       //subtract off 100s
    n10   =(number-number%10)/10;   //number of 10s
    n1    =(number-n10*10);         //subtract off 10s to et 1s
    
    //Output the number of its components
    cout<<"The number of thousands="<<static_cast<int>(n1000)<<endl;
    cout<<"The number of hundreds ="<<static_cast<int>(n100)<<endl;
    cout<<"The number of tens     ="<<static_cast<int>(n10)<<endl;
    cout<<"The number of ones     ="<<static_cast<int>(n1)<<endl;
    
    //Output the results
    cout<<"The Roman numeral equivalent is ";
    
    //Output the 1000s
    switch(n1000){
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1: cout<<"M";
    }
    //Output the 100s
    switch(n100){
        case 9: cout<<"C";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"CD";break;
        case 3: cout<<"C";
        case 2: cout<<"C";
        case 1: cout<<"C";
    }
    //Output the 10s
    switch(n10){
        case 9: cout<<"XC";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"L";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";
    }
    //Output the 1s
    switch(n1){
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";
    }
    //Exit stage right and close
    return 0;
}

