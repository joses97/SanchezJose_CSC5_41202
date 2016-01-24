/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Created on January 19, 2016 8:32 AM
 * Purpose: Menu for assignment 3
 */

//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //rand function
#include <ctime>    //time to set the randome seed
#include <iomanip>  //used for precision in decimals
#include <cmath>    //used for pow function to calculate pi
using namespace std;

//User Libraries

//Global Constants
const float LPERG=0.264179f; //conversion 1 gallon = 0.264179 liters
//Function prototypes
float mileper(float miles, float liters); //for problems 6 and 7
float infl(float priceP, float price1); //for problems 8 and 9
float intrst(float balnce, float monIntr, float numMon); //for problem 10
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
   unsigned short nSoltn;//Problem solution to display
   char answr; //response to question
    
    //Menu to display solution 
   do{
        cout<<"Assignment 3 Problem set"<<endl;
        cout<<"Type 1 to Display the First Problem "<<endl;
        cout<<"Type 2 to Display the Second Problem "<<endl;
        cout<<"Type 3 to Display the Third Problem "<<endl;
        cout<<"Type 4 to Display the Fourth Problem "<<endl;
        cout<<"Type 5 to Display the Fifth Problem "<<endl;
        cout<<"Type 6 to Display the Sixth Problem "<<endl;
        cout<<"Type 7 to Display the Seventh Problem "<<endl;
        cout<<"Type 8 to Display the Eighth Problem "<<endl;
        cout<<"Type 9 to Display the Ninth Problem "<<endl;
        cout<<"Type 10 to Display the Tenth Problem "<<endl;
        cout<<"Type anything else to exit"<<endl<<endl;
        cin>>nSoltn;
       //Solution to all the problems
       switch(nSoltn){
           case 1:{
                //Problem to Solve
                cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob11"<<endl;
                cout<<"Hello this program predicts the population of an organism"<<endl;
                //declare variables
                int pop; //population
                float dayIncr; //average daily population increase as a percent 
                unsigned short numDays;    //number of days they will multiply for
                unsigned short counter;    //count the number of days
                unsigned char answr;    //answer to repetition question
                //being do loop, repeat if user wishes
                do{
                    //input the initial population, daily population increase
                    cout<<"Please enter the initial population of the organism"<<endl;
                    cin>>pop;    //input initial population
                    cout<<"Please enter the daily population increase percent EX: 10"<<endl;
                    cin>>dayIncr;   //input daily increase as a percent
                    cout<<"Enter the number of days the population will grow for"<<endl;
                    cin>>numDays;//input number of days

                    //calculations
                    dayIncr=dayIncr/100.0f; //convert day increase to a percent decimal form

                    //statement to determine valid variables
                    if (pop>2&&dayIncr>=0&&numDays>1){
                        //loop to determine final population after numDays
                        for(int i=0;i<numDays;i++){
                        counter++;  //increase counter for number of days
                        pop=(pop*dayIncr)+pop;  //calculate increasing population 
                        cout<<"For day "<<counter<<" population is "<<pop<<endl;
                        }
                    }else{  //telling user to input valid variables
                    cout<<"Please enter a population larger than two"<<endl;
                    cout<<"A positive daily population increase"<<endl;
                    cout<<"And a number larger than one for the number of days"<<endl;
                    }
                    cout<<"Would you like to try other conditions? Y or N"<<endl;
                    cin>>answr;
                }while(toupper(answr)=='Y');
           }break;
           case 2:{
               //The Problem to solve
                cout<<endl<<"Solution to Gaddis 8thEd Chap 5 Prob12"<<endl;
                cout<<endl<<"Display a temperature table"<<endl<<endl;

                //Declare variables
                float slope=5.0f/9.0f;//Slope of the line for temp conversion c/f
                char intrcpt=-32;   //Scale 9/5 degrees c
                unsigned char c1=0, c2=100, f1=32, f2=212;//Data points of freezing a boiling

                //Loop to generate the degree Celsius and output the table 
                cout<<"Fahrenheit   Celsius   Celsius"<<endl;
                cout<<fixed<<setprecision(2)<<showpoint;
                for (int f=f1;f<=f2;f++){
                    float ceq=slope*(f+intrcpt);  
                    float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
                    cout<<setw(10)<<f<<setw(10)<<ceq<<setw(10)<<cintrp<<endl;
                }
           }break;
           case 3:{
               //Problem to Solve
                cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob19"<<endl;
                cout<<"This program calculates if you have gone over budget"<<endl;
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
           }break;
           case 4:{
               //Problem to Solve
                cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob5"<<endl;
                cout<<"This program will calculate the increase in membership prices"<<endl;

                //Declare and initialize variables 
                float cost=2500; // cost of membership first year
                float percInc=0.04;//the amount the price will increase per year
                int numYear; //number of years this will take place for

                //input number of years this will take place for
                cout<<"Current membership price is $2500"<<endl;
                cout<<"Please enter the number of years you would"
                        " like to see membership prices for"<<endl;
                cin>>numYear;//input number of years this will be calculated for 

                //loop for number of years
                for (int i=0;i<numYear;i++){
                    cost=(percInc*cost)+cost;   //calculate the cost of the item 
                    cout<<"In "<<i+1<<" years the price will be"
                            " "<<fixed<<showpoint<<setprecision(2)<<cost<<"$"<<endl;
                }
           }break;
           case 5:{
               //Problem to Solve
                cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob7"<<endl;
                cout<<endl<<"Display a Salary Table"<<endl<<endl;
                cout<<"This program calculates if your salary started at a "
                        "penny and was doubled everyday"<<endl;
                
                //Declare variables
                unsigned int salary=1; //Salary starting at a penny 
                double totPay=salary;          //Total pay by summing the salary
                
                //Loop o generate the salary Table and Total Paid
                cout<<"Day        $Salary         $Total"<<endl;
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<setw(3)<<1<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
                for (int day=2;day<=31;day++){
                    salary*=2;
                    totPay+=salary;
                    cout<<setw(3)<<day<<setw(15)<<salary/100.0<<setw(15)<<totPay/100.0<<endl;
                }
           }break;
           case 6:{
               //Problem explanation
                cout<<"Solution to Savitch Chapter 3 Practice Problem 1"<<endl;
                //answer to repeat question 
                unsigned char answr; //answer to repeat question to repeat entire program
                do{
                    //Declare and initialize variables
                    float mls; //number of miles traveled by the user
                    float lts; //number of liters consumed by the users car
                    float glns; //number of gallons used by the car
                    float mlsperg; // miles per gallon 

                    //Input miles and liters
                    cout<<"This program Takes liters consumed and miles "
                            "traveled and converts it to miles per gallon"<<endl;
                    cout<<"How many miles have you traveled?"<<endl;
                    cin>>mls;     //input miles traveled
                    cout<<"How many liters have you consumed?"<<endl;
                    cin>>lts;    //input liters used

                    //output mpg
                    cout<<"Your car had an efficiency of "
                            ""<<fixed<<showpoint<<setprecision(2)
                            <<mileper(mls, lts) <<""
                            " miles per gallon"<<endl;
                    //input ask user if they wish to repeat
                    cout<<"Would you like to try testing again? Y or N"<<endl;
                    cin>>answr;
                }while(toupper(answr)=='Y');
           }break;
           case 7: {
               //Problem explanation
                cout<<"Solution to Savitch Chapter 3 Practice Problem 2"<<endl;
                //answer to repeat question 
                unsigned char answr; //answer to repeat question to repeat entire program
                do{
                    //Declare and initialize variables
                    float mls, mls2; //number of miles traveled by the user
                    float lts, lts2; //number of liters consumed by the users car
                    float mlsperg, mlsprg2; // miles per gallon 

                    //Input miles and liters
                    cout<<"This program Takes liters consumed and miles "
                            "traveled and converts it to miles per gallon"<<endl;
                    cout<<"How many miles did your first car travel?"<<endl;
                    cin>>mls;//input miles traveled car1
                    cout<<"How many miles did the second car travel?"<<endl;
                    cin>>mls2;//input miles traveled car2
                    cout<<"How many liters did the first car consume?"<<endl;
                    cin>>lts;    //input liters used car1
                    cout<<"How many liters did the second car consume?"<<endl;
                    cin>>lts2;    //input liters used car2
                    //output mpg
                    cout<<"Your first car had an efficiency of "
                            ""<<fixed<<showpoint<<setprecision(2)
                            <<mileper(mls, lts) <<""
                            " miles per gallon"<<endl;
                    cout<<"Your second car had an efficiency of "
                            ""<<fixed<<showpoint<<setprecision(2)
                            <<mileper(mls2, lts2) <<""
                            " miles per gallon"<<endl;
                    if ((mileper(mls, lts))>(mileper(mls2, lts2))){
                        cout<<"The first car had a higher fuel efficiency"<<endl;
                    }else if ((mileper(mls, lts))<(mileper(mls2, lts2))){
                        cout<<"The second car had a higher fuel efficiency"<<endl;
                    }else {
                        cout<<"The cars had the same fuel efficiency"<<endl;
                    }  
                    //input ask user if they wish to repeat
                    cout<<"Would you like to try testing again? Y or N"<<endl;
                    cin>>answr;
                }while(toupper(answr)=='Y');
           }break;
           case 8:{
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
           }break;
           case 9: {
               //Problem explanation
                cout<<"Solution to Savitch Chapter 3 Practice Problem 5"<<endl;
                //answer to repeat question
                unsigned char answr; //answer to repeat question
                do{
                    //variables for prices
                    float prce, prce2; //price for the present
                    float prceP, prceP2;//price to the past
                    //input priceP and price 1
                    cout<<"Hello this program helps you calculate the inflation of an item"<<endl;
                    cout<<"Enter the current price of the first item, then press enter"<<endl;
                    cout<<"Then enter the price of the first item one year ago"<<endl;
                    cin>>prce>>prceP;
                    cout<<"Enter the current price of the second item, then press enter"<<endl;
                    cout<<"Then enter the price of the second item one year ago"<<endl;
                    cin>>prce2>>prceP2;
                    //Output inflation rate
                    cout<<"The inflation rate for the first item was "
                            ""<<fixed<<showpoint<<setprecision(1)
                            <<infl(prce, prceP)<<"%"<<endl;
                    cout<<"The inflation rate for the second item was "
                            ""<<fixed<<showpoint<<setprecision(1)
                            <<infl(prce2, prceP2)<<"%"<<endl;
                    cout<<"Would you like to try testing another object? Y or N"<<endl;
                    cin>>answr;
                }while(toupper(answr)=='Y');
           }break;
           case 10:{
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
           }break;
           default:{
               cout<<"Please enter a number from 1-10"<<endl;
           }
       }
       cout<<"Would you like to see another problem? Y or N"<<endl;
       cin>>answr;
    }while (toupper(answr)=='Y');
    //Output the results
    
    //Exit stage right and close
    return 0;
}float mileper(float miles, float liters){ //miles and liters
    float mpg;  //miles per gallon
    float gallons;  //gallons
    gallons=liters*LPERG;   //calculate gallons 
    mpg=miles/gallons;     //calculate miles per gallon
    return mpg;
}float infl(float priceP, float price1){
    //declare variables
    float diff; //difference price P and price 1
    float inflR;//inflation rate
    //calculate diff and inflR
    diff=priceP-price1; //find difference in price present and price year ago
    inflR=diff/price1*100;  //calculate inflation rate
    //return infR
    return inflR;
}float intrst(float balnce, float monIntr, float numMon){
    do{
        balnce=(monIntr/100.0f*balnce)+balnce;
        numMon--;
    }while(numMon>0);
    return balnce;
}

