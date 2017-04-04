/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on February 12, 2017, 11:37 AM
 * Purpose:To calculate whether a persons build relative to the BMi is overweight
 * , underweight, or appropriate
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
//Declare all Variables Here
int wt,ht; //weight is measured in pounds, height in inches
float bmi; //calculates by the equation: BMI=(weight*703)/height^2
cout<<"This program will calculate the users build relative to their Body Mass Index ";
cout<<"please input your height in inches by taking your measure in feet and \n"
      "multiplying by twelve, followed by adding the remaning inches";
cin>>ht;
cout<<"Please input your weight in pounds";    
cin>>wt;
//Input or initialize values Here
bmi=(wt*703)/pow(ht,2.0);    //note: pow signifies power to an exponent
//Process/Calculations Here
if (bmi>=18.5&&bmi<=25)    
    cout<<"Your BMI is in a healthy range."<<endl;
else if (bmi<18.5)
    cout<<"You are underweight consider eating slightly more";
else if (bmi>25)
    cout<<"You are overweight consider eating less or excercising";

//Output Located Here
        
    //Exit
    return 0;
}

