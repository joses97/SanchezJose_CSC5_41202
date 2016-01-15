/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: To calculate net pay with and without over time
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
    unsigned const short unn=10, ins=35;//union take and insurance take
    float hrsWrkd, dpnds; //hours worked and dependents
    float ssTax, fedTax;  //social security tax take and fed tax take
    float stTax, grspay;  //state tax take and gross pay
    float netpay;         //net pay
    float rate=16.87f;    //payrate and hour
    //Input data hours worked and dependents 
        cout<<"This program calculates gross pay, net pay, and taxes at 16.78"
                " dollars an hour"<<endl;
        cout<<"Please enter number of hours worked this week"<<endl;
        cin>>hrsWrkd;
        cout<<"Now enter the number of dependents"<<endl;
        cin>>dpnds;
    //If statements to determine hours and pay
        if (hrsWrkd<=40) { //while input is valid calculate
    //Calculate charges
            grspay=hrsWrkd*rate;        //calculate grosspay
            netpay=grspay-(ssTax+fedTax+stTax+unn); //calculate netpay
            ssTax=hrsWrkd*rate*0.06;    //calculate tax for social security
            fedTax=hrsWrkd*rate*0.14;   //tax for federal level
            stTax=hrsWrkd*rate*0.05;    //tax for state
    //Output Taxes, hours worked, gross pay, state tax, federal tax, union cut
            cout<<fixed<<setprecision(1)<<showpoint;
            cout<<"You worked "<<hrsWrkd<<" hours this week"<<endl;
            cout<<"Your Gross pay for the week is "<<grspay<<" Dollars"<<endl;
            cout<<"Social security take "<<ssTax<<" Dollars"<<endl;
            cout<<"Federal income tax is "<<fedTax<<" Dollars"<<endl;
            cout<<"State income tax is "<<stTax<<" Dollars"<<endl;
            cout<<"The union takes "<<unn<<" Dollars"<<endl;
        }
    //Overtime Calculation
        else if (hrsWrkd>40){ //else calculate 
            grspay=(671.2+((hrsWrkd-40)*1.5*rate)); //gross pay with overtime
            netpay=grspay-(ssTax+fedTax+stTax+unn); //netpay with overtime
            ssTax=grspay*0.06;       //state tax with overtime
            fedTax=grspay*0.14;      //federal tax with overtime
            stTax=grspay*0.05;       //state tax with overtime
    //Output Taxes, hours worked, gross pay, state tax, federal tax, union cut
            cout<<fixed<<setprecision(1)<<showpoint;
            cout<<"You worked "<<hrsWrkd<<" hours this week"<<endl;
            cout<<"Your Gross pay for the week is "<<grspay<<" Dollars"<<endl;
            cout<<"Social security take "<<ssTax<<" Dollars"<<endl;
            cout<<"Federal income tax is "<<fedTax<<" Dollars"<<endl;
            cout<<"State income tax is "<<stTax<<" Dollars"<<endl;
            cout<<"The union takes "<<unn<<" Dollars"<<endl;}
    //Test for number of dependents to determine insurance pay cut
        if (dpnds>=3){ //while dependents is greater than 3 calculate
                netpay=grspay-(ssTax+fedTax+stTax+unn+ins); //netpay
                cout<<fixed<<setprecision(1)<<showpoint;
                cout<<"The Health Insurance Cost is "<<ins<<" Dollars"<<endl;
                cout<<"Your Net Pay is "<<netpay<<" Dollars"<<endl;
            }
        else if (dpnds<3){ //while dependents is less than 3 calculate
                cout<<fixed<<setprecision(1)<<showpoint;
                netpay=grspay-(ssTax+fedTax+stTax+unn); //calculate netpay
                cout<<"Your Net Pay is "<<netpay<<" Dollars"<<endl;
            }
        
    //Exit stage right and close
    return 0;
}

