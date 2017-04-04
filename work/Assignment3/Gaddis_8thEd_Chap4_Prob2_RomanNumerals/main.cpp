/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on February 12, 2017, 11:37 AM
 * Purpose:To write a program that asks the user to enter a number. The
 * program should use the input to find an equivalent Roman numeral
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
//Declare all Variables Here
int num,romnum;    //Arabic input, Roman output
    cout<<"This program converts numbers in the range of [1,10] into Roman numerals"<<endl;
    cin >> num;
    if (num<1||num>10){ //if a number below one of 10 is entered a false statement is output
    cout<<"You have profoundly disappointed me by failing to enter a number \n"
    "between one and ten, good job"<<endl;
    return 1;
    }
    switch(num){        //if a valid number is input a statement is output correlating to it
        case 10:cout<<"The Roman number equivalent of 10 "<<" is X ";break;
        case 9: cout<<"The Roman number equivalent of 9 "<<" is IX ";break;
        case 8: cout<<"The Roman number equivalent of 8 "<<" is VIII ";break;
        case 7: cout<<"The Roman number equivalent of 7 "<<" is VII ";break;
        case 6: cout<<"The Roman number equivalent of 6 "<<" is VI ";break;
        case 5: cout<<"The Roman number equivalent of 5 "<<" is V ";break;
        case 4: cout<<"The Roman number equivalent of 4 "<<" is IV ";break;
        case 3: cout<<"The Roman number equivalent of 3 "<<" is III ";break;
        case 2: cout<<"The Roman number equivalent of 2 "<<" is II ";break;
        case 1: cout<<"The Roman number equivalent of 1 "<<" is I ";
    }
    
      
     
//Input or initialize values Here
    
//Process/Calculations Here
    
//Output Located Here


    //Exit
    return 0;
}

