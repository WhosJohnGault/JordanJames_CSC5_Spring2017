/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on MArch 23, 2017, 11:37 AM
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
int nLoop =1000000;
float sum=0,frac=0.5f;  //make sure to edit the n value
//Input or initialize values Here
for(int i=1;i<=nLoop;i++){
    sum+=frac;
}
    
//Process/Calculations Here
cout<<"The computed sum of  "
        <<frac<<"->"<<nLoop<<"times = "<<sum<<endl;
cout<<" simple multiplication of "
        <<frac<<"x"<<nLoop<<" = "<<frac*nLoop<<endl;
cout<<"Error = "<<(frac*nLoop-sum)/(frac*nLoop)*100
        <<"%"<<endl;
//Output Located Here
    //Exit
    return 0;
}

