/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on February 12, 2017, 11:37 AM
 * Purpose:To write a program that asks the user to enter a date consisting of
 * a month(in numeric form, a day, and a year
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
//Declare all Variables Here
int uimonth,uiday,uiyear,magic,nomagic;    
   //first input,second input, biggest input
    cout<<"This program determines if a certain date is maaaagic, please input \n"
          "a month in numeric form"<<endl;
    cin >> uimonth;
    cout<<"now input a day"<<endl;
    cin >>uiday;
    cout<<"now input the last two digit of the year"<<endl;
    cin>>uiyear;
    magic=uimonth*uiday;
    if (uiyear==magic)
        cout<<"The date input is magic";
    else cout<<"The date input is not magic";
      
        
//Input or initialize values Here
    
//Process/Calculations Here
    
//Output Located Here


    //Exit
    return 0;
}

