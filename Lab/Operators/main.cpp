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
        
        cout<<"Your switch score is = ";
        switch (score) 
        {
        case 100:case 99:case 98:case 97:case 96:case 95:case 94:case 93:case 92:case 91: case 90:
            cout<<"A"<<endl;
            break;
        case 89:case 88:case 87:case 86:case 85:case 84:case 83:case 82:case 81: case 80:
            cout<<"B"<<endl;
            break;
        case 79:case 78:case 77:case 76:case 75:case 74:case 73:case 72:case 71: case 70:
            cout<<"C"<<endl; 
            break;
        case 69:case 68:case 67:case 66:case 65:case 64:case 63:case 62:case 61: case 60:
            cout<<"D"<<endl;
            break;
        default:
                cout<<"F"<<endl;
                break;
       
        }
        
	return 0;
}
