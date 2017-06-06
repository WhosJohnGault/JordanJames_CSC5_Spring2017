/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <vector>
#include<stdlib.h>  //rand function
#include<stdio.h>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here

    vector<double> student_marks(20);
 
    for (vector<double>::size_type i = 0; i < 20; i++)
    {
        cout << "Enter marks for student #" << i+1 
             << ": " << flush;
        cin >> student_marks[i];
          cout<<student_marks[i]<<endl;
    }
    // ... Do some stuff with the values
 

    //Process/Calculations Here
    
    //Output Located Here


    //Exit
    return 0;
}

