/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on April 23, 2017, 11:37 AM
 * Purpose:Brute force compared to summation
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void Menu(); //menu prototype
int nPut(); //input for menu decisions
void def(int);
void problem1 ();
void problem2 (); //this function inputs four values and displays an equal amount of starts
void problem3 ();
void problem4 ();
void problem5 ();
void problem6 ();
//Program Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize Variables Here
   int oPut;  
do{
    Menu();
    oPut=nPut();
    switch(oPut){
        case 1 : problem1 ();break;
        case 2 : problem2 ();break;
        case 3 : problem3 ();break;
        case 4 : problem4 ();break;
        case 5 : problem5 ();break;
        case 6 : problem6 ();break;
        default:;
    };
}while (oPut<7);    
    
//Process/Calculations Here

//Output Located Here
    //Exit
    return 0;
}
/***********************************
 ***********MENU*FUNCTION***********
 ***********************************/

void Menu(){ //prototype cout for menu inputs
    cout<<"Input 1 for Problem 1, X shaped number pattern"<<endl;
    cout<<"Input 2 for 4 character number reader"<<endl;
    cout<<"Input 3 for check writing program"<<endl;
    cout<<"Input 4 for subscription package program"<<endl;
    cout<<"Input 5 Gross pay calculator"<<endl;
    cout<<"Input 6 Sequencing program"<<endl;
    cout<<"Input 7 to exit this humble program"<<endl;
}
    //menu choose input function
    int nPut(){
    int oPut;    
    cin>>oPut;
    return oPut;
    }
    
/***********************************
 ***********X*FUNCTION**************
 ***********************************/
                

void problem1 (){int i;
    int n;
    int q;
    q=i;
    n=1;
    int d=1;
    cout<<"Please enter an integer that is higher than 1, but less than 50"<<endl;
        cin>>i;
    do{
        cout<<endl<<setw(i)<<i<<endl;
        for(i>=1&&i<=50; i--;){
        cout<<endl<<setw(6)<<setw(i)<<i<<endl;
    }
    }while(i>=1&&i<50);
}


/***********************************
 *********ASTERISK*FUNCTION*********
 ***********************************/
            

void problem2(){ //asterisk problem
    cout<<"This program will output a a combination of four integers as stars"<<endl;
    char f,o,u,r; //first input, second input, third input, fourth input
    cout<<"Input a four digit input for translation into stars"<<endl;
    cin>>f>>o>>u>>r;
    
    if(f=='1'){
        cout<<"1 *"<<endl;
    }
    else if(f=='2'){
        cout<<"2 **"<<endl;
    }
    else if(f=='3'){
        cout<<"3 ***"<<endl;
    }
    else if(f=='4'){
        cout<<"4 ****"<<endl;
    }
    else if(f=='5'){
        cout<<"5 *****"<<endl;
    }
    else if(f=='6'){
        cout<<"6 ******"<<endl;
    }
    else if(f=='7'){
        cout<<"7 *******"<<endl;
    }
    else if(f=='8'){
        cout<<"8 ********"<<endl;
    }
    else if(f=='9'){
        cout<<"9 *********"<<endl;
    }
    else cout<<f<<" ?"<<endl;
    
    if(o=='1'){
        cout<<"1 *"<<endl;
    }
    else if(o=='2'){
        cout<<"2 **"<<endl;
    }
    else if(o=='3'){
        cout<<"3 ***"<<endl;
    }
    else if(o=='4'){
        cout<<"4 ****"<<endl;
    }
    else if(o=='5'){
        cout<<"5 *****"<<endl;
    }
    else if(o=='6'){
        cout<<"6 ******"<<endl;
    }
    else if(o=='7'){
        cout<<"7 *******"<<endl;
    }
    else if(o=='8'){
        cout<<"8 ********"<<endl;
    }
    else if(o=='9'){
        cout<<"9 *********"<<endl;
    }
    else cout<<o<<" ?"<<endl;
    
    if(u=='1'){
        cout<<"1 *"<<endl;
    }
    else if(u=='2'){
        cout<<"2 **"<<endl;
    }
    else if(u=='3'){
        cout<<"3 ***"<<endl;
    }
    else if(u=='4'){
        cout<<"4 ****"<<endl;
    }
    else if(u=='5'){
        cout<<"5 *****"<<endl;
    }
    else if(u=='6'){
        cout<<"6 ******"<<endl;
    }
    else if(u=='7'){
        cout<<"7 *******"<<endl;
    }
    else if(u=='8'){
        cout<<"8 ********"<<endl;
    }
    else if(u=='9'){
        cout<<"9 *********"<<endl;
    }
    else cout<<u<<" ?"<<endl;
    
    if(r=='1'){
        cout<<"1 *"<<endl;
    }
    else if(r=='2'){
        cout<<"2 **"<<endl;
    }
    else if(r=='3'){
        cout<<"3 ***"<<endl;
    }
    else if(r=='4'){
        cout<<"4 ****"<<endl;
    }
    else if(r=='5'){
        cout<<"5 *****"<<endl;
    }
    else if(r=='6'){
        cout<<"6 ******"<<endl;
    }
    else if(r=='7'){
        cout<<"7 *******"<<endl;
    }
    else if(r=='8'){
        cout<<"8 ********"<<endl;
    }
    else if(r=='9'){
        cout<<"9 *********"<<endl;
    }
    else cout<<r<<" ?"<<endl;

}
void def(int oPut)
{
    cout<<"You typed "<<oPut<<" to exit the program"<<endl;
}

