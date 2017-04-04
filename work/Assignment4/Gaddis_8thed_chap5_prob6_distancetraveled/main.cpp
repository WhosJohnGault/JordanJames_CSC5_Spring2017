/*
 * File:    main.cpp
 Author: James Jordan
 Created on February 16, 2017, 11:17 AM
 *Purpose: Template to be utilized in in creating
 *         solutions to problems in our CSC/CIS 5 
 *         class.
* 
 */
 
  //System Libraries
#include <iostream>    //Input - Output Library
#include <iomanip>
using namespace std; //Name-Space under which systems libraries exist

  //User Libraries

  //Global Libraries


  //Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
short spdVhcl; //speed of the vehicle
int nHrsTrv; //number of hours spent traveling
float dstTrav; //distance traveled
    //Input Data
cout<<"This program calculates the time spent traveling"<<endl;
cout<<"What is the speed of the vehicle in miles per hour (MPH) ";
cin>>spdVhcl;
cout<<"How many hours has it been used to travel ? ";
cin>>nHrsTrv;

//formatting the table to output
cout<<"Hours \t\t Distance Traveled"<<endl;
cout<<"__________________________________"<<endl;

///use a loop to calculate the distance traveled

for(int i=1; i<=nHrsTrv; ++i){
    dstTrav=i*spdVhcl;
    cout<<setw(3)<<i<<setw(18)<<dstTrav<<endl;

}
    //Map inputs to outputs or process the data

    //Exit stage right!
return 0;
}