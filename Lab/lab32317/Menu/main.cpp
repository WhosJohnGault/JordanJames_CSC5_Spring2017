/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on MArch 23, 2017, 11:37 AM
 * Purpose:Menu to be used in homework 4
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize Variables Here
char choice;    
 
//Show menu and loop
do{
    //display menu
    cout<<endl<<endl<<"Type 0 to exit"<<endl;
    cout<<"Type 1 for Sum1 to n Problem"<<endl;
    cout<<"Type 2 for sum 0.1 error Problem"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 for problem 7"<<endl;
    cout<<"Type 8 for problem 8"<<endl;
    cout<<"Type 9 for problem 9"<<endl<<endl;
    
    //type input
    cin>>choice;
    
    //Place solutions to problems in switch statement
    switch(choice){
        case '1':{
        //make sure 0<=n<=40000
        int n    =     40000,
                sum=0;
        
        //map inputs
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        
        //outputs the transfered
        cout<<"the computed sum of 1 to "<<n<<" = "<<sum<<endl;
        cout<<"and "<<n<<"*("<<n<<"+1)/2="<<n*(n+1)/2<<endl;
        break;}
        case '2':{
        break;    
        }
        case '3':{
            cout<<"In problem solution 3"<<endl;
            break;
        }
        case '4':{
            cout<<"In problem solution 4"<<endl;
            break;
        }
        case '5':{
            cout<<"In problem solution 5"<<endl;
            break;
        }
        case '6':{
            cout<<"In problem solution 6"<<endl;
            break;
        }
        case '7':{
            cout<<"In problem solution 7"<<endl;
            break;
        }
        case '8':{
            cout<<"In problem solution 8"<<endl;
            break;
        }
        case '9':{
            cout<<"In problem solution 9"<<endl;
            break;
        }
        default:{
            cout<<"Exit the program"<<endl;
    }
}
        
    
}while(choice>='1'&&choice<='9');
    //Exit
    return 0;
}

