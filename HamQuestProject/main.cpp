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
int combat    
char z; //The Best offense is a great offense, Fight!
char x; //"Mama raised a coward", Run!
char c; //"I always wanted to be a rock", Guard!
char enter;
    
//prologue/ character introduction sequence
    cout<<"Thank you for choosing to play Ham Quest demo version 0.01"<<endl; //mandatory intro/thankyou sequence
    cout<<"The goal of this game is to liberate your fellow pigs from the "
            "slaughter house, when you see ... you press  a charecter on the keyboard followed by the enter key
        to progess the dialogue"<<endl;
    cout<<"before we begin what is your name?"<<endl; //this will cause a user requested input to prompt
    char input[100]; //name input for your character, can handle spaces
    cin.getline(input,sizeof(input)); //this is what allows the user input name to handle spaces
    cout<<"Oh you name is "<<input<<"?"<<endl; //input will act as the players name in dialoge and possible combat menus
    cout<<"Good luck with saving your fellow pigs "<<input<<endl;
    cout<<"you lie in a dim room, dreaming the dreams of pigs when suddenly...";
    cin>>enter;
    cout<<"Hearing a voice, you slowly awaken you hear a voice saying wakey wakey ..."<<endl;
    cin>>enter;
       cout<<" when you feel a sudden kick to your ribs "<<endl;
    cout<<"The kick is a sudden sting and you can't help but wince from the feeling"<<endl;
    
    cout<<"How do you react? "<<input"(you can input z to attack, x to run away, c to gaurd";
    do while(combat=0)
    switch(react){
    'z':cout<<"You muster all the strength in your piggy body to hit your assailant, you dealt no dmg
        cout<<"maybe you should try again?"
        combat+1;
        break;
            
    'x':cout<<"Looking or a place to hide, you realize you are in an incredibly dark room<<endl;
        cout<<"You decide to run around in circles"<<endl;
        break;
            
    'c':cout<<"You tense for an incomming blow
        break;
            
        default:cout<<"Come on pork for brains, you are going to die!"<<endl;
        break;
            }
    '        

 
    return 0;
}

    


