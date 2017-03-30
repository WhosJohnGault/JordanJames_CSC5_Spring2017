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
const float PERCENT=100.0f;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
	//Set the random number seed
	srand(static_cast<unsigned int>(time(0)));	

	//Declare and initialize Variables Here
	ifstream in;    
	ofstream out;
	int nGames,wins=0,losses=0;
	int mxThrw=0,numThrw=0,lmGames;    

	//Initialize variables here 
	in.open("GameInfo.dat");
	while (in>>nGames);
	
	//Play the game
	for(int game=1;game<=nGames;game++){
	//Throw dice and sum
	int gmThrw=1;
	char die1=rand()%6+1;//[1,6]
	char die2=rand()%6+1;//[1,6]	
	char sum1=die1+die2;
	//Determine wins and losses
	switch(sum){
		case 7:
		case 11:wins++;break;
		case  2:
		case  3:
		case 12:losses++;break;
		default:{
		    //Loop until a 7 or previous sum is thrown
		    bool thrwAgn=true;
		    do{	
		//Throw and dice again
		char die1=rand()%6+1;//[1,6]
                char die2=rand()%6+1;//[1,6]
                char sum2=die1+die2;
		gmThrw++;
		if(sum2==7){
                    losses++;
                    thrwAgn=false;
		 }else if (sum1==sum2){
                    wins++;
                    thrwAgn=false;
		  }
            }while(thrwAgn);//do-while
        }
	}
	numThrw+=gmThrw;
	if(mxThrw<gmThrw)mxThrw=gmThrw;// Independent if
}
	//Output the transformed data
	cout<<fixed<<setprecision(2)<<showpoint;
	cout<<"Total number of Games = "<<nGames<<endl;
	cout<<"Number of Games won   = "<<wins<<end;
	cout<<"Number of Games lost  = "<<losses<<endl;
	cout<<"Total number of Games = "<<wins+losses<<endl;
	cout<<"Percentage wins       =  "
        	<<static_cast<float>(wins)/nGames*PERCENT<<"%"<<endl
	cout<<"Percentage losses     =  "
       		<<static_cast<float>(losses)/nGames*PERCENT<<"%"<<endl;
	cout<<"Maximum number of throws in a game = "<<mxThrw<<endl;
	cout<<"Average throw per game="<<static_cast<float>(numThrw)/nGames<<endl;
	
		
out.open("GameStats.dat");

nGames=nGames>lmGames?lmGames:nGames;


    //Exit stage right!
in.close()
    return 0;
}

