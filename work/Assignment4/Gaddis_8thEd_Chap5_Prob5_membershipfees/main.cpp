/*
 * File:    main.cpp
 Author: James Jordan
 Created on April 3, 2017, 10:17 PM
 *Purpose: To calculate increases in membership fees
* 
 */
 
  //System Libraries
#include <iostream>    //Input - Output Library

using namespace std; //Name-Space under which systems libraries exist

  //User Libraries

  //Global Libraries


  //Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
int years=6; //the time period which the increase will affect
float increase=0.04f; //The increase in membership
float member=2500;
cout<<"This program will display the increase in membership costs over six years"<<endl;

for (int time=1; time<=years; time++)
{
    member=member+(member*increase);
    cout<<"The membership cost will be $"<<member<<" After "<<time<<"years"<<endl;
}
    //Input Data
   
    //Map inputs to outputs or process the data

    //Exit stage right!
return 0;
}