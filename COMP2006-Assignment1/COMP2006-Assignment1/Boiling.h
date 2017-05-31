#pragma once

//This function gets the input from the user and return the substance relating to that boiling point
string getSubstance();

//This function is the same as getSubstance(), however it allows the user to choose between Celsius, Fahrenheit, and Kelvin's
string modifiedGetSubstance();

//This function checks if the user's input is within the bounds of the substance boiling point using the variable difference defined
bool withinBounds(double boilingPoint, double userSubstance, double variableDifference);

//This function calculates the value difference allowed in the user's input
double calculateVariableRange(double boilingPoint, double variableDifference);

//This function converts the userSelection from Celsius to Fahrenheit
double convertToFahrenheit(double userSelection);

//This function converts the userSelection from Celsius to Kelvin
double convertToKelvin(double userSelection);