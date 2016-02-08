/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: 
 * Created on February 6th 2016
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //formatting
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    float  lbs; //amount of pounds the monkeys consume
    const int MNKYS=3, DAYS=5;  //amount of monkeys, and days to log
    float array[MNKYS][DAYS];   //array for is monkeys, columns is the days
    float total=0.0f;           //total amount of food the monkeys consumed
    float least=0.0f;           //least amount of food eaten by a monkey
    float most=0.0f;            //most amount of food eaten by a monkey
    int low;                    //high 
    int high;                   //low
    
    //explain program
    cout<<"Gaddis 8thEd Chapter 7 Probelm 5 "<<endl;
    cout<<"This program reads the food of monkeys and find the average eaten per day"<<endl; 
    
    //set output to 2 decimal places
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    //input data for monkeys
    for(int a=0; a<MNKYS; a++){
        for(int b=0;b<DAYS; b++){
            cout<<"Input data for monkey "<<a+1<<" day "<<b+1<<": ";
            cin>>array[a][b];
        }
    }
    
    //find the total 
    for(int a=0; a<MNKYS; a++){
        for(int b=0; b<DAYS; b++){
            total+=array[a][b];
        }
    }
    //output the average food per day
    cout<<"The average amount of food eaten per day was "<<total/DAYS<<endl;
    
    //set the min and max to the initial arrays
    least=array[0][0];
    most=array[0][0];
    
    //find the least amount of food eaten
    for(int a=0; a<MNKYS; a++){
        for(int b=0; b<DAYS; b++){
            if(array[a][b]>=most){
                most=array[a][b];
                high=a+1;
            }
            if(array[a][b]<=least){
                least=array[a][b];
                low=a+1;
            }
        }
    }
    
    cout<<"The most amount of food eaten was "<<most<<"lbs by monkey "<<high<<endl;
    cout<<"The least amount of food eaten was "<<least<<"lbs by monkey "<<low<<endl;
    
    //Exit stage right and close
    return 0;
}

