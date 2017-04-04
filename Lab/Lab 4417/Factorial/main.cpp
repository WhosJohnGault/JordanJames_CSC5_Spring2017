/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  to calculate the product of N factorial at i with the desired inputs of 6,14,N=14
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
int n;
int factorial=1;
cout<<"This program calculates the factorial of 2 to the power of i, n times ";
cout<<"Type in N"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    factorial*=i;
}
cout<<n<<"! = "<<factorial<<endl;
//solve second part
float x;
cout<<endl<<"Second part, calculate e^x"<<endl;
cout<<"type in x"<<endl;
cin>>x;
float etox=1;
for(int n=1;n<=13;n++){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    etox+=pow(x,n)/fact;
}
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    

    //Exit
    return 0;
}

