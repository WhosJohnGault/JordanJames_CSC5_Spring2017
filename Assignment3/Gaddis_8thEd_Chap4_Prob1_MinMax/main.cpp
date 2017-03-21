/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on February 12, 2017, 11:37 AM
 * Purpose:To write a program that asks the user to enter two numbers. The
 * program should use the conditional operator to determine which number is 
 * the smaller and which is the larger
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
//Declare all Variables Here
int num1,num2;    //first input,second input, biggest input
    cout<<"This program compares two number to determine which is larger"<<endl;
    cin >> num1;
    cout<<"Please input another number"<<endl;
    cin >> num2;
    cout<<"The larger number will now be displayed"<<endl;
    int bignum;
      bignum=(num1<num2)?num2:  //if num2 is greater than num1, then num 2 is output
             (num1>num2)?num1:  //num1 being greater than num2 result in num1 output
             (num1=num2);       //equivalant values result in a similar outputs     
        cout<<bignum;   
                  
      
     
//Input or initialize values Here
    
//Process/Calculations Here
    
//Output Located Here


    //Exit
    return 0;
}

