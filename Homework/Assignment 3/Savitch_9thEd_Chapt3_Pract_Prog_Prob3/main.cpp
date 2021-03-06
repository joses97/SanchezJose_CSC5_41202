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
    //do loop for repetition 
    do{
        //name the problem 
        cout<<"Solution for Savitch 9thEd Chapter 3 Practice Problem 3"<<endl;
        //Input the birth month, then the birth date
        cout<<"Hello! This program tells you your horoscope"<<endl;
        cout<<"Please enter the month you were born in"<<endl;
        cin>>bMonth;    //birth month
        cout<<"Please enter the day you were born"<<endl;
        cin>>bDay;      //birthday
    //Select the month using else if
        if (bDay>31||bMonth>12){
            cout<<"Please enter a valid day or month"<<endl;
        }
        else if (bMonth==1&&bDay>=20||bMonth==2&&bDay<=18){  //Horoscope for Jan to Feb
            cout<<"You are a Aquarius"<<endl;
            if (bDay<=21&&bDay>18){          //Test for Cusp
                cout<<"Your birthday is on a cusp!"<<endl;
            }else if (bMonth==2&&bDay>=16){
                cout<<"Your birthday is on a cusp!"<<endl;
            }
        //Horoscope Feb To Mar
        }else if (bMonth==2&&bDay>=19||bMonth==3&&bDay<=20){
            cout<<"You are a Pisces"<<endl;
            if (bDay<=21&&bDay>=18){        //Test for Cusp
                cout<<"Your birthday is on a cusp!"<<endl;
            }
        //Horoscope Mar to Apr
        }else if (bMonth==3&&bDay>=21||bMonth==4&&bDay<=19){
            cout<<"You are an Aries"<<endl;
            if (bDay<=22&&bDay>=19){        //Test for Cusp
                cout<<"Your birthday is on a cusp!"<<endl;
            }else if (bMonth==4&&bDay>=17){
                cout<<"Your birthday is on a cusp!"<<endl;
            }
        //Horoscope Apr to May
        }else if (bMonth==4&&bDay>=20||bMonth==5&&bDay<=20){
            cout<<"You are a Taurus"<<endl;
            if (bDay<=21&&bDay>=19){        //test for cusp
                cout<<"Your birthday is on a cusp!"<<endl;
            }
        //horoscope May to Jun
        }else if (bMonth==5&&bDay>=21||bMonth==6&&bDay<=21){
            cout<<"You are a Gemini"<<endl;
            if (bDay<=22&&bDay>=20){        //test for cusp
                cout<<"Your birthday is on a cusp!"<<endl;
            }
        //horoscope Jun to Jul
        }else if (bMonth==6&&bDay>=22||bMonth==7&&bDay<=22){
            cout<<"You are a Cancer"<<endl;
            if (bDay<=23&&bDay>=21){        //test for cusp
                cout<<"Your birthday is on a cusp!"<<endl;
            }
        //horoscope Jul to Aug    
        }else if (bMonth==7&&bDay>=23||bMonth==8&&bDay<=22){
            cout<<"You are a Leo"<<endl;
            if (bDay<=24&&bDay>=21){        //Test for cusp
                cout<<"Your birthday is on a cusp!"<<endl;
            }
        //horoscope Aug to Sept
        }else if (bMonth==8&&bDay>=23||bMonth==9&&bDay<=22){
            cout<<"You are a Virgo"<<endl;
            if (bDay<=24&&bDay>=21){        //test for cusp
                cout<<"Your birthday is on a cusp!"<<endl;
            }
        //horoscope Sept to Oct
        }else if (bMonth==9&&bDay>=23||bMonth==10&&bDay<=22){
            cout<<"You are a Libra"<<endl;
            if (bDay<=24&&bDay>=21){        //test for cusp
                cout<<"Your birthday is on a cusp!"<<endl;
            }
        //horoscope Oct to Nov    
        }else if (bMonth==10&&bDay>=23||bMonth==11&&bDay<=21){
            cout<<"You are a Scorpio"<<endl;
            if (bDay<=24&&bDay>=22){        //test for cusp
                cout<<"Your birthday is on a cusp!"<<endl;
            }else if (bMonth==11&&bDay>=19){
                cout<<"Your birthday is on a cusp!"<<endl;
            }
        //horoscope Nov to Dec
        }else if (bMonth==11&&bDay>=22||bMonth==12&&bDay<=21){
            cout<<"You are a Sagittarius"<<endl;
            if (bDay<=23&&bDay>=20){        //test for cusp
                cout<<"Your birthday is on a cusp!"<<endl;
            }
        //horoscope Dec to Jan
        }else if (bMonth==12&&bDay>=22||bMonth==1&&bDay<=19){
            cout<<"You are a Capricorn"<<endl;
            if (bDay<=23&&bDay>=20){        //test for cusp
                cout<<"Your birthday is on a cusp!"<<endl;
            }else if (bMonth==1&&bDay>=17){
                cout<<"Your birthday is on a cusp!"<<endl;
            }
        }else { //telling user to enter a valid day
            cout<<"Please enter a valid day"<<endl;
        }   
        //asking user for Y or N to see if they want to repeat 
        cout<<"Would you like to check another birthdate?"
                " Please answer Y or N"<<endl;
        cin>>answr;
     
    }while(toupper(answr)=='Y');
     
    //Exit stage right and close
    return 0;
}

