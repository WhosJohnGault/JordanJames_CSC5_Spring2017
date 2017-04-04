/*
 * File:    main.cpp
 Author: James Jordan
 Created on April 2, 2017, 11:10 PM
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
    const float CNVPTOD=100.0f;
    int salary, sumSlry=0; //Pennis are the units
    unsigned short dylimit; //limited the number of days
    //initialize variables
    salary=sumSlry=1;
    cout<<"This program calculates your double salary and penny daily"<<endl;
    cout<<"Input the number of days which are equal to 1 but limited to 31"<<endl;
    //day limit
    do{
        cin>>dylimit;
    }while(dylimit<1||dylimit>31);
    salary=1;
    cout<<"Day           Salary           $Sum"<<endl;
    cout<<setw(3)<<1<<setw(15)<<salary/CNVPTOD<<setw(15)<<sumSlry/CNVPTOD<<endl;
    //Map inputs to outputs or process the data
    for(int day=2;day<=dylimit;day++){
        salary*=2;
        sumSlry+=salary;
    cout<<setw(3)<<day<<setw(15)<<salary/CNVPTOD<<setw(15)<<sumSlry/CNVPTOD<<endl;    
    }
    
    //Exit stage right!
return 0;
}