void problem3 (){ //check problem
    cout<<"In problem # 3"<<endl<<endl;
//Declare Variables
    unsigned short amnt, v, f, r; //dollar amount, amount greater than 100, amount greater than 1
    string date, pFn, pLn, ahFn, ahLn;
    const int SIZE=25;
    
    cout<<"Enter the following to produce a check: "<<endl;
    cout<<"Date (01/01/15): "<<endl;
    cin>>date;
    cout<<"Payee (first name and last name): "<<endl;
    cin>>pFn>>pLn;
    cout<<"Amount (in dollars ex. 123): "<<endl;
    cin>>amnt;
    cout<<"The account holder (first name and last name): "<<endl;
    cin>>ahFn>>ahLn;
    
    //To output a check
    cout<<"*********************************************************************"<<endl;
    cout<<" "<<endl;
    cout<<ahFn<<" "<<ahLn<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY, STATE  ZIP                                    "<<date<<endl;
    cout<<" "<<endl;
    cout<<"Pay to the Order of: "<<pFn<<" "<<pLn<<"                 $"<<amnt<<".0"<<endl;
    cout<<" "<<endl;
    
    
    if(amnt>=1000){
        cout<<"That is too much money for the range of this check."<<endl;
    }
    else if(amnt>=100){
        {
        v=amnt/100;
            if(v==9)cout<<"Nine";
            else if(v==8)cout<<"Eight";
            else if(v==7)cout<<"Seven";
            else if(v==6)cout<<"Six";
            else if(v==5)cout<<"Five";
            else if(v==4)cout<<"Four";
            else if(v==3)cout<<"Three";
            else if(v==2)cout<<"Two";
            else if(v==1)cout<<"One";
	    cout<<" Hundred and ";
        }
        amnt=amnt%100;
    }if(amnt>=20){
        {
        f=amnt/10;
            if(f==9)cout<<"Ninety";
            else if(f==8)cout<<"Eighty";
            else if(f==7)cout<<"Seventy";
            else if(f==6)cout<<"Sixty";
            else if(f==5)cout<<"Fifty";
            else if(f==4)cout<<"Forty";
            else if(f==3)cout<<"Thirty";
            else if(f==2)cout<<"Twenty";
            cout<<"-";
        }
        amnt=amnt%10;
    }if(amnt>=1){
        {
        r=amnt/1;
            if(r==19)cout<<"Nineteen";
            else if(r==18)cout<<"Eighteen";
            else if(r==17)cout<<"Seventeen";
            else if(r==16)cout<<"Sixteen";
            else if(r==15)cout<<"Fifteen";
            else if(r==14)cout<<"Fourteen";
            else if(r==13)cout<<"Thirteen";
            else if(r==12)cout<<"Twelve";
            else if(r==11)cout<<"Eleven";
            else if(r==10)cout<<"Ten";
            else if(r==9)cout<<"Nine";
            else if(r==8)cout<<"Eight";
            else if(r==7)cout<<"Seven";
            else if(r==6)cout<<"Six";
            else if(r==5)cout<<"Five";
            else if(r==4)cout<<"Four";
            else if(r==3)cout<<"Three";
            else if(r==2)cout<<"Two";
            else if(r==1)cout<<"One";
	   
        }
        amnt=amnt%1;
    }
    
    
    //A check looks something like this
    cout<<amnt<<" and no/100's Dollars"<<endl;
    cout<<" "<<endl;
    cout<<"BANK OF CSC5"<<endl;
    cout<<" "<<endl;
    cout<<"FOR: GOTTA PAY THE RENT                        "<<ahFn<<" "<<ahLn<<endl;
    cout<<" "<<endl;
    cout<<"*********************************************************************"<<endl;
    
    
}

