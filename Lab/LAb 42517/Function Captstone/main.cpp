/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on MArch 23, 2017, 11:37 AM
 * Purpose:Brute force compared to summation
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
   float fv1(float,float,int);
   float fv2(float,float,int);
   float fv3(float,float,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize Variables Here
float pv; //present value in $'s
float ir; //interest rate in %
int n; //Number of compounding periods in year
//initialize variables
pv=100.0f;
ir=6;
n=72/ir; //by the rule of 72

//Process/Calculations Here

//Output Located Here
cout<<fixed<<setprecision(2)<<showpoint;
cout<<"Present value = $"<<pv<<endl;
cout<<"Interest Rate = "<<ir<<"%"<<endl;
cout<<"Number of years = "<<n<<" years"<<endl;
cout<<"Future Value Function 1 = $"<<fv1(pv,ir/100,n)<<endl;
cout<<"Future Value Function 2 = $"<<fv2(pv,ir/100,n)<<endl;
cout<<"Future Value Function 2 = $"<<fv3(pv,ir/100,n)<<endl;
    //Exit
    return 0;
}
float fv3(float p,float i, int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
}
float fv2(float p,float i, int n){
    return p*exp(n*log(1+i));
}

float fv1(float p,float i,int n){
    return p*pow(1+i,n);
}
