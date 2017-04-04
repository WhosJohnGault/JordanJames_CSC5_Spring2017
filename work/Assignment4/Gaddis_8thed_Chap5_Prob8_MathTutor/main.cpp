/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 30, 2017, 11:27 AM
 * Purpose:  Math Tutor
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //set the random number seed
    srand (static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int op1; 
    int op2; 
    int result;
    int answer;
    char choice;
    
    //Input data
    do{
    cout<<"Math Tutor"<<endl;
    cout<<"Choose the operator * / - + "<<endl;
    cin>>choice;
    cout<<endl<<endl;
    if (!(choice=='+'||choice=='-'||choice=='*'||choice=='/')){
        cout<<"exit the Math tutor"<<endl;
        exit(0);
    }
    
    //map inputs to outputs or process the data
    switch (choice){
        case'+':{
            op1=rand()%900+100; //[100-999]
            op2=rand()%900+100; //[100=999]
            answer=op1+op2; //[3-4 digit result]
            break;
        }
        case'-':{
            op1=rand()%900+100; //[100-999]
            op2=rand()%900+100; //[100-999]
           answer=op1-op2; //possible negative answer
           break;
        }
        case'*':{
             op1=rand()%900+10; //[10-999]
            op2=rand()%900+10; //[10-999]
            answer=op1*op2;
            break;
        }
        case'/':{
             op1=rand()%90+10; //[100-999]
             op2=rand()%90+10; //[100-999]
             answer=op1*op2;
             break;
        }
        default: {
            cout<<"Bad operator"<<endl;
            return 1;
        }
    }
    //Process/Calculations Here
    
    //Output Located Here
cout <<setw(8)<<op1<<endl;
cout <<choice<<setw(7)<<op2<<endl;
cout <<"--------"<<endl;
cin >>result;

//compare the answer
cout <<endl;
cout <<((result==answer)?"Correct":"Incorrect")<<endl;
cout<<"the answer = "<<answer<<endl;
}while(choice=='+'||choice=='-'||choice=='/'||choice=='+');
    //Exit
    return 0;
    }
    


