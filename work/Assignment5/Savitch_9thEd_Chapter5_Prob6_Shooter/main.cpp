/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cstdlib> //random number generator
#include <ctime>  //time to set the random number seed
#include <cmath> //for use of pow functions
#include <iomanip> //format output
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int MAXRND=pow(2,31)-1;
//Function Prototypes Here
float ranProb(){
    return static_cast<float>(rand())/MAXRND;
}

void heading(){
    cout<<"Table of shooting results"<<endl;
    cout<<"A-> Alive, D ->Dead"<<endl;
    cout<<"Aaron Bob Charles";
            
}
void result(bool a, bool b, bool c){
    cout<<" "<<a?'A':'D';
     cout<<"  "<<b?'A':'D';
      cout<<"        "<<c?'A':'D';
}
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    srand(static_cast<unsigned int>(time(0)));
    float pHitA=1.0f/3; //probability of a hit for Aaron
    float pHitB=1.0f/2; //probability of a hit for Bob
    float pHitC=1.0f;   //probability of a hit for Charlie
    bool aliveA=true;   //Aaron is alive
    bool aliveB=true;   //Bob is alive
    bool aliveC=true;    //Charles is alive
    //Input or initialize values Here
    heading();
    result(aliveA,aliveB,aliveC);
    if(pHitA>=ranProb()&&aliveC)aliveC=false; //kill Charles
    result(aliveA,aliveB,aliveC);
    if(pHitB>=ranProb()&&aliveC)aliveC=false;
    result(aliveA,aliveB,aliveC);
    if(pHitC>=ranProb()&&aliveB&&aliveC)aliveB=false;
    result(aliveA,aliveB,aliveC);
    if(pHitC>=ranProb()&&aliveB&&aliveC)aliveB=false;

    //Process/Calculations Here
    
    //Output Located Here


    //Exit
    return 0;
}

