/*
 * File:    main.cpp
 Author: James Jordan
 Created on march 26, 2017, 11:17 AM
 *Purpose: to calculate the rate at which sea levels rise
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
const float OLI=1.5f; //Ocean level increase in millimeters over the course of a year
int yeartfv=25,
    rise;
rise=OLI*yeartfv;

cout<<"This program is designed to display the increase in sea levels over the course of 25 years "<<endl;
cout<<"Years \t\t Millimeters"<<endl;
cout<<"____________________________"<<endl;

    //Input Data
for (int year=1;year<=yeartfv;year++)
{
    cout<<year<<"           "<< (year*OLI)<<endl;
}
cout<<"The oceans will rise in these increments over 25 years at current rates"<<endl;
   
    //Map inputs to outputs or process the data

    //Exit stage right!
return 0;
}