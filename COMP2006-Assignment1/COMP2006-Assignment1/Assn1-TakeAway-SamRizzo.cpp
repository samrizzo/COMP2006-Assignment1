#include "stdafx.h"
#include <stdlib.h>

int promptForYear()
{
	//Set variable for the year
	int year = 0;

	//Prompt the user to enter a year after 2005
	cout << "Please enter a year after 2005. If the year is 2005 or prior the test will exit.\n\n";

	//Store year in variable
	cin >> year;

	//Return the year entered
	return year;
}

string estimateFoodBillions()
{
	//Store value from promptForYear() in variable
	int yearEntered = promptForYear();

	//Variable to store estimated earnings in billions.
	double foodEarnings = 0.00;

    //If else statement to test the date entered. If before 2005 exit the program
	if (yearEntered <= 2005)
	{
		cout << "The year entered is 2005 or prior.\nThe test will now exit...\n";

		//Exit the program
		//exit(EXIT_FAILURE);
	}
	else if (yearEntered >= 2006)
	{
		//Calculate the profit for the year entered
		foodEarnings = 33.2 + (16.8 * (yearEntered - 2005));

		//Create a string variation of foodEarnings and remove the excess zeros
		string earnings = to_string(foodEarnings);
		string modifiedEarnings = earnings.erase(earnings.find_first_of('.') + 3);
		
		return "The estimated amount of profit for the year " + to_string(yearEntered) + " is $" + modifiedEarnings + " billion dollars.\n";
	}

	//Return an empty string if yearEntered is equal or prior to 2005
	return ""; 
}