/***********************************
 *******SUBSCIPTION*FUNCTION********
 ***********************************/
            

void problem4 (){ //subscription fee
    cout<<"In problem # 4"<<endl<<endl;
  
  char input;//Holds the packages
  unsigned short hours;//Holds the hours of usage 
  float totCst;//Holds the total cost customer will pay 
  float save;//Holds the saved amount
//Let the user know about the Internet Service Providers three different package plans  
     cout<<"An ISP has 3 different subscription packages:\n"
         "      a)  $16.85 per month, 5 hours access.\n"
         "          Additional hours are $0.80 up to 20 hours\n"
         "          then $1 for all additional hours.\n"
         "      b)  $23.85 per month, 15 hours access.\n"
         "          Additional hours are $0.65 up to 25 hours\n"
         "          then $0.70 for each hour above this limit.\n"
         "      c)  $29.55 per month unlimited access."<<endl;
   cout<<endl;
//This is a prompt for the user to input which package they want and the hours they spent on the net!
    cout<<"How many hours would you like to access? ";
    cin>>hours;
    cout<<endl;
    cout<<"Which Package would you like to choose (a,b,or c)? ";
    cin>>input;
    cout<<endl;
  
//Results depending of which package
    cout<<fixed<<showpoint<<setprecision(2);
//Package Plan A 
    if(input=='a'||input=='A'){
        float cost=16.85;
        if(hours<=5){
            totCst=cost;
            cout<<"Your total cost is: $"<<totCst<<" per month"<<endl;
        }else if(hours>5&&hours<=20){
            totCst=cost+(.8*(hours-5));
            cout<<"Your total cost is: $"<<totCst<<" per month"<<endl;
            if(hours>=14&&hours<=15){
                cout<<"You will save money by switching to package b.\n";
                save=totCst-(23.85);
                cout<<"You will save: $"<<save<<endl;
            }
            if(hours>15&&hours<=20){
                cout<<"You will save money by switching to package b.\n";
                save=totCst-(23.85+((hours-15)*.65));
                cout<<"You will save: $"<<save<<endl;
                }
        }else if(hours>20){
            totCst=cost+(.8*(20-5))+(hours-20);
            cout<<"Your total cost is: $"<<totCst<<" per month"<<endl;
            if(hours>=21&&hours<=23){
                cout<<"You will save money by switching to package b.\n";
                save=totCst-(23.85+((hours-15)*.65));
                cout<<"You will save: $"<<save<<endl;
            }else if(hours>=24){
                cout<<"You will save money by switching to package c.\n";
                save=totCst-29.55;
                cout<<"You will save: $"<<save<<endl;
            }
        }
    }
    //Package Plan B
    if(input=='b'||input=='B'){
        float cost=23.85;
        if(hours<=15){
            totCst=cost;
            cout<<"Your total cost is: $"<<totCst<<" per month"<<endl;
            if(hours<=13){
                cout<<"You will save money by switching to package a.\n";
                save=totCst-(16.85+(.8*(hours-5)));
                cout<<"You will save: $"<<save<<endl;
            }
        }else if(hours>15&&hours<=25){
            totCst=cost+((hours-15)*.65);
            cout<<"Your total cost is: $"<<totCst<<" per month"<<endl;
            if(hours>=24&&hours<=25){
                cout<<"You will save money by switching to package c.\n";
                save=totCst-29.55;
                cout<<"You will save: $"<<save<<endl;
            }
        }else if(hours>25){
            totCst=cost+((25-15)*.65)+((hours-25)*.7);
            cout<<"Your total cost is: $"<<totCst<<" per month"<<endl;
            cout<<"You will save money by switching to package c.\n";
            save=totCst-29.55;
            cout<<"You will save: $"<<save<<endl;
        }
    }
    //Package Plan C
    if(input=='c'||input=='C'){
        float cost=29.55;
        cout<<"Your total cost is: $"<<cost<<" per month"<<endl;
        if(hours<=13){
            cout<<"You will save money by switching to package a.\n";
            save=cost-(16.85+(.8*(hours-5)));
            cout<<"You will save: $"<<save<<endl;
        }else if (hours>=14&&hours<=15){
            cout<<"You will save money by switching to package b.\n";
            save=cost-23.85;
            cout<<"You will save: $"<<save<<endl;
        }else if(hours>=16&&hours<=23){
            cout<<"You will save money by switching to package b.\n";
            save=cost-(23.85+((hours-15)*.65));
            cout<<"You will save: $"<<save<<endl;
        }
    }
}

