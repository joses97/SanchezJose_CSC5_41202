/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 19, 2016, 9:30 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
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
           fim2=fim1;
           fim1=fi;
       }while (counter<nTerms);
       cout<<"Term "<<nTerms<<" in the sequence = ";
       cout<<fi<<endl<<endl;
               }
    //Exit Stage right
    return 0;
}

