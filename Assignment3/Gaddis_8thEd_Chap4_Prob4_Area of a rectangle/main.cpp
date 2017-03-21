/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on February 12, 2017, 11:37 AM
 * Purpose:To write a program that asks the user to enter the dimensions of
 * a rectangle. The program will ask the user to input the enter the length and
 * width of two rectangles. The program will tell the user which rectangle has
 * the greater area of if they are the same  
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
int length1,width1,area1; //length of rectangle 1, width, area
int length2,width2,area2; //length of rectangle 2, width, area
    cout<<"This program compares the area of two rectangles"<<endl;
    cout<<"Please enter the length of the first rectangle";
    cin >> length1;
    cout<<"Please width of the same rectangle"<<endl;
    cin >> width1;
    area1=length1*width1;
    cout<<"The second rectangle will now be input"<<endl;
    cout<<"Please input the length";
    cin>>length2;
    cout<<"Please input the width";
    cin>>width2;
    area2=length2*width2;
    
    if (area1>area2)
    cout<<"the first rectangle has a greater area";
    else if (area1<area2)
    cout<<"the second rectangle has a greater area";
    else if (area1=area2)
    cout<<"The two rectangles have an equal area";    
                  
      
     
//Input or initialize values Here
    
//Process/Calculations Here
    
//Output Located Here


    //Exit
    return 0;
}

