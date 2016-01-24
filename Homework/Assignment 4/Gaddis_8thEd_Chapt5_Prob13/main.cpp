/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: budget analysis
 * Created on January 23, 2016
 */

//System Libraries
#include <iostream> //I/O formating
#include <iomanip>  //Formating 
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Problem to Solve
    cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob19"<<endl;
 
    //declare and initialize variables 
    float budgt; //user budget
    float total=0; //accumulator initialized with zero
    float expns; //users expenses 
    unsigned short items; //number of items to user will input
    
    //input budget and number of items
    cout<<"Enter the budget you have set"<<endl;
    cin>>budgt; //input the budget
    cout<<"Enter the total number of items you will tally"<<endl;
    cin>>items; //input items 
    cout<<"Enter expenses"<<endl;
    
    //for loop to calculate total
    for (int i=0;i<items;i++){
        cin>>expns; //input the cost of the expense
        total+=expns;  //calculate the running total
    }
    if(total<=budgt){
        cout<<"You have met the budget by $"<<budgt-total<<endl;
    }else{
        cout<<"You have gone over budget by $"<<total-budgt<<endl;
    }
    
    //Exit stage right and close
    return 0;
}

