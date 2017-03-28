/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on MArch 28, 2017, 11:42 AM
 * Purpose:To simulate a Craps game
 */

//System Libraries Here
#include <iostream>
#include <ctime> //Time to set the seed
#include <cstdlib> //Srand and rand function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize Variables Here
int nGames,wins=0,losses=0;    
srand(static_cast<unsigned int>(time(0)));    
nGames=10000;

//how many times did we throw this value?

//Loop and throw the dice
int nThrws=36000000;
for(int thrw=1;thrw<=nThrws;thrw++){
	char die1=rand()%6+1;//[1,6]
	char die2=rand()%6+1;//[1,6]	
	char sum1=die1+die2;
        if (sum1==7||sum1==11)wins++;
        else if (sum1==2||sum1==3||sum1==12)losses++;
        else{
            //loop until a 7 or previous sum is thrown
            bool thrwAgn=true;
            do{
                //Throw the dice again
                char die1=rand()%6+1;//[1,6]
                char die2=rand()%6+1;//[1,6]
                char sum2=die1+die2;
                if(sum2==7){
                    losses++;
                    thrwAgn=false;
                }else if (sum1==sum2){
                    wins++;
                    thrwAgn=false;
                
                }
            }while(thrwAgn);
        }
}

//Input or initialize values Here

//Process/Calculations Here

//Output Located Here
    //Exit
    return 0;
}

