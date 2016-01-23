
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: interest for credit card
 * Created on January 22 2016
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Set precision 
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
float intrst(float balnce, float monIntr, float numMon){
    do{
        balnce=(monIntr/100.0f*balnce)+balnce;
        numMon--;
    }while(numMon>0);
    return balnce;
}
//Execution Begins Here
int main(int argc, char** argv) {
    //Problem explanation
    cout<<"Solution to Savitch 9thEd Chapter"
            " 4 Practice Programming Problem 6"<<endl;
    //declare and initialize variables 
    float balance;  //initial balance
    float intr;     //interest rate
    float mon;      //month for payback
    //Introduction and program explanation
    cout<<"This Program will calculate the interest on a credit card"<<endl;
    cout<<"Please enter the balance and press enter"<<endl;
    cout<<"Then enter the interest rate % and press enter"<<endl;
    cout<<"Then enter the months this will last and press enter"<<endl;
    
    //Input balance, interest rate, and months it will last
    cin>>balance>>intr>>mon;
    
    //Output the interest 
    cout<<fixed<<showpoint<<setprecision(2)<<"$"
            ""<<intrst(balance, intr, mon)<<" will be the amount owed"<<endl;
    //Exit stage right and close
    return 0;
}

