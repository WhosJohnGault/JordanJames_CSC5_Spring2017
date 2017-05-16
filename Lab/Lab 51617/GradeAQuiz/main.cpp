/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Grading my DMV Test
 */

//System Libraries Here
#include <iostream>
#include <fstream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void rdFile(string,char [],int);          //Read the Answer Key and student response
void wrtFile(string,int [],int);         //Write the results
void grade(char [], char [], int [], int);    // compare and grade
void score (int [],int);                    //Numerical Result
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=20;
    char key[SIZE],stuResp[SIZE];
    int scr[SIZE];
    string keyFn,stuRFn,scoreFn;
            
    //Initialize string variables
    keyFn="key.dat";
    StuRFn="answer.dat";
    scoreFn="result.dat";
    //Input
    rdFile(keyFn,key,SIZE);
    rdFile(stuRFn,stuResp,SIZE);
    
    //Map Inputs to outputs 
    
    //Process/Calculations Here
    
    //Output Located Here


    //Exit
    return 0;
}

void wrtFile(string fn,int pts[],int n){
    //Declare variable
    ofstream out;
    //open the file
    out.open(fn.c_str());
    //Read the file
    for(int i=0;i<n;i++){
        out<<pts[i]<<endl;
        
    }
}

void score (int pts[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=pts[i];
}
} 

void grade(char key[], char stu[], int pts[], int n){
for(int i=0;i<n;i++){
    if(key[i]==stu[i],pts[i]=1);
}
}

void rdFile(string fn,char a[],int n){
    // Declare variables
    ifstream in;
    int cnt=0;
    //open the file
    in.open(fn.c_str());
    //Read values
    while(in>>a[cnt++]);
    // Close the file
    in.close();
}
