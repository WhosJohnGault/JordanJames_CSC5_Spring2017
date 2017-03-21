/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
                               //How many and seconds 
const    int MINUTE=60;        //in a minute
const    int HOUR=60*MINUTE;   //in an hour 
const    int DAY=24*HOUR;      //in a day 
const    int WEEK=7*DAY;       //in a week 
const    int YEAR=52*WEEK;     //in a year 
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
int nSecs;    
int nYr,nMonths,nWeeks,nDays,nHours,nMin;        

    //Input or initialize values Here
    cout<<"This program converts seconds to Years/Months,Weeks,Days,Hours,Minutes \n";
    cout<<"Input the number of seconds for the conversion/equivalence \n";
    cin>>nSecs; //number of seconds        
    //Process/Calculations Here
    nYr=nSecs/YEAR;                 //Number of years
    cout<<nYr<<" Years (";
    nSecs-=nYr*YEAR;
    
    nWeeks=nSecs/WEEK;
    cout<<nWeeks<<" Weeks or ";
    nMonths=nWeeks*3/13;
    cout<<nMonths<<" Months  )";
    nSecs-=nWeeks*WEEK;
    
    nDays=nSecs/DAY;
    cout<<nDays<<" Days ";
    nSecs-=nDays*DAY;
    
    nHours=nSecs/HOUR;
    cout<<nHours<<" Hours ";
    nSecs-=nHours*HOUR;
    
    nMin=nSecs/MINUTE;
    cout<<nMin<<" Minutes ";
    
    nSecs-=nMin*MINUTE;
    cout<<nSecs<<" Seconds ";
    
    //Output Located Here
  

    //Exit
    return 0;
}

