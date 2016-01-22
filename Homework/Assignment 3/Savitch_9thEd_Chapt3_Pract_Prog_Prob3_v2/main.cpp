/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: horoscope
 * Created on January 20th, 2016 2:00PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    short bMonth, bDay;
    char answr;
    //Input data
    do{
        cout<<"Please enter your birth month followed by your birth day"<<endl;
        cin>>bMonth>>bDay;
        switch(bMonth){
            case 1: 
                if (bDay>=20){
                    cout<<"You are an Aquarius"<<endl;
                }else {
                    cout<<"You are a Capricorn"<<endl;
                }
                if (bDay<=22&&bDay>=18){
                    cout<<"You were born on a cusp!"<<endl;
                }break;
            case 2: 
                if (bDay>=19){
                    cout<<"You are an Pisces"<<endl;
                }else {
                    cout<<"You are a Aquarius"<<endl;
                }
                if (bDay<=21&&bDay>=17){
                    cout<<"You were born on a cusp!"<<endl;
                }break;
            case 3: 
                if (bDay>=21){
                    cout<<"You are an Aries"<<endl;
                }else {
                    cout<<"You are a Pisces"<<endl;
                }
                if (bDay<=23&&bDay>=19){
                    cout<<"You were born on a cusp!"<<endl;
                }break;
            case 4: 
                if (bDay>=20){
                    cout<<"You are a Taurus"<<endl;
                }else {
                    cout<<"You are a Aries"<<endl;
                }
                if (bDay<=22&&bDay>=18){
                    cout<<"You were born on a cusp!"<<endl;
                }break;
            case 5: 
                if (bDay>=21){
                    cout<<"You are a Gemini"<<endl;
                }else {
                    cout<<"You are a Taurus"<<endl;
                }
                if (bDay<=23&&bDay>=19){
                    cout<<"You were born on a cusp!"<<endl;
                }break;
            case 6: 
                if (bDay>=22){
                    cout<<"You are a Cancer"<<endl;
                }else {
                    cout<<"You are a Gemini"<<endl;
                }
                if (bDay<=24&&bDay>=20){
                    cout<<"You were born on a cusp!"<<endl;
                }break;
            case 7: 
                if (bDay>=23){
                    cout<<"You are a Leo"<<endl;
                }else {
                    cout<<"You are a Cancer"<<endl;
                }
                if (bDay<=25&&bDay>=21){
                    cout<<"You were born on a cusp!"<<endl;
                }break;
            case 8: 
                if (bDay>=23){
                    cout<<"You are a Virgo"<<endl;
                }else {
                    cout<<"You are a Leo"<<endl;
                }
                if (bDay<=25&&bDay>=21){
                    cout<<"You were born on a cusp!"<<endl;
                }break;
            case 9: 
                if (bDay>=23){
                    cout<<"You are a Libra"<<endl;
                }else {
                    cout<<"You are a Virgo"<<endl;
                }
                if (bDay<=25&&bDay>=21){
                    cout<<"You were born on a cusp!"<<endl;
                }break;
            case 10: 
                if (bDay>=23){
                    cout<<"You are a Scorpio"<<endl;
                }else {
                    cout<<"You are a Libra"<<endl;
                }
                if (bDay<=25&&bDay>=21){
                    cout<<"You were born on a cusp!"<<endl;
                }break;
            case 11: 
                if (bDay>=22){
                    cout<<"You are a Sagittarius"<<endl;
                }else {
                    cout<<"You are a Scorpio"<<endl;
                }
                if (bDay<=24&&bDay>=20){
                    cout<<"You were born on a cusp!"<<endl;
                }break;
            case 12: 
                if (bDay>=22){
                    cout<<"You are a Capricorn"<<endl;
                }else {
                    cout<<"You are a Sagittarius"<<endl;
                }
                if (bDay<=23&&bDay>=19){
                    cout<<"You were born on a cusp!"<<endl;
                }break;
        }   
    }while(toupper(answr)=='Y');
     
    //Exit stage right and close
    return 0;
}

