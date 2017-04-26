/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on April 23, 2017, 2:02 PM
 * Purpose:number to asterisk conversion
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
 int a; // user input which will limit the for loop
        cout<<"This program will output asterisks equal to your numerical input"<<endl;
        cout<<"The program will not output a non positive, or non numerical character"<<endl;
        cout << "Enter a number"<<endl; 
            cin>>a;

    for(int i=0; i<a; i++){//for loop to spam * as long as it is less than the user input
        if (a !char 48-57){
            cout<<"?"<<endl;
        }
        cout << "*";
        }
          
        cout<<endl;
    
//Process/Calculations Here

//Output Located Here
    //Exit
    return 0;
}

