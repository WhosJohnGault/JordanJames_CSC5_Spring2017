/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on February 12, 2017, 11:37 AM
 * Purpose:A bookseller has a book club that awards points to its customers
 *  based on the number of books purchased each month. The points are awarded 
 * as follows: if a consumer purchases 0 books they receive 0 points, 1 purchase=5 points
 * 2 purchases 15 points, 3 purchases 30 points, 4 or more 60 points.
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
float purchase,points; //book purchases, points from the purchases
    cout<<"this program tells how many points have been earned\n"
          "through book sales"<<endl;       
    cout<<"how many books did you purchase this month? "<<endl;
cin>>purchase;
if (purchase>=4)
    cout<<"you have earned 60 points!";
else if (purchase==3)
    cout<<"you have earned 30 points!";
else if (purchase==2)
    cout<<"you have earned 15 points!";
else if (purchase==1)
    cout<<"you have earned 5 points!";
else if (purchase ==0)
    cout<<"You have earned no points";    
//Input or initialize values Here
    
//Process/Calculations Here
    
//Output Located Here
    //Exit
    return 0;
}

