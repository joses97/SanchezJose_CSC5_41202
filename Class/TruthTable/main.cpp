/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Created on January 11, 2016, 9:00 AM
 * Purpose:Display table and display swaps
 *  */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    bool x=true;
    bool y=true;
    int a=2, b=3, temp;
    
    //create heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y (X^Y)^Y (X^Y)^X !(X&&Y) !X||!Y ";
    cout<<"!(X||Y) !X&&!Y"<<endl;
    
    //First Row
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    //Second Row
    x=true; y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    //Third Row
    x=false; y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<endl;
   
    //Fourth Row
    x=false; y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    //Swap using temp
    cout<<"Before swap using temp"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    cout<<"After swap using temp"<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    
    //Swap using exclusive or operator
    cout<<"Before swap using exclusive order"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    cout<<"After swap using exclusive order"<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    
    //Exit stage right and close
    return 0;
}

