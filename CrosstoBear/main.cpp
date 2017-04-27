/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on April 27, 2017, 11:37 AM
 * Purpose:Brute force compared to summation
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
//Declare and initialize Variables Here
    int cntInc,cntDec;
    
//initialize variables
int n=9;

for(int row=1; row<=n; row++){
    for(int col=1;col<=n;col++){
        if(row==col)cout<<n+1-row;
        else if(row+col==n+1)cout<<row;
        else cout<<' ';
    }
    cntDec--;
    cout<<endl;
}

    
//Process/Calculations Here

//Output Located Here
    //Exit
    return 0;
}

