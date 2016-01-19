/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Created on January 19, 2016 8:32 AM
 * Purpose: Menu
 */

//System Libraries
#include <iostream>
#include <cmath>
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
    
    //Menu to display solution 
   do{
        cout<<"Assignment 3 Problem set"<<endl;
        cout<<"Type 1 to Display Problem 1"<<endl;
        cout<<"Type 2 to Display Problem 2"<<endl;
        cout<<"Type 3 to Display Problem 3"<<endl;
        cout<<"Type anything else to exit"<<endl<<endl;
        cin>>nSoltn;
       //Solution to all the problems
       switch(nSoltn){
           case 1:{
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
                                ""<<endl<<endl;
                    }
               break;
           }
           case 2:{
                const unsigned char nTerms=13;
                float etox=1,x;//e^x
                //Input the value x
                cout<<"Input x of e^x computation"<<endl;
                cin>>x;

                //Calculate e^x
                for (int n=1;n<nTerms;n++){
                    //Declare and initialize variables 
                    unsigned int factN=1;//N and N!

                    //Calculate or map inputs to outputs
                    for (int i=1; i<=n;i++){
                        factN*=i;
                    }
                    //Calculate e^x with the above factorial
                    etox+=pow(x,n)/factN;
                }
                //Output the results
                cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
                cout<<"The approx value of e^"<<x<<"="<<etox<<endl;
                           break;
           }
           case 3:{
               cout<<endl<<"Solution to problem 3"<<endl<<endl;
               break;
           }
           default :{
               cout<<"Exiting the Program"<<endl;
               reDsply=false;
           }
       }
   }while(reDsply);
   
    //Output the results
    
    //Exit stage right and close
    return 0;
}

