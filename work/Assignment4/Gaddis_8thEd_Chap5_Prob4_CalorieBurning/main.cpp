/*
 * File:    main.cpp
 Author: James Jordan
 Created on March 30, 2017, 1:17 PM
 *Purpose: Template to be utilized in in creating
 *         solutions to problems in our CSC/CIS 5 
 *         class.
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
    const float CBPM=3.6f;//calories burned over the course of a minute
    int runTime=30; //The max amount of time spent running
    float calburn;//the calculated amount of calories burnt
    
    cout<<"The program is used to show how many calories are burned"<<
    " over the course of an excercise regime"<<endl;
    
    for (int run=5; run<=runTime; run+=5)
    {
    calburn=CBPM*run;
    cout<<" You will burn "<< calburn <<" calories over the course of "<< run <<"minutes"<<endl;
    }
    //Declare variables
   
    //Input Data
   
    //Map inputs to outputs or process the data

    //Exit stage right!
return 0;
}