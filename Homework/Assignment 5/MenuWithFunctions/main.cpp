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
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
//problem1
void problem1();
float showRes(float v1, float v2, float v3, float v4); //shows results of the calculations
float avg(float v1, float v2, float v3, float v4);      //calculates the average of the inputs
float stdDev(float v1, float v2, float v3, float v4);   //calculates the standard deviation

//problem 2
void problem2();
int input2(int& feet, int& inches); //user inputs the feet and inches
int ftToMe2(int feet, int inches); //converts feet and inches to meters and centimeters
float meToCm2(int feet, int inches); //calculates the centimeters 
void output2(int feet, int inches);  //outputs the results

//problem 3
void problem3();
void input3(int& meters, int& centi);//input
int calcCm3(int meters, int centi);  //calculate centimeters
int cmToft3(int meters, int centi);  //calculate feet
float ftToInc3(int meters, int centi);   //calculate the inches
void output3(int meters, int centi);     //output the results
//problem 4
void problem4();
void input5(int& lbs, int& oz);  //user inputs pounds and ounces
int ounce5(int lbs, int oz);     //calculates total ounces
int kilos5(int lbs, int oz);     //calculates total amount of kilograms
float grams5(int lbs, int oz);   //calculates total amount of grams
void output5(int lbs,int oz);    //outputs results
//problem 5
void problem5();
void input6(int& kilos, int& grams); //inputs the amount of grams and kilos
int grams6(int kilos,int grams); //calculate grams
int pound6(int kilos, int grams); //calculate pounds
float ounces6(int kilos, int grams); //calculate ounces
void output6(int kilos, int grams);//output the results
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
        cout<<"Type anything else to exit"<<endl<<endl;
        cin>>nSoltn;
       //Solution to all the problems
       switch(nSoltn){
           case 1: {problem1();}break;
           case 2: {problem2();}break;
           case 3: {problem3();}break;
           case 4: {problem4();}break;
           case 5: {problem5();}break;
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
    //Declare and initialize variables
    float var1, var2, var3, var4; //varibales 1 2 3 and 4 for users input
    float avrg;                  //average score for the student
    float stdDev;               //standard deviation of the users inouts
    
    
    //input var1, var2, var3, var4
    cout<<"Savitch 9thEd Chapter 5 Practice Problem 1"<<endl;
    cout<<"This program caculates the average and the standard deviation of four inputs"<<endl;
    cout<<"Please enter the four numbers, each separated by a space"<<endl;
    cin>>var1>>var2>>var3>>var4;    //input the four variables
    showRes(var1, var2, var3, var4);
}
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//Inputs:
//v1->first score
//v2->second score
//v3->third score
//v4->fourth score
float showRes(float v1, float v2, float v3, float v4){
    cout<<"The average is "<<avg(v1, v2, v3, v4)<<endl;;    //output avg
    cout<<"The standard deviation is "<<stdDev(v1, v2, v3, v4)<<endl;   //output standard deviation
}
//******************************************************************************
//****************************Calculate Average********************************
//******************************************************************************
float avg(float v1, float v2, float v3, float v4){
    float avrg=(v1+v2+v3+v4)/4.0f;  //find the average
    return avrg;                    //return the average
}
//******************************************************************************
//***********************Calculate Standard Deviation***************************
//******************************************************************************
float stdDev(float v1, float v2, float v3, float v4){
    float sqr, dev;     //find the standard deviation 
    sqr=pow((v1-avg(v1,v2,v3,v4)),2)+pow((v2-avg(v1,v2,v3,v4)),2)+
            pow((v3-avg(v1,v2,v3,v4)),2)+pow((v4-avg(v1,v2,v3,v4)),2);
    dev=sqrt(sqr/3.0f);
    return dev;
}
/****************************************************************
**************************Problem2*******************************
*****************************************************************
*/
void problem2(){
    //Declare and initialize variables  
    int feet=0, inches=0; //feet and inches
    
    //set decimal place output to 3
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Savitch 9thEd Chapter 5 Problem 2"<<endl;
    cout<<"This program will convert feet and inches to meters and centimeters"<<endl;
    input2(feet, inches); //user inputs the feet and inches
    output2(feet, inches);            //output the results
}
//******************************************************************************
//***************************input***********************************************
//******************************************************************************
int input2(int& feet, int& inches){
    cout<<"Please input the feet and inches separated by a space"<<endl;
    cin>>feet>>inches;
}
//******************************************************************************
//****************************calculate meters *********************************
//******************************************************************************
int ftToMe2(int feet, int inches){
    int totImp=feet*12+inches;      //calculate total number of inches
    int meters=totImp/39.3701f;   //calculates the number of meters
    return meters;
}
//******************************************************************************
//****************************calculate centimeters*****************************
//******************************************************************************
float ftToCm2(int feet, int inches){
    float totImp=feet*12+inches;      //calculate total number of inches
    float meters=totImp/39.3701f;   //calculates the number of meters
    float centi=(meters-ftToMe2(feet, inches))*100;
    return centi;
}
//******************************************************************************
//****************************output the results********************************
//******************************************************************************
void output2(int feet, int inches){
    //output the feet and inches, and meters and centimeters
    cout<<"You had "<<feet<<" feet and "<<inches<<" inches"<<endl;
    cout<<"This converts to "<<ftToMe2(feet, inches)<<" meters and "
            ""<<ftToCm2(feet, inches)<<" centimeters"<<endl;
}
/****************************************************************
**************************Problem3*******************************
*****************************************************************
*/
void problem3(){
    //Declare and initialize variables 
    int meters=0, centi=0;//the initial amount of meters and centimeters
    
    //set all out puts to two decimal places
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    //explain program 
    cout<<"Savitch 9thEd Chapter 5 problem 3"<<endl;
    cout<<"This program will convert meters and centimeters to feet and inches"<<endl;
    input3(meters, centi);   //run input function to input the meters and centimeters
    output3(meters, centi);  //run output function to output the results
 }
