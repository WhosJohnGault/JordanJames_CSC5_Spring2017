/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 14 2017, 8:27 AM
 * Purpose:  Ham Quest tutorial
 */

//System Libraries Here
#include <iostream> //Input Output library
#include <cstdlib> //Random numbers
#include <ctime>   //Time to set the Seed
#include <iomanip> //Format Library
#include <fstream> //File stream library
#include <cmath>   //math library
#include <string>  //string library
using namespace std;

//User Libraries Here
//Function Prototypes
void combat(char,int ); //void protype function for tutorial battle
//Program Execution Begins Here
int main(int argc, char** argv) {
char react,decision; //reaction and decision variables for combat and exploration
int enemyhp=2;       //enemy hp stat for combat use
float turn;          //a type of limit to the loop which allows for input before repetiton   
float maxhp=2;       //max hp is a value that is used to differentiate between max hp and enemy hp
char enter;          //enter is used to progress dialogue
cout<<"Press Enter to Start Ham Quest"<<endl;
std::cin.get(); //this causes the user to prompt the game/program to begin
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
    cin>>enter; //    //this prompt causes the dialogue to continue
    cout<<"Hearing a voice, you slowly awaken you hear a voice saying wakey wakey pig shit..."<<endl;
    cin>>enter;
       cout<<" when you feel a sudden kick to your ribs "<<endl;
    cout<<"The kick is a sudden sting and you can't help but wince from the feeling"<<endl;
    cin>>enter;
    cout<<"How do you react? "<<input<<"(you can input z to attack, x to run away, c to guard"<<endl;
    
    //first combat encounter,has yet to be completely worked out, will be implemented in version   
    combat(react,enemyhp); //variables used in this prototype
    //basic enemy ai whos actions will be determined by their hp and a random seed
    cout<<"The enemy flees the room in terror, in the process the door is left open, do you leave?"<<endl;
    cout<<"input y to leave the room, n to stay"<<endl;
    cin>>decision;        
            switch(decision){
                case'y':cout<<"You leave the room, who knows what is outside..."<<endl;
                break;
                case'n':cout<<"You decide to stay in the room, perhaps forever..."<<endl;
                break;
                default:cout<<"You realize now, you are at a dillema, you don't know when you began"<<endl;
                cout<<"Why you are hear or anything, but if you wait maybe you can figure it out, no matter how long it takes...";
                break;
            }
    cin>>enter;        
    cout<<"Well that was an interesting experience composed of over 100 lines of code"<<endl;        
    cout<<endl<<input<<setw(5)<<"Thanks for playing, see you in V2.0!";
return 0;
}
void combat(char mander,int enemyhp){ //a modular encounter, likely the only encounter
 do{ 
     do{
    srand(time(NULL)); //setting a seed 

int randNum = (rand() % 3) + 1; //this will determine what action the enemy takes
switch(randNum){
    case '1':cout<<"He tries to attack you"<<endl; // landing a 1 will cause them to attack
    break; 
    case '2':cout<<"He attempts to guard"<<endl;  // 2 will cause them to dodge
    break;
    default:cout<<"He attempts to... run?"<<endl;   //3 will cause a short dialogue, but there is no escape
    break;
}
do{
if(enemyhp<2){
            cout<<"You feel an ominous presence, prepare for battle!"<<endl;
                    
        }
        else if(enemyhp=1){
            cout<<"The enemy is slightly wounded, keep it up!"<<endl;
            break;
        }
        else{
            cout<<"You won congratulations!"<<endl;
            break;
        }
}while(enemyhp>0);
// this program will continue until the enemy is defeated
}while(enemyhp=0);

    cin>>mander;
    switch(mander){
        int dmg;
    case 'z':cout<<"You muster all the strength in your piggy body to hit your assailant, the enemy has "<<enemyhp<<" hp remaining"<<endl;
    cout<<"(you can input z to attack, x to run away, c to guard"<<endl;
        for(dmg=1;enemyhp--;) //a for loop which increments dmg each turn in combat
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
    }while(enemyhp>=0);    
    
}
    


