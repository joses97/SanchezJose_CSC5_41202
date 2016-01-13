/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on January 12 2016
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    unsigned const short unn=10, ins=35;
    float hrsWrkd, dpnds, ssTax, fedTax, stTax, grspay, netpay;
    float rate=16.78;
    //Input data
        cout<<"Please enter number of hours worked this week"<<endl;
        cin>>hrsWrkd;
        cout<<"Now enter the number of dependents"<<endl;
        cin>>dpnds;
    //If statements to determine hours and pay
        if (hrsWrkd<=40) {
    //Calculate charges
            grspay=hrsWrkd*rate;
            netpay=grspay-(ssTax+fedTax+stTax+unn);
            ssTax=hrsWrkd*rate*0.06;
            fedTax=hrsWrkd*rate*0.14;
            stTax=hrsWrkd*rate*0.05;
    //Output Taxes
            cout<<fixed<<setprecision(1)<<showpoint;
            cout<<"You worked "<<hrsWrkd<<" hours this week"<<endl;
            cout<<"Your Gross pay for the week is "<<grspay<<" Dollars"<<endl;
            cout<<"Social security take "<<ssTax<<" Dollars"<<endl;
            cout<<"Federal income tax is "<<fedTax<<" Dollars"<<endl;
            cout<<"State income tax is "<<stTax<<" Dollars"<<endl;
            cout<<"The union takes "<<unn<<" Dollars"<<endl;
    //Dependent test
        if (dpnds>=3){
                netpay=grspay-(ssTax+fedTax+stTax+unn+ins);
                cout<<"The Health Insurance Cost is "<<ins<<" Dollars"<<endl;
                cout<<"Your Net Pay is "<<netpay<<" Dollars"<<endl;
            }
        else if (dpnds<3){
                netpay=grspay-(ssTax+fedTax+stTax+unn);
                cout<<"Your Net Pay is "<<netpay<<" Dollars"<<endl;
            } }
    //Overtime Calculation
        else if (hrsWrkd>40){
            grspay=(671.2+((hrsWrkd-40)*1.5*rate));
            netpay=grspay-(ssTax+fedTax+stTax+unn);
            ssTax=grspay*0.06;
            fedTax=grspay*0.14;
            stTax=grspay*0.05;
    //Output Taxes
            cout<<"You worked "<<hrsWrkd<<" hours this week"<<endl;
            cout<<"Your Gross pay for the week is "<<grspay<<" Dollars"<<endl;
            cout<<"Social security take "<<ssTax<<" Dollars"<<endl;
            cout<<"Federal income tax is "<<fedTax<<" Dollars"<<endl;
            cout<<"State income tax is "<<stTax<<" Dollars"<<endl;
            cout<<"The union takes "<<unn<<" Dollars"<<endl;}
    //Dependent test
        if (dpnds>=3){
                netpay=grspay-(ssTax+fedTax+stTax+unn+ins);
                cout<<"The Health Insurance Cost is "<<ins<<" Dollars"<<endl;
                cout<<"Your Net Pay is "<<netpay<<" Dollars"<<endl;
            }
        else if (dpnds<3){
                netpay=grspay-(ssTax+fedTax+stTax+unn);
                cout<<"Your Net Pay is "<<netpay<<" Dollars"<<endl;
            }
        
    //Exit stage right and close
    return 0;
}