//******************************************************************************
//***********************input the meters and centimeters**********************
//******************************************************************************
void input3(int& meters, int& centi){
    cout<<"Please input meters and centimeters separated by a space"<<endl;
    cin>>meters>>centi;
}
//******************************************************************************
//************************calculate centimeters*********************************
//******************************************************************************
int calcCm3(int meters, int centi){
    int tot=meters*100.0f+centi; //calculate centimeters
    return tot;
}
//******************************************************************************
//***************************centimeters to feet*******************************
//******************************************************************************
int cmToft3(int meters, int centi){
    int feet=calcCm3(meters, centi)/30.48f;  //calculate feet
    return feet;
}
//******************************************************************************
//*****************************feet to inches***********************************
//******************************************************************************
float ftToInc3(int meters, int centi){
    float inch=calcCm3(meters, centi)/30.48f-cmToft3(meters, centi);  
    float totInch=inch*12;  //calculate the total amount of inches
    return totInch;
}
//******************************************************************************
//******************************output feet and inches*************************
//******************************************************************************
void output3(int meters, int centi){
    cout<<"There are "<<cmToft3(meters, centi)<<" feet";
    cout<<" and "<<ftToInc3(meters, centi)<<" inches ";
    cout<<"in "<<meters<<" meters and "<<centi<<" centimeters"<<endl;
}
/****************************************************************
**************************Problem4*******************************
*****************************************************************
*/
void problem4(){
    //Declare and initialize variables 
    int lbs=0, oz=0;    //initial value for pounds and ounces 
    
    //set precision to 2
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    //describe the program
    cout<<"Savitch 9thEd Chapter 5 problem 5"<<endl;
    cout<<"This program will convert pounds and ounces and convert them to"
            "kilograms and grams"<<endl;
    
    //function for inputting the variables
    input5(lbs, oz); //input pounds and ounces
    output5(lbs, oz);//display results
}
//******************************************************************************
//***********************input the pounds and ounces****************************
//******************************************************************************
void input5(int& lbs, int& oz){
    cout<<"Please input the pounds and ounces separated by a space"<<endl;
    cin>>lbs>>oz;
}
//******************************************************************************
//***********************calculate total ounces*********************************
//******************************************************************************
int ounce5(int lbs, int oz){
    int totOZ=lbs*16+oz;
    return totOZ;
}
//******************************************************************************
//***********************Ounces to kilograms************************************
//******************************************************************************
int kilos5(int lbs, int oz){
    int kilo=ounce5(lbs, oz)*0.02834f;
    return kilo;
}
//******************************************************************************
//***********************Ounces to grams****************************************
//******************************************************************************
float grams5(int lbs, int oz){
    float gram=(ounce5(lbs, oz)*0.02834f-kilos5(lbs, oz))*1000.0f;
    return gram;
}
//******************************************************************************
//***********************output all to user*************************************
//******************************************************************************
void output5(int lbs,int oz){
    cout<<"You have "<<lbs<<" pounds and "<<oz<<" ounces "<<endl;
    cout<<"This is equivalent to "<<kilos5(lbs, oz)<<" kilos and"
            " "<<grams5(lbs, oz)<<" grams"<<endl;
}
/****************************************************************
**************************Problem4*******************************
*****************************************************************
*/
void problem5(){
    //Declare and initialize variables 
    int kilos=0, grams=0;   //initial amount of kilos and grams
    
   //set precision
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
   
    //describe the program
    cout<<"Savitch 9thEd Chapter 5 problem 6"<<endl;
    cout<<"This program converts kilograms and grams to pounds and ounces"<<endl;
    input6(kilos, grams);   //output the results
    output6(kilos, grams); //output the results
}
//******************************************************************************
//***********************input the kilos and grams******************************
//******************************************************************************
void input6(int& kilos, int& grams){
    cout<<"Please enter the kilograms and grams separated by a space"<<endl;
    cin>>kilos>>grams;
}
//******************************************************************************
//***********************convert kilos and grams to grams***********************
//******************************************************************************
int grams6(int kilos,int grams){
    int totG=kilos*1000+grams;
    return totG;
}
//******************************************************************************
//***********************convert grams to pounds *******************************
//******************************************************************************
int pound6(int kilos, int grams){
    int pounds=grams6(kilos, grams)*0.002204;
    return pounds;
}
//******************************************************************************
//***********************convert grams to ounces *******************************
//******************************************************************************
float ounces6(int kilos, int grams){
    float lbs=grams6(kilos, grams)*0.002204f-pound6(kilos, grams);
    float oz=lbs*16.0f;
    return oz;
}
//******************************************************************************
//***********************output the results*************************************
//******************************************************************************
void output6(int kilos, int grams){
    cout<<"You entered"<<kilos<<" kilograms and "<<grams<<" grams"<<endl;
    cout<<"This translates to "<<pound6(kilos, grams)<<" pounds and"
            " "<<ounces6(kilos, grams)<<" ounces"<<endl;
}