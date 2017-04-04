/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on February 12, 2017, 11:37 AM
 * Purpose:The sum to n program done in class located in Gaddiss
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
int n=40000,sum=0; //make sure 0<=n<=40000
//Input or initialize values Here
for (int i=1;i<=n;i++){
    sum+=1;
}    
//Process/Calculations Here
    
//Output Located Here
cout<<"the computed sum of 1 to "<<n<<" = "<<sum<<endl;
cout<<"and "<<n<<"*("<<n<<"+1)/2="<<n*(n+1)/2<<endl;
    //Exit
    return 0;
}

