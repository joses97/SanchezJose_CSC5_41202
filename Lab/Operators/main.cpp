/*Author: Jose Sanchez
 *Date:01/11/16
 *Purpose:Jack Pot
 */

//System libraries
#include <iostream>
using namespace std;

	//User libraries

	//Global constant

	//Function Prototypes

int main() {
	//Declare Variables and initialize them
    int score;

	//Input
    cout<<"Enter your score between 0-100"<<endl;
    cin>>score;
	//Calculation of Jackpot

	//Output
         cout<<"Your Ternary Operator = "<<
         (score>=90?"A":
         (score>=80?"B":
         (score>=70?"c":
         (score>=60?"D":"F"))))<<endl;
         
         
        
        cout<<"Your Dependent if = ";
         if(score>=90)
        cout<<"A"<<endl;
        else if(score>=80)
            cout<<"B"<<endl;
        else if(score>=70)
        cout<<"C"<<endl;
        else if(score>=60)
        cout<<"D"<<endl;
        else 
          cout<<"F"<<endl;
        
        cout<<"Your Independent if is = ";
        if(score>=90)
        cout<<"A"<<endl;
        if(score>=80&&score<=89)
        cout<<"B"<<endl;
        if(score>=70&&score<80)
        cout<<"C"<<endl;
        if(score>=60&&score<70)
        cout<<"D"<<endl;
        if(score<60)
        cout<<"F"<<endl;
        
        cout<<"Your switch score is = "<<endl;
        
	return 0;
}
