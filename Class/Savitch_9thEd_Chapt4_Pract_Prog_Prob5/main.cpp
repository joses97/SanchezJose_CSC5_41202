
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: inflation check calculator for 2 years
 * Created on January 22 2016
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Set precision 
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Problem explanation
    cout<<"Solution to Savitch Chapter 3 Practice Problem 5"<<endl;
    //answer for repeat question
    unsigned char answr; //answr to repeat question
    do{
         //Declare Variables 
        float priceP, price1; //price present, price 1 year ago
        float priceY1, priceY2; //prices one and two years ahead
        float inflR, diff; //inflation rate for the year 

        //input priceP and price 1
        cout<<"Hello this program helps you calculate the inflation of an item"<<endl;
        cout<<"Enter the current price of the item, then press enter"<<endl;
        cout<<"Then enter the price of the item one year ago"<<endl;
        cin>>priceP>>price1;

        //calculations for inflation
        diff=priceP-price1; //find difference in price present and price year ago
        inflR=diff/price1*100.0f;
        priceY1=inflR/100.0f*priceP+priceP;
        priceY2=inflR/100.0f*priceY1+priceY1;

        //Output inflation rate
        cout<<"The inflation rate for the item was "
                ""<<fixed<<showpoint<<setprecision(1)<<inflR<<"%"<<endl;
        cout<<"One years from now the price is estimated to be $"<<priceY1<<endl;
        cout<<"Two years from now the price is estimated to be $"<<priceY2<<endl;
        
        //Input Y or N if the user would like to repeat
        cout<<"Would you like to try testing another object? Y or N"<<endl;
        cin>>answr;
    }while(toupper(answr)=='Y');
    //Exit stage right and close
    return 0;
}

