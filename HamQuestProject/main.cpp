/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 14 2017, 8:27 AM
 * Purpose:  Battleship Simulator
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

//User Libraries Here

//Program Execution Begins Here
int main(int argc, char** argv) {
int f; //The Best offense is a great offense, Fight!
int x; //"Mama raised a coward", Run!
int c; //"I always wanted to be a rock", Guard!
char enter;
//prologue/ character introduction sequence
    cout<<"Thank you for choosing to play Ham Quest "<<endl;
    cout<<"The goal of this game is to liberate your fellow pigs from the "
            "slaughter house, when you see ... you press the enter key to progess the dialogue"<<endl;
    cout<<"before we begin what is your name?"<<endl; //this will cause a user requested input to prompt
    char input[100]; //name input for your character, can handle spaces
    cin.getline(input,sizeof(input)); //this is what allows the user input name to handle spaces
    cout<<"Oh you name is "<<input<<"?"<<endl;
    cout<<"Good luck with saving your fellow pigs "<<input<<endl;
    cout<<"you lie in a dim room, dreaming the dreams of pigs when suddenly...";
    cin>>enter;
    cout<<"Hearing a voice, you slowly awaken you hear a voice saying wakey wakey ..."<<endl;
    cin>>entera;
       cout<<" when you feel A sudden kick to your ribs "<<endl;
    cout<<"The kick is a sudden sting and you can't help but wince from the feeling"<<endl;
    cout<<"How do you react?";

 
    return 0;
}

    


