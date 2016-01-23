
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: inflation check calculator
 * Created on January 22 2016
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Set precision 
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
float infl(float priceP, float price1);
//Execution Begins Here
int main(int argc, char** argv) {
    //Problem explanation
    cout<<"Solution to Savitch Chapter 3 Practice Problem 4"<<endl;
    //answer to repeat question
    unsigned char answr; //answer to repeat question
    do{
        //variables for prices
        float prce; //price for the present
        float prce1;//price to the past
        //input priceP and price 1
        cout<<"Hello this program helps you calculate the inflation of an item"<<endl;
        cout<<"Enter the current price of the item, then press enter"<<endl;
        cout<<"Then enter the price of the item one year ago"<<endl;
        cin>>prce>>prce1;
        //Output inflation rate
        cout<<"The inflation rate for the item was "
                ""<<fixed<<showpoint<<setprecision(1)
                <<infl(prce, prce1)<<"%"<<endl;
        cout<<"Would you like to try testing another object? Y or N"<<endl;
        cin>>answr;
    }while(toupper(answr)=='Y');
    //Exit stage right and close
    return 0;
}float infl(float priceP, float price1){
    //declare variables
    float diff; //difference price P and price 1
    float inflR;//inflation rate
    //calculate diff and inflR
    diff=priceP-price1; //find difference in price present and price year ago
    inflR=diff/price1*100;  //calculate inflation rate
    //return infR
    return inflR;
}

