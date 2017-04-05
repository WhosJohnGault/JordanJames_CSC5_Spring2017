/* 
 * File:   main.cpp
 * Author: James Alan Holden Jordan
 * Created on March 30, 2016, 9:07 AM
 * Purpose: Display the ASCii character set 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
        //Declare the ascii limit
    int limit=127;
    
    
    //Map input  to outputs or process the data here
    for(int i=0;i<=127;i++) {
        cout<<static_cast<char>(i);
        if(i%16==15)cout<<endl;
    }
    
        
    //Output Located Here

    //Exit
    return 0;
}

