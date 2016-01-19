/* 
 * File:   main.cpp
 * Author: Jose Sanchez
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
    const char DREPRO=5;           //Days to Reproduce
    float crudWt;                //Weight of crud
    unsigned int nDays;          //Number of days to grow crud
    //Initialize the sequence
    fim2=fim1=1;     //Start the sequence
    counter=2; 
    //Input the number of terms in the sequence
    cout<<"Input the initial weight of the crud in lbs"<<endl;
    cin>>crudWt;
    cout<<"How many days will the crud be allowed to grow "<<endl;
    cin>>nDays;
    //Calculate the number of terms 
    nTerms=nDays/DREPRO+1;
    //Output or calculate the output required
    if (nTerms==1) {
        cout<<"The "<<nDays<<" in the sequence = ";
        cout<<fim2*crudWt<<"(lbs)"<<endl<<endl;
    }else if (nTerms==2){
        cout<<"After "<<nDays<<" days the crud weighs "<<fim1*crudWt<<"(lbs)"
                ""<<endl<<endl;
    }else{
       do{
          fi=fim1+fim2;
          counter++;
          fim2=fim1;
          fim1=fi;
       }while (counter<nTerms);
        cout<<"After "<<nDays<<" days the crud weighs "<<fi*crudWt<<"(lbs)"
                ""<<endl;
    }
    //Exit Stage right
    return 0;
}

