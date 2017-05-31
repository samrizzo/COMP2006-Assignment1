#include "stdafx.h"

//Define the boiling points for each substance in list in Celsius
const double WATER = 100.00;
const double MERCURY = 357.00;
const double COPPER = 1187.00;
const double SILVER = 2193.00;
const double GOLD = 2660.00;

//Define the variable difference allowed for the boiling point
double VARIABLE_DIFFERENCE = 0.05;

double calculateVariableRange(double boilingPoint, double variableDifference)
{
	return boilingPoint * variableDifference;
}

bool withinBounds(double boilingPoint, double userSubstance, double variableDifference)
{
	return userSubstance >= boilingPoint - calculateVariableRange(boilingPoint, variableDifference) && userSubstance <= boilingPoint + calculateVariableRange(boilingPoint, variableDifference);
}

double convertToFahrenheit(double boilingPoint)
{
	return boilingPoint * 1.8 + 32;
}

double convertToKelvin(double boilingPoint)
{
	return boilingPoint + 273.15;
}

string getSubstance()
{
	//Substance type
	string substance = "The substance is ";

	//Variable for user input
	double boilingPoint = 0.00;
	
	//Prompt the user for a boiling point a store the value
	cout << "Please enter a boiling point for the substance: ";
	cin >> boilingPoint;
	
	//Logical tests to find which substance is entered
	if (withinBounds(WATER, boilingPoint, VARIABLE_DIFFERENCE))
	{
		substance += "Water\n";
	}
	else if (withinBounds(MERCURY, boilingPoint, VARIABLE_DIFFERENCE))
	{
		substance += "Mercury\n";
	}
	else if (withinBounds(COPPER, boilingPoint, VARIABLE_DIFFERENCE))
	{
		substance += "Copper\n";
	}
	else if (withinBounds(SILVER, boilingPoint, VARIABLE_DIFFERENCE))
	{
		substance += "Silver\n";
	}
	else if (withinBounds(GOLD, boilingPoint, VARIABLE_DIFFERENCE))
	{
		substance += "Gold\n";
	}
	else
	{
		substance += "Unknown\n";
	}
 	
	//Return the substance
	return substance;
}

string modifiedGetSubstance()
{
	string substance = "The substance is ";
	
	//Variable to store user's type selection
	int userSelection = 1;

	//Variable to store boiling point
	double boilingPoint = 0.00;

	//Ask the user which temperature scale they would like to use
	cout << "Please select the temperature scale you would like to use.(If invalid option is given, Celsius will be the default)\n\n";
	cout << "1. Celsius\n" << "2. Fahrenheit\n" << "3. Kelvin\n\n";
	cout << "Please enter a number relating to the selection type: ";

	//Store user's selection
	cin >> userSelection;

	//Prompt the user for a boiling point a store the value
	cout << "Please enter a boiling point for the substance: ";
	cin >> boilingPoint;

	//If user enter an incorrect number or a string value then set it to Celsius by default
	if (userSelection < 0 || userSelection > 3 || cin.fail())
	{
		userSelection = 1;
	}

	//Logical tests to find which option was chosen
	if (userSelection == 1)
	{
		//Logical tests to find which substance is entered
		if (withinBounds(WATER, boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Water\n";
		}
		else if (withinBounds(MERCURY, boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Mercury\n";
		}
		else if (withinBounds(COPPER, boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Copper\n";
		}
		else if (withinBounds(SILVER, boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Silver\n";
		}
		else if (withinBounds(GOLD, boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Gold\n";
		}
		else
		{
			substance += "Unknown\n";
		}
	}

	else if (userSelection == 2)
	{
		//Logical tests to find which substance is entered
		if (withinBounds(convertToFahrenheit(WATER), boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Water\n";
		}
		else if (withinBounds(convertToFahrenheit(MERCURY), boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Mercury\n";
		}
		else if (withinBounds(convertToFahrenheit(COPPER), boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Copper\n";
		}
		else if (withinBounds(convertToFahrenheit(SILVER), boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Silver\n";
		}
		else if (withinBounds(convertToFahrenheit(GOLD), boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Gold\n";
		}
		else
		{
			substance += "Unknown\n";
		}
	}

	else if (userSelection == 3)
	{
		//Logical tests to find which substance is entered
		if (withinBounds(convertToKelvin(WATER), boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Water\n";
		}
		else if (withinBounds(convertToKelvin(MERCURY), boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Mercury\n";
		}
		else if (withinBounds(convertToKelvin(COPPER), boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Copper\n";
		}
		else if (withinBounds(convertToKelvin(SILVER), boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Silver\n";
		}
		else if (withinBounds(convertToKelvin(GOLD), boilingPoint, VARIABLE_DIFFERENCE))
		{
			substance += "Gold\n";
		}
		else
		{
			substance += "Unknown\n";
		}
	}

	return substance;
}
