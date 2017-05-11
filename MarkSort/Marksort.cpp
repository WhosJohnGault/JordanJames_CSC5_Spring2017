/* 
 * File:   markSort.cpp
 * Author: James Jordan
 * Created on May 11, 2017, 10:20 AM
 * Purpose:
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
void filAray(int [],int);
void prntAry(int [],int,int);
void swap1(int &,int &);
void swap2(int &,int &);
void smlstVl(int [],int,int);
//Program Execution Begins Here
int main(int argc, char** argv) {

    //random number generator
    srand(static_cast<unsigned int>(time(0)));
   
    //Declare all Variables Here
    const int SIZE=100;
    int array[SIZE]={};
    
    //Input or initialize values Here
    filAray(array,SIZE);
    prntAry(array,SIZE,10);
    swap1(array[0],array[SIZE-1]);
    //Process/Calculations Here
    
    //Output Located Here
    prntAry(array,SIZE);

    //Exit
    return 0;
}

void smlstVl(int a[],int n,int pos){
    for(int indx=pos;indx<n;indx){
        if(a[pos])
    }
}

//temporary variable intermediate swap
void swap1(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    
}
void swap2(int &a,int &b){
a=a^b;
b=a^b;
a=a^b;
}
void prntAry(int a[],int n,int perLine){
    
for(int indx=0;indx<n;indx++){
    cout<<a[indx]<<" ";
    if(indx%)
}
}
void filAray(int a[],int n){
    for(int indx=0;indx<n;indx++){
        a[indx]=rand()%90+10;
    }
}
