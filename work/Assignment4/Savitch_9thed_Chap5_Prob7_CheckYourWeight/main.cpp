/*
 * File:    main.cpp
 Author: James Jordan
 Created on March 26, 2017, 11:30 PM
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
const float MSSERTH=5.972e27f;  //Mass of earth in grams
const float GCONST=6.73E-8f;    //Gravitational Constant cm^3/gm sec^2
const float CNVFTCM=1.0f/30.48f; //Conversion from ft to cm
const float CNVMFT=5280.0f;     //Conversion from miles to feet
const float RADERTH=3959;       //Radius of earth in miles

  //Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
    float myWeight;//Results in lbs
    float myMass=6; //Units of slugs

    //Input Data
    myWeight=GCONST*CNVFTCM*CNVFTCM*CNVFTCM*MSSERTH*myMass/
            (RADERTH*RADERTH*CNVMFT*CNVMFT);
            
    //Map inputs to outputs or process the data

    //outputs the transformed data
cout<<"you weigh "<<myWeight<<" lbs"<<endl;     
    //Exit stage right!
return 0;
}