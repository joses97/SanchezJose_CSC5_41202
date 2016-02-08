/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Created on Feb 4, 2016
 * Purpose: Menu for assignment 5
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //used for precision in decimals
#include <cmath>    //power function
#include <fstream>  //file i/o
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
int srchId(int MAX, int number[], int input);

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
        cout<<"Type 6 to Display the First Problem "<<endl;
        cout<<"Type 7 to Display the Second Problem "<<endl;
        cout<<"Type anything else to exit"<<endl<<endl;
        cin>>nSoltn;
       //Solution to all the problems
       switch(nSoltn){
           case 1: {problem1();}break;
           case 2: {problem2();}break;
           case 3: {problem3();}break;
           case 4: {problem4();}break;
           case 5: {problem5();}break;
           case 6: {problem6();}break;
           case 7: {problem7();}break;
           default : cout<<""<<endl;
       }
       cout<<"Would you like to see another problem?"<<endl;
       cin>>answr;
   }while(toupper(answr)=='Y');
   return 0;
}
/****************************************************************
**************************Problem1*******************************
*****************************************************************
*/
void problem1(){
    //declare and initialize variables
    const int SIZE=10;  //size of the array
    int number[SIZE];  //array
    int min=0;          //smallest number
    int max=0;          //highest number in the array
    
    //explaining the program
    cout<<"Solution to Gaddis 8thEd Chapter 7 Problem 1"<<endl;
    cout<<"This program finds the minimun and maximum of 10 whole numbers"<<endl;
    //tell user to input 10 variables
    for (int i=0; i<SIZE; i++){
        cout<<"Please enter number: "<<i+1<<endl;
        cin>>number[i];
    } 
    
    //set min and max equal to first number
    min=number[0];
    max=number[0];
    
    //for loop to find smallest number and largest number
    for (int i=0;i<SIZE;i++){
        if(number[i]<min){
            min=number[i];
        }
        if(number[i]>max){
            max=number[i];
        }
    }
    
    //output the smallest and largest number
    cout<<"The smallest number is "<<min<<endl;
    cout<<"The largest number is  "<<max<<endl;
}
/****************************************************************
**************************Problem2*******************************
*****************************************************************
*/
void problem2(){
    const int MAX=20;   //array limit
    char corr[MAX]{'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C',
                    'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'};     //correct answers
    char answer[MAX];   //users answer
    int cor=0;          //counter for correct
    int wrong=0;        //counter for wrong
    
    //input users answers
    cout<<"Gaddis 8thEd Chapter 7 Problem 10"<<endl;
    cout<<"This program check if a users answers to see if they got passed a test"<<endl;
    cout<<"Please enter the answers from the test taker"<<endl;
    //for loop gets users inputs and calculates counts the correct and wrong
    for(int i=0; i<MAX; i++){
        cout<<"Enter the answer for "<<i+1<<endl;
        cin>>answer[i];     //input answer 
        while(toupper(answer[i])<'A'||toupper(answer[i])>'D'){
           cout << "enter another letter: ";
           cin >> answer[i];}
        //if statement to find wrong and correct
        if(toupper(answer[i])==corr[i]){cor++;}
        else{wrong++;}
    }
    cout<<"The number correct was:"<<cor<<endl;
    cout<<"The number incorrect was:"<<wrong<<endl;
    //test if user passed of failed
    if(cor>=15){
        cout<<"You passed"<<endl;
    }else{cout<<"You failed"<<endl;}
}
/****************************************************************
**************************Problem3*******************************
*****************************************************************
*/
void problem3(){
    //declare and initialize variables
    const int SIZE=12;  //size of the array
    float rain[SIZE];   //array for rain fall
    string month[SIZE] = {"January", "February", "March", "April", "May", "June"
    , "July", "August", "September", "October", "November", "December"};
    float total=0.0f;   //total amount of rainfall
    float avg;          //average rainfall for the year
    float min=0.0f;     //lowest rainfall
    float max=0.0f;     //highest rainfall for the year
    string high;         //highest month rainfall
    string low;          //lowest month rainfall
    
    cout<<"Gaddis 8thEd Chapter 7 Problem 2"<<endl;
    cout<<"This program take average rainfall and find the average, low, and high "<<endl;
    
    //set decimal places to 2
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    //tell user to input the rain fall per month
    for(int i=0;i<SIZE;i++){
        cout<<"Please input rainfall for month "<<month[i]<<endl;
        cin>>rain[i];
    }
    
    //set the min and max equal to rain[0]
    min=rain[0];
    max=rain[0];
    //calculate total rainfall for the year
    for(int i=0;i<SIZE;i++){
        //calculate total amount of rainfall
        total+=rain[i];
        //find the maximum value for rainfall, and the highest month
        if(rain[i]>max){
            max=rain[i];
            high=month[i];
        }
        //find the minimum value for rainfall, and lowest month
        if(rain[i]<min){
            min=rain[i];
            low=month[i];
        }
    }
    //calculate the average for each month 
    avg=total/SIZE;
    
    cout<<"The total rainfall was "<<total<<endl;
    cout<<"The average monthly rainfall was  "<<avg<<endl;
    cout<<"The month with the highest rainfall was "<<high<<" with "<<max<<endl;
    cout<<"The month with the lowest rainfall was  "<<low<<" with "<<min<<endl;
}
/****************************************************************
**************************Problem4*******************************
*****************************************************************
*/
void problem4(){
    //declare and initialize variables
    const int SIZE=5;  //size of the array
    int sales[SIZE];   //array sales
    string salsa[SIZE] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int total=0;   //total amount salsa sold
    int min=0;     //lowest sales of salsa
    int max=0;     //highest sales of salsa
    string high;         //highest salsa seller
    string low;          //lowest salsa seller
    
    //explain program
    cout<<"Gaddis 8thEd Chapter 7 Problem 3"<<endl;
    cout<<"This program takes the sales of salsa and finds the total sales as "
            "well as the highest and lowest selling salsa"<<endl;
    
    //set decimal places to 2
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    //tell user to input the sales for each salsa
    for(int i=0;i<SIZE;i++){
        cout<<"Please input salsa sales for "<<salsa[i]<<endl;
        cin>>sales[i];
    }
    
    //set the min and max equal sales[0]
    min=sales[0];
    max=sales[0];
    //calculate total amount of sales for the year
    for(int i=0;i<SIZE;i++){
        //calculate total sales
        total+=sales[i];
        //find the maximum sales for salsa, and the salsa it is 
        if(sales[i]>max){
            max=sales[i];
            high=salsa[i];
        }
        //find the minimum sales for salsa, and the salsa it is
        if(sales[i]<min){
            min=sales[i];
            low=salsa[i];
        }
    }
    
    //output total, high, max, low, min
    cout<<"The sales for the year was "<<total<<endl;
    cout<<"The Salsa with the highest sales was "<<high<<" with "<<max<<endl;
    cout<<"The Salsa with the lowest sales was "<<low<<" with "<<min<<endl;
}
/****************************************************************
**************************Problem5*******************************
*****************************************************************
*/
void problem5(){
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
}
/****************************************************************
**************************Problem6*******************************
*****************************************************************
*/
void problem6(){
    //declare and initialize variables
    ifstream inFile;    //infile
    string file;        //name of file being taken in
    const int MAX=10;   //max for array
    int array[MAX];     //array
    int numFile;        //read number from file 
    int counter=0;      //set counter equal to zero
    int tot=0;          //set the total equal to zero
    int high, low;      //high and low 
    
    //explain program
    cout<<"Gaddis 8thEd Chapter 7 Problem  7"<<endl;
    cout<<"This program reads in a users input and outputs the file and averages"<<endl;
    
    //input the file name
    cout<<"Please input the file name fr.txt"<<endl;
    cin>>file;
    //open the file
    inFile.open(file.data());
    
    //output file not found 
    if(!inFile){
        cout<<"File not found"<<endl;
    }
    
    //while loop for assigning array value and calculate total
    while(inFile >> array[counter]&&counter<MAX){
        tot+=array[counter];
        counter++;
    }
    //output total
    cout<<"The total is "<<tot<<endl;
    //set high and low to first array value
    high=low=array[0];
    
    //for loop, find high and low
    for(int i=0; i<MAX; i++){
        if(array[i]>high){
            high=array[i];
        }
        if(array[i]<low){
            low=array[i];
        }
    }
    //output high and low values and average
    cout<<"The high number was "<<high<<" and the low number was "<<low<<endl;
    cout<<"The average of these values was "<<(float)tot/MAX<<endl;
}
/****************************************************************
**************************Problem7*******************************
*****************************************************************
*/
void problem7(){
    const int ID=7; //max amount for array
    long int empId[ID]{5658845, 4520125, 7895122, 8777541, 
                       8451277, 1302850, 7580489};  //set array values
    int hours[ID];  //array for number of hours
    float payRate[ID];  //array for the pay rate
    float wages[ID];    //array for the wages
    
    //Explain program 
    cout<<"Gaddis 8thEd Chapter 7 Problem 9"<<endl;
    cout<<"This program takes user enter hours and payrate and finds wages"<<endl;
    
    //set decimal 2
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //for loop to input hours worked and payrate, calculates wage 
    for(int i=0; i<ID; i++){
        cout<<"Enter the hours for employee "<<i+1<<" ID:"<<empId[i]<<endl;
        cin>>hours[i];
        while(hours[i]<0){
            cout<<"Invalid hours. Enter a valid number"<<endl;
            cin>>hours[i];
        }
        cout<<"Enter the pay rate of employee "<<i+1<<" ID:"<<empId[i]<<endl;
        cin>>payRate[i];
        while(payRate[i]<15){
            cout<<"Invalid pay rate. Enter a valid pay rate"<<endl;
            cin>>payRate[i];
        }
        wages[i]=hours[i]*payRate[i];
        cout<<"Employee "<<i+1<<" ID:"<<empId[i]<<" is owed $"<<wages[i]<<endl;
    }
    
}

