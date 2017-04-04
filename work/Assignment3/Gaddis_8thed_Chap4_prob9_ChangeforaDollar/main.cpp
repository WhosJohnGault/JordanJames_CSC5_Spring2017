/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on February 12, 2017, 11:37 AM
 * Purpose:This program shows what colour will come from the mixture of two 
 * primary colors
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
    int quarter=0.25,dimes=.1,nickel=.05,pennie=0.01,change;
        
//Input or initialize values Here
cout<<"This program is used to determine what change equals one dollar "<<endl;
cout<<"how many quarters "<<endl;
cin>>quarter;   
cout<<"how many dimes "<<endl;
cin>>dimes;
cout<<"how many nickels"<<endl;
cin>>nickel;
cout<<"how many pennies"<<endl;
cin>>pennie;
change=quarter+dimes+nickel+pennie;
if      (change=1)
     cout<<"The change entered is equal to one dollar";    
else if (change>1)
    cout<<"The change entered is greater than one dollar";
else if (change<1)
    cout<<"The change entered is less than one dollar";

//Process/Calculations Here
    
//Output Located Here
    //Exit
    return 0;
}

