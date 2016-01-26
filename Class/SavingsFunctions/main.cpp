
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Variations on a savings 
 * Created on January 26, 2016,
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const char PERCENT=100; //convert decimal to percentage
//Function prototypes
float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);//for loop banking with pennies
float save5(float,float,int);//Recursion, function calling itself
float save6(float,int,float=0.05f);//Defaulted save function
float save7(float,float,int);//Defaulted save function

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    float pv=rand()%9001+1000;//[1000,9000]
    float intRate=rand()%11+5;//[5,15]
    char nComp=rand()%16;//[0,15]
    
    //Output the random inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present value   = $"<<pv<<endl;
    cout<<"The interest rate   =  "<<intRate<<"%"<<endl;
    cout<<"The number of years = "<<static_cast<int>(nComp)<<endl;
    
    //Output the results
    cout<<"The savings using Power Function         = $"
            <<save1(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The savings using EXP                    = $"
            <<save2(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The savings using For Loops              = $"
            <<save3(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The savings using For Loops Banking      = $"
            <<save4(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The savings using recursion              = $"
            <<save5(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The savings using defaulting interest    = $"
            <<save6(pv,nComp,intRate/PERCENT)<<endl;
    cout<<"The savings using defaulting interest 5% = $"
            <<save6(pv,nComp)<<endl;
    cout<<"The savings For loops and static counter = $"
            <<save7(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The savings using defaulting interest 5% = $"
            <<save7(pv,intRate/PERCENT,nComp)<<endl;
    //Exit stage right and close
    return 0;
}
//000000011111111111222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*********************************Save1****************************************
//Inputs
//p->Present Value $'s
//i->interest rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//note: using the power function
float save6(float p ,int n, float i){
    return p*exp(n*log(i+1));
}
//000000011111111111222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*********************************Save1****************************************
//Inputs
//p->Present Value $'s
//i->interest rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//note: using the power function
float save1(float p ,float i,int n){
    return p*exp(n*log(i+1));
}
//000000011111111111222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*********************************Save1****************************************
//Inputs
//p->Present Value $'s
//i->interest rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//note: using the power function
float save2(float p ,float i,int n){
    return p*pow((i+1),n);
}
//000000011111111111222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*********************************Save1****************************************
//Inputs
//p->Present Value $'s
//i->interest rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//note: using the power function
float save3(float p,float i,int n){
    for (int years=1;years<=n;years++){
        p*=(1+i);
    }
    return p;
}
//000000011111111111222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*********************************Save1****************************************
//Inputs
//p->Present Value $'s
//i->interest rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//note: using the power function
float save4(float p,float i,int n){
    int ip=p*PERCENT;//place the value in pennies
    for (int years=1;years<=n;years++){
        ip*=(1+i);
    }
    p=static_cast<float>(ip)/PERCENT;//returning it to dollars 
    return p;
}
//000000011111111111222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*********************************Save1****************************************
//Inputs
//p->Present Value $'s
//i->interest rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//note: using the power function
float save5(float p,float i,int n){
    if (n<=0)return p;//base condition
    return save5(p,i,n-1)*(1+i);
}
//000000011111111111222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*********************************Save1****************************************
//Inputs
//p->Present Value $'s
//i->interest rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//note: using the power function
float save7(float p,float i,int n){
    static int nCalls=0;
    for (int years=1;years<=n;years++){
        p*=(1+i);
    }
    nCalls++;
    cout<<"This function save7 contains a static counter = "<<nCalls<<endl;
    return p;
}

