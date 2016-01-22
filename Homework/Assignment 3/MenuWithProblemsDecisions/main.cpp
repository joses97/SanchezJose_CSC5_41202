/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Created on January 19, 2016 8:32 AM
 * Purpose: Menu
 */

//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //rand function
#include <ctime>    //time to set the randome seed
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
   unsigned short nSoltn;//Problem solution to display
   char answr; //response to question
   
    //Input data
    
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
           case 1: {
                cout<<"Solution to Savitch 8thEd Chapt3 Problem 11"<<endl;
                cout<<"Factorial of N"<<endl;
                //Declare and initialize variables 
                unsigned int n, factN=1;//N and N!
                //Input data
                cout<<"Enter the number you would like to compute the factorial n!"<<endl;
                cout<<"The limit of this calculation is <=13"<<endl;
                cin>>n;

                //Calculate or map inputs to outputs
                for (int i=1; i<=n;i++){
                    factN*=i;
                }
                //Output the results
                cout<<n<<"! = "<<factN<<endl;
           }break;
           case 2: {
               cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob10"<<endl;
               cout<<endl<<"The Fibonacci sequence"<<endl<<endl;
               //Declare Variables 
               unsigned int fi, fim1, fim2; //Designations in the sequence
               unsigned short nTerms;       //Number of terms in the sequence
               unsigned short counter;      //Current position in the sequence

               //Start the sequence
               fim2=fim1=1;     
               counter=2; 

               //Input the number of terms in the sequence
               cout<<"Input the number of terms in the sequence"<<endl;
               cin>>nTerms;

               //Output or calculate the output required
               if (nTerms==1) {
                    cout<<"The "<<nTerms<<" in the sequence = ";
                    cout<<fim2<<endl;
               }else if (nTerms==2){
                   cout<<"Term = "<<nTerms<<" in the sequence =";
                   cout<<fim2<<endl;
               }else{
                   do{
                       fi=fim1+fim2;
                       counter++;
                       fim2=fim1;
                       fim1=fi;
                   }while (counter<nTerms);
                   cout<<"Term "<<nTerms<<" in the sequence = ";
                   cout<<fi<<endl<<endl;
                           }
           }break;
           case 3: {
                //show which problem it is and name the game
                cout<<endl<<"Solution to Savitch 9thEd chapter 3 Practice program 1"<<endl;
                cout<<endl<<"The rock-paper-scissors game"<<endl<<endl;

                //set the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare and initialize variables 
                char computr; //Computers play
                char player;  //The players move
                char answr;   //Answer for repeat question

                //Players turn
                do{
                    do{
                        cout<<"Whats your move P, R, S?"<<endl;
                        cin>>player;
                        player=toupper(player);
                    }while (!(player=='P'||player=='R'||player=='S'));


                    //Computer Generated play 
                    do{
                        computr=rand()%4+80;
                    }while(computr=='Q');

                    //Output the results
                    cout<<"The computer played  "<<computr<<endl;
                    cout<<"The Players move     "<<player<<endl;

                    //Win, Loss or Tie result
                    if (player==computr){
                        cout<<"Its a Tie!"<<endl;
                    }else if(player=='R'&&computr=='S'){
                        cout<<"You Win, Congrats!"<<endl;
                    }else if(player=='S'&&computr=='P'){
                        cout<<"You Win, Congrats!"<<endl;
                    }else if(player=='P'&&computr=='R'){
                        cout<<"You Win, Congrats!"<<endl;
                    }else {
                        cout<<"You lose!"<<endl;
                    }
                cout<<"Play Rock Paper Scissors again? Please enter Y or N"<<endl;
                cin>>answr;
                }while(toupper(answr)=='Y');
           }break;
           case 4:{
                   //Declare and initialize variables 
                    short bMonth, bDay; //birthmonth and birthday 
                    char answr;         //answer for repetition problem 
                    //do loop for repetition 
                    do{
                        //name the problem 
                        cout<<"Solution for Savitch 9thEd Chapter 3 Practice Program 3"<<endl;
                        //Input the birth month, then the birth date
                        cout<<"Hello! This program tells you your horoscope"<<endl;
                        cout<<"Please enter the month you were born in"<<endl;
                        cin>>bMonth;    //input birth month
                        cout<<"Please enter the day you were born"<<endl;
                        cin>>bDay;      //input birthday
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
           }break;
           case 5: {
               //Declare and initialize variables 
                short bMonth, bDay; //birth month and birth day
                char answr;         //answer to repetition question 
                do{
                    //output the problem information 
                    cout<<"Solution for Savitch 9thEd Chapter 3 Practice Program 3"<<endl;
                    //Input data for birth month and birth day 
                    cout<<"Hello! This program tells you your horoscope"<<endl;
                    cout<<"Please enter the month you were born in"<<endl;
                    cin>>bMonth;    //input birth month 
                    cout<<"Please enter the day you were born"<<endl;
                    cin>>bDay;      //input birth day
                //Select the month using else if
                    if (bDay>31||bMonth>12){
                        cout<<"Please enter a valid day or month"<<endl;
                    }
                    else if (bMonth==1&&bDay>=20||bMonth==2&&bDay<=18){  //Horoscope for Jan to Feb
                        cout<<"You are a Aquarius"<<endl;
                        cout<<"Your element is AIR, you are compatible with "
                                "Gemini and Libra"<<endl;
                        if (bDay<=21&&bDay>18){          //Test for Cusp
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }else if (bMonth==2&&bDay>=16){
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }
                    //Horoscope Feb To Mar
                    }else if (bMonth==2&&bDay>=19||bMonth==3&&bDay<=20){
                        cout<<"You are a Pisces"<<endl;
                        cout<<"Your element is WATER, you are compatible with "
                                "Cancer and Scorpio"<<endl;
                        if (bDay<=21&&bDay>=18){        //Test for Cusp
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }
                    //Horoscope Mar to Apr
                    }else if (bMonth==3&&bDay>=21||bMonth==4&&bDay<=19){
                        cout<<"You are an Aries"<<endl;
                        cout<<"Your element is FIRE, you are compatible with "
                                "Leo and Sagittarius"<<endl;
                        if (bDay<=22&&bDay>=19){        //Test for Cusp
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }else if (bMonth==4&&bDay>=17){
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }
                    //Horoscope Apr to May
                    }else if (bMonth==4&&bDay>=20||bMonth==5&&bDay<=20){
                        cout<<"You are a Taurus"<<endl;
                        cout<<"Your element is EARTH, you are compatible with "
                                "Virgo and Capricorn"<<endl;
                        if (bDay<=21&&bDay>=19){        //test for cusp
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }
                    //horoscope May to Jun
                    }else if (bMonth==5&&bDay>=21||bMonth==6&&bDay<=21){
                        cout<<"You are a Gemini"<<endl;
                        cout<<"Your element is AIR, you are compatible with "
                                "Aquarius and Libra"<<endl;
                        if (bDay<=22&&bDay>=20){        //test for cusp
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }
                    //horoscope Jun to Jul
                    }else if (bMonth==6&&bDay>=22||bMonth==7&&bDay<=22){
                        cout<<"You are a Cancer"<<endl;
                        cout<<"Your element is WATER, you are compatible with "
                                "Scorpio and Pisces"<<endl;
                        if (bDay<=23&&bDay>=21){        //test for cusp
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }
                    //horoscope Jul to Aug    
                    }else if (bMonth==7&&bDay>=23||bMonth==8&&bDay<=22){
                        cout<<"You are a Leo"<<endl;
                        cout<<"Your element is FIRE, you are compatible with "
                                "Aries and Sagittarius"<<endl;
                        if (bDay<=24&&bDay>=21){        //Test for cusp
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }
                    //horoscope Aug to Sept
                    }else if (bMonth==8&&bDay>=23||bMonth==9&&bDay<=22){
                        cout<<"You are a Virgo"<<endl;
                        cout<<"Your element is EARTH, you are compatible with "
                                "Taurus and Capricorn"<<endl;
                        if (bDay<=24&&bDay>=21){        //test for cusp
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }
                    //horoscope Sept to Oct
                    }else if (bMonth==9&&bDay>=23||bMonth==10&&bDay<=22){
                        cout<<"You are a Libra"<<endl;
                        cout<<"Your element is AIR, you are compatible with "
                                "Aquarius and Gemini"<<endl;
                        if (bDay<=24&&bDay>=21){        //test for cusp
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }
                    //horoscope Oct to Nov    
                    }else if (bMonth==10&&bDay>=23||bMonth==11&&bDay<=21){
                        cout<<"You are a Scorpio"<<endl;
                        cout<<"Your element is WATER, you are compatible with "
                                "Cancer and Pisces"<<endl;
                        if (bDay<=24&&bDay>=22){        //test for cusp
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }else if (bMonth==11&&bDay>=19){
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }
                    //horoscope Nov to Dec
                    }else if (bMonth==11&&bDay>=22||bMonth==12&&bDay<=21){
                        cout<<"You are a Sagittarius"<<endl;
                        cout<<"Your element is FIRE, you are compatible with "
                                "Leo and Aries"<<endl;
                        if (bDay<=23&&bDay>=20){        //test for cusp
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }
                    //horoscope Dec to Jan
                    }else if (bMonth==12&&bDay>=22||bMonth==1&&bDay<=19){
                        cout<<"You are a Capricorn"<<endl;
                        cout<<"Your element is EARTH, you are compatible with "
                                "Virgo and Taurus"<<endl;
                        if (bDay<=23&&bDay>=20){        //test for cusp
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }else if (bMonth==1&&bDay>=17){
                            cout<<"Your birthday is on a cusp!"<<endl;
                        }
                    }else {
                        cout<<"Please enter a valid day"<<endl;
                    }
                    cout<<"Would you like to check another birthdate?"
                            " Please answer Y or N"<<endl;
                    //user inputs answr to see if they would like to rerun program 
                    cin>>answr;
                  }while(toupper(answr)=='Y');
           }break;
           case 6:{
               
           }
       
       }
       cout<<"Would you like to see another problem? Y or N"<<endl;
       cin>>answr;
    }while (toupper(answr)=='Y');
    //Output the results
    
    //Exit stage right and close
    return 0;
}

