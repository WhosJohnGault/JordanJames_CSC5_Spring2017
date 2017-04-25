/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on MArch 23, 2017, 11:37 AM
 * Purpose:to make an x where an incrementing function and decrementing 
 * function cross at a middle value
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize Variables Here
    int i;
    int n;
    n=i+1;
    cout<<"Please enter an integer that is higher than 1, but less than 50"<<endl;
        cin>>i;
    do{
        for(i>=1&&i<50; i--;){
        cout<<setw(n++)<<i<<setw(n++)<<endl<<endl;
    }
    }while(i>=1&&i<50);
//Process/Calculations Here

//Output Located Here
    //Exit
    return 0;
}

