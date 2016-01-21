
/* 
 * File:   main.cpp
 * Author: Jose Sanchez
 * Purpose: long distance call calculator
 * Created on January 20, 2016 8:30 PM
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize variables
    char day,day1; //user input
    char capDay,capDay1; //used to make user input caps
    short time, min;
    float cost;
    //Explaining Program and input day of the week and time and minutes
    cout<<"Hello, this program tell you the cost of a call"<<endl;
    cout<<"Please enter the day of the call with the first to letters"<<endl;
    cin>>day>>day1; //input to letter code for day of the week
    capDay=toupper(day);    //convert to uppercase
    capDay1=toupper(day1);  //convert to uppercase
    cout<<"Please enter the hour you are making this call in 24 hour"
            " format. EX: 6:00PM=1800"<<endl;
    cin>>time;      //Input for time
    cout<<"Please enter how many minutes the call will last"<<endl;
    cin>>min;       //Input for number of minutes
    //if statements to determine what day user calls on 
    if (capDay=='M'||capDay=='T'||capDay=='W'||capDay1=='H'||capDay=='F'){
        if (time>=800&&time<=1800){
            cost=0.40f*min;
            cout<<"The cost for a "<<min<<" "
                    "minute call is $"<<setprecision(2)<<fixed<<cost<<endl;
        }else {
            cost=0.25f*min;
            cout<<"The cost for a "<<min<<""
                    " minute call is $"<<setprecision(2)<<fixed<<cost<<endl;
        }
    }else {
        cost=0.15f*min;
        cout<<"The cost for a "<<min<<""
                " minute call is $"<<setprecision(2)<<fixed<<cost<<endl;
    }
    
    //If statements
    
    //Exit stage right and close
    return 0;
}

