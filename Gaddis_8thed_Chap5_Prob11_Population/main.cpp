/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on MArch 23, 2017, 11:37 AM
 * Purpose:Brute force compared to summation
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
//Declare and initialize Variables Here
    const float PERCENT=100.0f;
    int stPop;
    int days;
    float pctchng;
    float dlychng;
    cout<<"This program is used to predict the population size for organisms"<<endl;
    cout<<"Please input the starting number of organisms ";
    cin>>stPop; //starting population
    cout<<"Please input the daily change as a percentage ie +2%=2 ";
    cin>>pctchng; //change in population
    cout<<"Please input the amount of days you wish to monitor ";
    cin>>days;  //monitor duration
    cout<<"Day \t\t Organism Population"<<endl;
    cout<<"__________________________________"<<endl;
    
    for(int i=1;i<=days;++i){ //i=incremental change until it matches the desired days
    dlychng=stPop+(i*(stPop*pctchng/PERCENT));    
    cout<<setw(3)<<i<<setw(18)<<dlychng<<endl;    
    }
        
    


    
//Process/Calculations Here

//Output Located Here
    //Exit
    return 0;
}

