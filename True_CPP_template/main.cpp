/*
 * File:    main.cpp
 Author: James Jordan
 Created on February 16, 2017, 11:17 AM
 *Purpose: Template to be utilized in in creating
 *         solutions to problems in our CSC/CIS 5 
 *         class.
* 
 */
 
  //System Libraries
#include <iostream>    //Input - Output Library

using namespace std; //Name-Space under which systems libraries exist

  //User Libraries

  //Global Libraries


  //Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    unsigned short uSh_nFloor = 0; //Holds the number of floors the hotel has
	unsigned short uSh_nRoom = 0; //Holds the number of rooms the hotel has
	unsigned short uSh_nRmOcup = 0; //Holds the number of rooms occupied
	unsigned short uSh_nRmUocp = 0; //Holds the number of rooms unoccupied
//The programmer declares this variable to hold the percentage
	float f_ocpRate = 0.0f; //The percentage of rooms that are occupied
//Prompt the user input the number of floors the hotel has
	cout << "Enter the number of floors the hotel has: ";
	cin >> uSh_nFloor;
//Iterate through each floor
	for(int i = 0, total = 0, totOccu = 0; i < uSh_nFloor; ++i) {
//Prompt for the number of rooms and occupancy
		cout << "Enter the number of rooms on the floor " << i+1 << ": ";
		cin >> uSh_nRoom;
		cout << "How many rooms are occupied in floor " << i+1 << "? ";
		cin >> uSh_nRmOcup;
//Record the total number of rooms in the hotel
		total += uSh_nRoom;
//Record the number of rooms that are occupied
		totOccu += uSh_nRmOcup;

		uSh_nRoom = total;
		uSh_nRmOcup = totOccu;
	}//The end of the for loop
//Calculate the number of Unoccupied rooms
	uSh_nRmUocp = uSh_nRoom - uSh_nRmOcup;
//Output the results
	cout << "The hotel has total of " << uSh_nRoom << " rooms\n";
	cout << "Out of " << uSh_nRoom << " rooms, " << uSh_nRmOcup
		 << " rooms are occupied.\n";
	cout << "Out of " << uSh_nRoom << " rooms, " << uSh_nRmUocp 
		 << " rooms are unoccupied.\n";
	cout << "The percentage of rooms that are occupied: "
		 << (static_cast<float>(uSh_nRmOcup) / uSh_nRoom) * 100 << "%\n";
//Exit stage right!        


    //Declare variables
   
    //Input Data
   
    //Map inputs to outputs or process the data

    //Exit stage right!
return 0;
}