/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on February 12, 2017, 11:37 AM
 * Purpose:To create a program that can be used to calculate an objects weight
 * based on its mass. If the object weights more than 1,000 newtons create an
 * error message that it is too heavy, if it weights less than 10 newtons,
 * display a message indicating the object is too light.
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
float newtons; //measurement for weight
int   mass; //mass measure in kilograms
    cout<<"This program will calculate the weight of an object based on its mass"<<endl;
    cout<<"Enter the mass of an object in newtons"<<endl;
    cin>>mass; //mass in kilograms
   newtons=mass*9.8;    
if (newtons>1000) //if the oject is heavier than 1000 kilograms
    cout<<"The object is too heavy for this program"<<endl;
else if (newtons<10) //if the object is lighter than 10 kilograms
    cout<<"The object is too light for this program"<<endl;
else
    cout<<"The object weight is "<<newtons<<" newtons"<<endl;
//Process/Calculations Here
    
//Output Located Here
    //Exit
    return 0;
}

