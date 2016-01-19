/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Created on January 19, 2016 8:32 AM
 * Purpose: Menu
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
   unsigned short nSoltn;//Problem solution to display
   bool reDsply=true;//exit program when false
   
    //Input data
   cout<<"Assignment 3 Problem set"<<endl;
   cout<<"Type 1 to Display Problem 1"<<endl;
   cout<<"Type 2 to Display Problem 2"<<endl;
   cout<<"Type 3 to Display Problem 3"<<endl;
   cout<<"Type anything else to exit"<<endl;
   cin>>nSoltn;
    
    //Menu to display solution 
   do{
        cout<<"Assignment 3 Problem set"<<endl;
        cout<<"Type 1 to Display Problem 1"<<endl;
        cout<<"Type 2 to Display Problem 2"<<endl;
        cout<<"Type 3 to Display Problem 3"<<endl;
        cout<<"Type anything else to exit"<<endl<<endl;
        cin>>nSoltn;
    //Solution to all the problems
       switch (nSoltn){
           case 1:{
               cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob10"<<endl;
               cout<<endl<<"The Fibonacci sequence"<<endl<<endl;
               //Declare Variables 
               unsigned int fi, fim1, fim2; //Designations in the sequence
               unsigned short nTerms;       //Number of terms in the sequence
               unsigned short counter;      //Current position in the sequence
               //Initialize the sequence
               fim2=fim1=1;     //Start the sequence
               counter=2; 
               //Input the number of terms in the sequence
               cout<<"Input the number of terms in the sequence"<<endl;
               cin>>nTerms;
               //Output or calculate the output required
               if (nTerms==1) {
                    cout<<"The "<<nTerms<<" in the sequence = ";
                    cout<<fim2<<endl;
               }else if (nTerms==2){
                   cout<<"Term = "<<nTerms<<" in the sequence =";
                   cout<<fim2<<endl;
               }else{
                   do{
                       fi=fim1+fim2;
                       counter++;
                   }while (counter<nTerms);
                   cout<<"Term "<<nTerms<<" in the sequence = ";
                   cout<<fi<<endl<<endl;
               }
               break;
           }
           case 2:{
               cout<<endl<<"Solution to problem 2"<<endl<<endl;
               break;
           }
           case 3:{
               cout<<endl<<"Solution to problem 3"<<endl<<endl;
               break;
           }
           default:{
               cout<<"Exiting the Program"<<endl;
               reDsply=false;
           }
       }
   }while(reDsply);
   
    //Output the results
    
    //Exit stage right and close
    return 0;
}

