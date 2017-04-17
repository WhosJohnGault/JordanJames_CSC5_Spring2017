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
//Function Prototypes
void combat(char,int );
//Program Execution Begins Here
int main(int argc, char** argv) {
char react;
int enemyhp=2; 
char enter;
    
//prologue/ character introduction sequence
    cout<<"Thank you for choosing to play Ham Quest demo version 0.01"<<endl; //mandatory intro/thank you sequence
    cout<<"The goal of this game is to liberate your fellow pigs from the "
            "slaughter house, when you see ... you press  a character on the keyboard followed by the enter key"
        "to progress the dialogue"<<endl;
    cout<<"before we begin what is your name?"<<endl; //this will cause a user requested input to prompt
    char input[100]; //name input for your character, can handle spaces
    cin.getline(input,sizeof(input)); //this is what allows the user input name to handle spaces
    cout<<"Oh you name is "<<input<<"?"<<endl; //input will act as the players name in dialogue and possible combat menus in future versions
    cout<<"Good luck with saving your fellow pigs "<<input<<endl;
    cout<<"you lie in a dim room, dreaming the dreams of pigs when suddenly...";
    cin>>enter;
    cout<<"Hearing a voice, you slowly awaken you hear a voice saying wakey wakey pig shit..."<<endl;
    cin>>enter;
       cout<<" when you feel a sudden kick to your ribs "<<endl;
    cout<<"The kick is a sudden sting and you can't help but wince from the feeling"<<endl;
    cin>>enter;
    cout<<"How do you react? "<<input<<"(you can input z to attack, x to run away, c to guard"<<endl;
    
    //first combat encounter
    combat(react,enemyhp); //variables used in this prototype
 
    return 0;
}
void combat(char mander,int enemyhp){ //a modular encounter, likely the only encounter
 do{ 
    cin>>mander;
    switch(mander){
    case 'z':cout<<"You muster all the strength in your piggy body to hit your assailant, you didn't leave any noticeable damage, try again!"<<endl;
    cout<<"(you can input z to attack, x to run away, c to guard"<<endl;
        enemyhp--;
        break;
            
    case 'x':cout<<"Looking or a place to hide, you realize you are in an incredibly dark room"<<
                   "You decide to run around in circles!"<<endl;
    cout<<"(you can input z to attack, x to run away, c to guard"<<endl;
        break;
            
    case 'c':cout<<"You tense for an incoming blow, but seriously why would you want to get hit?"<<endl;
    cout<<"(you can input z to attack, x to run away, c to guard"<<endl;
        break;
            
        default:cout<<"Come on pork for brains, you are going to die!"<<endl;
        cout<<"(you can input z to attack, x to run away, c to guard"<<endl;
        break;
            }        
    }while(enemyhp>0);    
    
}
    


