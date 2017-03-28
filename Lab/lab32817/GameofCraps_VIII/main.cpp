/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on MArch 28, 2017, 11:42 AM
 * Purpose:To simulate a Craps game
 */

//System Libraries Here
#include <iostream>
#include <ctime> //Time to set the seed
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PERCENT=1.00f;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize Variables Here
srand(static_cast<unsigned int>(time(0)));        
ifstream in;    
ofstream out;
int nGames,wins=0,losses=0;
int mxThrw=0,numThrw=0,lmGames;
    

//declare all variables here 2
in.open("GameInfo.dat");
out.open("GameStats.dat");
while (in>>nGames);
nGames=nGames>lmGames?lmGames:nGames;

//Loop and throw the dice
for(int game=1;game<=nGames;game++){
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
            }while(thrwAgn);//do-while
        }

numThrw=gmThrw;
if(mxThrw<gmThrw)mxThrw=gmThrw;// Independent if
}
cout<<"Total number of Games = "<<nGames<<endl;
cout<<"Number of Games won   = "<<wins<<end;
cout<<"Number of Games lost  = "<<losses<<endl;
cout<<"Total number of Games = "<<wins+losses<<endl;
cout<<"Percentage wins       =  "
        <<static_cast<float>(wins)/nGames*PERCENT<<"%"<<endl
cout<<"Percentage losses     =  "
        <<static_cast<float>(losses)/nGames*PERCENT<<"%"<<endl;
//Input or initialize values Here

//Process/Calculations Here

//Output Located Here
    //Exit
in.close()
    return 0;
}

