/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: Roulette wheel
 * Created on February 2nd 2016, 2:00PM
 */

//System Libraries
#include <iostream> //IO
#include <cstdlib>  //rng
#include <ctime>    //set time 0 
#include <iomanip>  //formatting
#include <string>   //strings
#include <fstream>  //file I/O
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
float money(float& mon); //gets users input using pass by reference
void showArr(float array[], int totIn); //show the amount the user had for each bet
void sort(float array[], int size);     //sort the array 
void minMax(float array[], int size);   //finds the minimum and maximum
void showArr2(float array[], int totIn); //shows the sorted array with comments
//Execution Begins Here
int main(int argc, char** argv) {
    //declare and initialize variables
    unsigned short guess;           //user's number guess for the wheel
    char opt1;                      //user's choice for color or number bet
    string color;                   //users choice for black or red
    float totMon=0.0f, totMon1=0.0f;          //users wallet to spend on gambling, totMon 1 saves original value 
    float bet;                      //users bet for that go around
    const unsigned int LIMIT=10000, MAX=100000; //table limit for a single bet
    char answr='Y';                 //users answer to keep playing
    int wins=0, loss=0, plays=0; //counts the number of wins and losses user has
    unsigned int  winsC=0, lossC=0, playsC=0;//counts the number of wins and losses user has for color
    string blank; //no purpose, simply makes the user hit enter to begin the roulette ball
    char winCol;                    //the winning color for gambling on a color
    char pick;                      //the numbers the uses gets for choosing a color
    ofstream outFile;               //outputs to a file
    const int HI=100;              //max amount of items the array can hold
    float value[HI];               //array to hold value at certain points
    float betM[HI];                 //the amount of money won per bet
    int i=0;                       //used to increment the array;   
    
    
    //output results to a file
    outFile.open("Stats.txt");      //output to a file named stats.txt
    
    totMon1=money(totMon); //set totMon1=totMon so it saves the value for investment later
    
    //if statement to make sure user doesn't over 100k
    if (totMon>MAX){
        cout<<"You are only allowed to have $100,000 to bet. "
                "$100,000 is now your max"<<endl;
    }
    //ternary operator 
    totMon=totMon>MAX?MAX:totMon; //makes sure user cannot go over MAX
    
    //set time to 0 for gambling 
    srand(static_cast<unsigned int>(time(0)));
    
    //output all to 2 decimal places
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    //run gambling while user still has money and answr=='Y'
    while(totMon>0&&toupper(answr)=='Y'){
        cout<<"Would you like to bet on a number or a color? Number=N  Color=C"<<endl;
        cin>>opt1;  //input opt1
        cout<<"How much money are you putting down on this bet?"<<endl;
        cout<<"The table max per bet is  10,000"<<endl;
        cin>>bet;   //input the bet amount
        //if statement to determine if bet>limit
        if (bet>LIMIT){
            cout<<"Your bet has been changed to the limit"<<endl;
        }
        bet=bet<LIMIT?bet:LIMIT; //ternary operator, user cant exceed table limit
        // if statement to determine if bet>totMon
        if (bet>totMon){
            cout<<"Your bet has been changed to your remaining balance of $"<<totMon<<endl;
        }
        bet=bet>totMon?totMon:bet; //ternary operator, user cannot bet more than they have
        
        //if opt1 is number run gamble for number betting
        if (toupper(opt1)=='N'){
            cout<<"You selected to play for number"<<endl;
            cout<<"Enter in your guess"<<endl;
            cout<<"NOTE: input 37 for 0. 38 for 00"<<endl;
            cin>>guess; //input users guess for the roulette wheel
            cout<<"You have $"<<bet<<" on "<<guess<<endl;
            cout<<"Enter ''GO'' to gamble."<<endl;
            cin>>blank;//doesnt do anything, used to create a pause
            //begin rng for the outcome
            char roll=rand()%38+1;  //set the random number range 1-38
            cout<<"The number is "<<static_cast<int>(roll)<<endl; //display number out of the roulette wheel
                //if they got guess right run 
                if (guess==roll){
                    cout<<"You've won!"<<endl;
                    cout<<"Your pay out is $"<<bet*37<<endl;  //output bet*37
                    totMon+=(bet*37);   //calculate the new total amount
                    value[i]=totMon;    //set the array equal to the current totMon
                    betM[i]=(bet*37);   //set the value of betM to the winnings of the bet
                    i++;                //increment i so it hold a new value
                    cout<<"Your remaining balance is $"<<totMon<<endl;  //output totMon
                    wins++; //add 1 to number win
                //else
                }else{
                    cout<<"you lose!"<<endl;
                    cout<<"You lost $"<<bet<<" on this gamble"<<endl;   //output bet amount
                    totMon=totMon-bet;  //output totMon amount
                    value[i]=totMon;    //set the array equal to the current totMon
                    betM[i]=(-bet);     //set the value of betM to the loss
                    i++;                //increment i so it hold a new value
                    cout<<"Your remaining balance is $"<<totMon<<endl;
                    loss++; //add 1 to number loss
                }
        }
        //if user picked color run gambling for black or red
        else if (toupper(opt1)=='C'){
            cout<<"You picked to gamble on a color"<<endl;
            cout<<"Please enter the color Black or Red"<<endl;
            cin>>color; //input users color choice
            //if color is black 
            if(toupper(color[0])=='B'){
                cout<<"You picked Black"<<endl;
                pick=1; //set pick = 1 to represent black 
            //else
            }else{
                cout<<"You Picked Red"<<endl;
                pick=2; //set pick = 2 to represent red
            }
            //calculate random number from roulette wheel
            winCol=rand()%38+1; //determine what number the ball will land on winCol=rand()%38+1
            //output the number the ball lands on
            cout<<"The number is "<<static_cast<int>(winCol)<<endl; 
            //switch statement to find what each numbers color is 
            switch (winCol){    //switch case for red result
                case 1: case 3: case 5: case 7: case 9: case 12: case 14: case 16:
                case 18: case 19: case 21: case 23:case 25: case 27: case 30: 
                case 32: case 34: case 36: {
                    if (pick==2){ //if pick=2 then then user wins
                        totMon=totMon+(bet*1.05f);//calculate new balance
                        value[i]=totMon;    //set the array equal to the current totMon
                        betM[i]=(bet*1.05f); //set betM to the winnings 
                        i++;                //increment i so it hold a new value
                        cout<<"Its Red! You won    $"<<bet*1.05f<<endl; //output bet*1.05f
                        cout<<"Your new balance is $"<<totMon<<endl;    //output totMon
                        winsC++;    //add one to wins for color
                    }else if(pick==1){  //if pick=1 then user loses
                        totMon=totMon-bet;//calculate totMon
                        value[i]=totMon;    //set the array equal to the current totMon
                        betM[i]=(-bet);     //set betM to the losses
                        i++;                //increment i so it hold a new value
                        cout<<"Its Red! You lost $"<<bet<<endl; //output bet
                        cout<<"Your new balance is $"<<totMon<<endl;    //output totMon
                        lossC++;    //add one to losses for color                       
                    }
                }break; //cases for a definite loss
                case 37: case 38:{ //37 and 38 represent 0 and 00, user always losses
                    totMon=totMon-bet; //calculate totMon for a loss
                    value[i]=totMon;    //set the array equal to the current totMon
                    betM[i]=(-bet);     //set betM to the losses
                    i++;                //increment i so it hold a new value
                    if (winCol==37){cout<<"The ball landed on 0!"<<endl;}
                    else if (winCol==38){cout<<"The ball landed on a 00!"<<endl;}
                    cout<<"You lost $"<<bet<<endl;  //output bet
                    lossC++; //add one to losses for color
                }break;
                default:{ //default statement for ball landing on black
                    if(pick==2){    //if pick==2 user loses
                        totMon=totMon-bet;  //calculate new totMon for loss
                        value[i]=totMon;    //set the array equal to the current totMon
                        betM[i]=(-bet);     //set betM to the losses
                        i++;                //increment i so it hold a new value
                        cout<<"Its Black! You lost $"<<bet<<endl; //output bet
                        cout<<"Your new balance is $"<<totMon<<endl;  //output totMon
                        lossC++;    //increment color losses
                    }else if(pick==1){              //if pick ==1 user wins
                        totMon=totMon+(bet*1.05f);  //calculate new balance for winnings
                        value[i]=totMon;            //set the array equal to the current totMon
                        betM[i]=(bet*1.05f);        //set betM to winnings
                        i++;                        //increment i so it hold a new value
                        cout<<"Its Black! You won  $"<<bet*1.05f<<endl; //calculate bet*1.05f
                        cout<<"Your new balance is $"<<totMon<<endl;    //calculate totMon
                        winsC++;    //increment color wins 
                    }
                }break;
            }
        }
        //input answr, if yes continue gambling 
        cout<<"Continue gambling? Y/N"<<endl;
        cin>>answr; //input answr
        //calculate some statistics
        plays=wins+loss;//counts the number of times user played for numbers
        playsC=winsC+lossC; //counts the number of times the user played for color  
    }
    //output totMon1 and totMon
    cout<<"You had $"<<totMon1<<" to start with and now have $"<<totMon<<endl;
    //if totMon1>totMon calculate investment for 5 years instead of gambling 
    if (totMon1>totMon){  
        cout<<"If you were to have invested this money for 5 years at 10% you would have $";
        //loop the calculate interest over 5 years
        for(int i=5;i>0;i--){   //for loop
            totMon1=totMon1*0.10f+totMon1; //calculate interest at 10 percent for 5 years
        }
        cout<<totMon1<<endl;    //output totMon1
    }else cout<<"Congrats you beat the house!"<<endl;
    
    //output the statistics of the users gambling
    cout<<endl<<"Displaying your statistic for your bets!"<<endl;
    cout<<"You bet a total of "<<setw(14)<<plays+playsC<<" times"<<endl;
    cout<<"You bet on a color a total of   "<<playsC<<" times"<<endl;
    cout<<"You bet on a number a total of  "<<plays<<" times"<<endl;
    cout<<"You won a total of "<<setw(14)<<wins+winsC<<" times"<<endl;
    cout<<"You loss a total of "<<setw(13)<<loss+lossC<<" times"<<endl;
    cout<<"You won on color a total of "<<setw(5)<<winsC<<" times"<<endl;
    cout<<"You won on a number a total of  "<<wins<<" times"<<endl;
    cout<<"You lost on a color a total of  "<<lossC<<" times"<<endl;
    cout<<"You lost on a number a total of "<<loss<<" times"<<endl;
    
    //output results to a file
    outFile<<endl<<"Displaying your statistic for your bets!"<<endl;
    outFile<<"You bet a total of "<<setw(14)<<plays+playsC<<" times"<<endl;
    outFile<<"You bet on a color a total of   "<<playsC<<" times"<<endl;
    outFile<<"You bet on a number a total of  "<<plays<<" times"<<endl;
    outFile<<"You won a total of "<<setw(14)<<wins+winsC<<" times"<<endl;
    outFile<<"You loss a total of "<<setw(13)<<loss+lossC<<" times"<<endl;
    outFile<<"You won on color a total of "<<setw(5)<<winsC<<" times"<<endl;
    outFile<<"You won on a number a total of  "<<wins<<" times"<<endl;
    outFile<<"You lost on a color a total of  "<<lossC<<" times"<<endl;
    outFile<<"You lost on a number a total of "<<loss<<" times"<<endl;
    //close outFile
    outFile.close();    //close the outfile
    
    
    //show how much the user won or loss per turn 
    cout<<endl;
    showArr(value, i);
    
    //show min and max of bets
    cout<<endl;
    minMax(value, i);
    
    //sort the array 
    sort(value, i);
    
    //show the array
    cout<<endl;
    showArr2(betM, i);
    
    
    //Exit stage right and close
    return 0;
}
//******************************************************************************
//*****************************Get users information ***************************
//******************************************************************************
float money(float& mon){
    cout<<"Welcome to the roulette wheel"<<endl;
    cout<<"How much money do you have to bet tonight? MAX:100,000"<<endl;
    cin>>mon;    //input total amount of money user if willing to spend
    return mon;  
}
//******************************************************************************
//***********************display the array of values ***************************
//******************************************************************************
void showArr(float array[], int totIn){
    for(int a=0; a<totIn; a++){
        cout<<"After bet "<<a+1<<" you had $"<<array[a]<<endl;
    }
}
//******************************************************************************
//***********************sort the array ****************************************
//******************************************************************************
void sort(float array[], int size){
    int srtScan, minIndx, minVal;
    for (srtScan = 0; srtScan < (size-1); srtScan++){
        minIndx = srtScan;
        minVal = array[srtScan];
        for(int index = srtScan + 1; index < size; index++){
            if (array[index] < minVal){
                minVal = array[index];
                minIndx = index;
            }
        }
        array[minIndx] = array[srtScan];
        array[srtScan] = minVal;
    }
 }
//******************************************************************************
//*******************find low and high wallet size *****************************
//******************************************************************************
void minMax(float array[], int size){
    int max=array[0];
    int min=array[0];
    int maxA=0;
    int minB=0;
    for(int i=0;i<size;i++){
        //find the maximum value for rainfall, and the highest month
        if(array[i]>max){
            max=array[i];
            maxA=i+1;
        }
        //find the minimum value for rainfall, and lowest month
        if(array[i]<min){
            min=array[i];
            minB=i+1;
        }
    }
    cout<<"At the most your wallet contained $"<<max<<" at bet "<<maxA<<endl;
    cout<<"At the least your wallet contained $"<<min<<" at bet "<<minB<<endl;
}
//******************************************************************************
//***********************display the array of betM,*****************************
//******************************************************************************
void showArr2(float array[], int totIn){
    for(int a=0; a<totIn; a++){
        if(array[a]>0){
            cout<<"On bet "<<a+1<<" You won  $"<<array[a]<<endl;
        }else if(array[a]<0){
            cout<<"On bet "<<a+1<<" You lost $"<<-1 * array[a]<<endl;
        }
    }
}