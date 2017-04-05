/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on MArch 23, 2017, 11:37 AM
 * Purpose:Menu to be used in homework 4
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize Variables Here
char choice;    
 
//Show menu and loop
do{
    //display menu
    cout<<endl<<endl<<"Type 0 to exit"<<endl;
    cout<<"Type 1 for Sum1 to n Problem"<<endl;
    cout<<"Type 2 for ASCII Code Problem"<<endl;
    cout<<"Type 3 for Sea levels Problem"<<endl;
    cout<<"Type 4 for Calorie Burning problem"<<endl;
    cout<<"Type 5 for Club Membership problem"<<endl;
    cout<<"Type 6 for Distance Traveled problem"<<endl;
    cout<<"Type 7 for Penny problem"<<endl;
    cout<<"Type 8 for Personal Weight Program"<<endl;
    cout<<"Type 9 for personal weight problem 9"<<endl<<endl;
    
    //type input
    cin>>choice;
    
    //Place solutions to problems in switch statement
    switch(choice){
    case '1':{
        //make sure 0<=n<=40000
        int n=40000,sum=0; //make sure 0<=n<=40000
//Input or initialize values Here
for (int i=1;i<=n;i++){
    sum+=1;
}    
//Process/Calculations Here
    
//Output Located Here
cout<<"the computed sum of 1 to "<<n<<" = "<<sum<<endl;
cout<<"and "<<n<<"*("<<n<<"+1)/2="<<n*(n+1)/2<<endl;
            //map inputs
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        
        //outputs the transfered
        cout<<"the computed sum of 1 to "<<n<<" = "<<sum<<endl;
        cout<<"and "<<n<<"*("<<n<<"+1)/2="<<n*(n+1)/2<<endl;
        break;}
        //case two program
    case '2':{
        int limit=127;
    //Map input  to outputs or process the data here
    for(int i=0;i<=127;i++) {
        cout<<static_cast<char>(i);
        if(i%16==15)cout<<endl;
    }    
        break;    
        }
    case '3':{
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
return 0;
            break;
        }
    case '4':{
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
        break;
        }
    case '5':{
            int years=6; //the time period which the increase will affect
float increase=0.04f; //The increase in membership
float member=2500;
cout<<"This program will display the increase in membership costs over six years"<<endl;

for (int time=1; time<=years; time++)
{
    member=member+(member*increase);
    cout<<"The membership cost will be $"<<member<<" After "<<time<<"years"<<endl;
}
            break;
        }
    case '6':{
         short spdVhcl; //speed of the vehicle
int nHrsTrv; //number of hours spent traveling
float dstTrav; //distance traveled

cout<<"This program calculates the time spent traveling"<<endl;
cout<<"What is the speed of the vehicle in miles per hour (MPH) ";
cin>>spdVhcl;
cout<<"How many hours has it been used to travel ? ";
cin>>nHrsTrv;  
    //Input Data
//formatting the table to output
cout<<"Hours \t\t Distance Traveled"<<endl;
cout<<"__________________________________"<<endl;

///use a loop to calculate the distance traveled

for(int i=1; i<=nHrsTrv; ++i){
    dstTrav=i*spdVhcl;
    cout<<setw(3)<<i<<setw(18)<<dstTrav<<endl;

}   
            
            break;
        }
    case '7':{
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
            break;
        }
    case '8':{
            const float MSSERTH=5.972e27f;  //Mass of earth in grams
const float GCONST=6.73E-8f;    //Gravitational Constant cm^3/gm sec^2
const float CNVFTCM=1.0f/30.48f; //Conversion from ft to cm
const float CNVMFT=5280.0f;     //Conversion from miles to feet
const float RADERTH=3959;       //Radius of earth in miles

    
    //Declare variables
    float myWeight;//Results in lbs
    float myMass=6; //Units of slugs

    //Input Data
    myWeight=GCONST*CNVFTCM*CNVFTCM*CNVFTCM*MSSERTH*myMass/
            (RADERTH*RADERTH*CNVMFT*CNVMFT);

    //outputs the transformed data
cout<<"you weigh "<<myWeight<<" lbs"<<endl;     
            break;
        }
    case '9':{
        const float MSSERTH=5.972e27f;  //Mass of earth in grams
const float GCONST=6.73E-8f;    //Gravitational Constant cm^3/gm sec^2
const float CNVFTCM=1.0f/30.48f; //Conversion from ft to cm
const float CNVMFT=5280.0f;     //Conversion from miles to feet
const float RADERTH=3959;       //Radius of earth in miles
    //Declare variables
    float myWeight;//Results in lbs
    float myMass=6; //Units of slugs

    //Input Data
    myWeight=GCONST*CNVFTCM*CNVFTCM*CNVFTCM*MSSERTH*myMass/
            (RADERTH*RADERTH*CNVMFT*CNVMFT);
            
    //Map inputs to outputs or process the data

    //outputs the transformed data
cout<<"you weigh "<<myWeight<<" lbs"<<endl;     
            break;
        }
        default:{
            cout<<"Exit the program"<<endl;
    }
}
        
    
} while(choice>='1'&&choice<='9');
    //Exit
    return 0;
}