/***********************************
 *********PAYSCALE*FUNCTION*********
 ***********************************/
            

void problem5 (){
    cout<<"In problem # 5"<<endl<<endl;
    //Declare Variables
       float hrs;        //Hours worked
       float  pay;      //Hourly pay
       float  grsPay;  //Total pay
            
    //Ask user for their information Hours worked, Pay to return Gross Pay
    cout<<"How many hours did you work this week? ";
    cin>>hrs;
    cout<<endl;
    cout<<"How much do you get payed per hour? $";
    cin>>pay;
    cout<<endl;
    
    //Find Gross Pay
    if(hrs<=20){
        grsPay=pay*hrs;
        cout<<"Your gross pay is = $"<<grsPay<<endl;
    }else if(hrs>20&&hrs<=40){
        grsPay=((hrs-20)*(pay*1.5))+(20*pay);
        cout<<"Your gross pay is = $"<<grsPay<<endl;
    }else if(hrs>40){
        grsPay=((hrs-40)*(pay*2))+((20)*(pay*1.5))+(20*pay);
        cout<<"Your gross pay is = $"<<grsPay<<endl;
    }
}
/***********************************
 ***********SUM*FUNCTION************
 ***********************************/
            

void problem6 (){
    
cout<<"In problem # 6"<<endl<<endl;
//Declare Variables
   unsigned short n;      //Number of terms that'll be incremented
   unsigned short x;     //What x is equal to due to the input of the user
   unsigned short z;     //Will replace n in For-Loop
   unsigned short nx=0; //What x will be raised with
            float d=0;   //To add on the totals in Loop
            float sum=0;  //The total will be equal to it
   
    //Ask user for what x and n are 
    cout<<"How many terms are there? ";
    cin>>n;
    cout<<"What is x equal to? ";
    cin>>x;
    cout<<endl;
    z=n;
    
    //Loop to find the sum
    for(int i=0;i<z;i++){
        //Find sum
        d=n/(pow(x,d));
        sum+=d;
        d++;
        n--;
    }
    
    //Output what sum is equal to
    cout<<fixed<<setprecision(2);
    cout<<"Your total sum is = "<<sum<<endl;    
    
}