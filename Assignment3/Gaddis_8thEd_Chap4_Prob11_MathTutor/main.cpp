/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on February 12, 2017, 11:37 AM
 * Purpose:T
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
//Declare all Variables Here
int rand1=rand(); //semi random number generated
int rand2=rand(); //second number generated
int sum=rand1+rand2;  //the correct addition of these numbers
    cout<<"This program helps students learn how to add by generating random numbers \n"
      "to be added";
    cout<<"add the following numbers "<<rand1<<" + "<<rand2<<endl;
int su; //student input
cin>>su;
if(su==sum)
    cout<<"correct";
else
    cout<<"wrong";
//Input or initialize values Here
    
//Process/Calculations Here
    
//Output Located Here
    //Exit
    return 0;
}

