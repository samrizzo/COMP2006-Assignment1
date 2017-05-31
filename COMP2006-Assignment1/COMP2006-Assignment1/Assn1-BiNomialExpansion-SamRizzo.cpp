#include "stdafx.h"
#include "BiNomialExpansion.h"
#include <cmath>

void chooseOperation()
{
	//Variable that stores user selection
	int userSelection;

	//Prompt user for selection
	cout << "Please select an option (Option 1 will be the default if an incorrect option is given)\n"
		<< "1. Draw Pascal's Triangle\n2. Binomial Expansion\n\nOption: ";

	cin >> userSelection;

	//Test the selection
	if (cin.fail() || (userSelection < 0 || userSelection > 2))
	{
		//Set to draw Pascal's Triangle as default
		userSelection = 1;
	}

	if (userSelection == 1)
	{
		drawPascalsTriangle();
	}
	if (userSelection == 2)
	{
		biNomialExpansion();
	}
}

void drawPascalsTriangle()
{
	//Clear the input
	cin.clear();
	cin.ignore(10000, '\n');

	//Create a variable for the exponent
	int exponent;

	//Ask user to enter the exponent and store the value
	cout << "Enter the exponent for pascal's triangle: ";
	cin >> exponent;

	//Loop through rows
	for (int i = 0; i <= exponent; i++)
	{
		//Set the coefficient = 1
		int coefficient = 1;

		for (int j = 1; j <= (exponent - i); j++)
		{
			//Add spacing for formatting
			cout << "   ";
		}

		for (int k = 0; k <= i; k++)
		{
			//Print the coefficient
			cout << "     " << coefficient;

			//Calculate the binomial coefficient for each column
			coefficient = coefficient * (i - k) / (k + 1);
		}

		cout << "\n\n";
	}
}

void biNomialExpansion()
{
	cout << "\n****************************** Brackets will encapsulate the terms for better clarity ******************************\n\n";

	//Create variables to store terms
	string firstTerm = "x";
	string secondTerm = "y";

	//Variable to store exponent
	int exp;

	cout << "Enter the value of the exponent you would like to use: ";
	cin >> exp;

	//Run the binomial theorem to expand the polynomial
	cout << "\n(x+y)^" + to_string(exp) + " = " + binomialTheorem(exp, firstTerm, secondTerm);

	cout << "\n";
}

string binomialTheorem(int exp, string term1, string term2)
{
	//Set variables for the first term's exponent and the second term's exponent
	int firstExponent = exp;
	int secondExponent = 0;

	//Set variable for the expanded polynomial result
	string result = "";
	
	//Set the coefficient = 1
	int coefficient = 1;

	for (int k = 0; k <= exp; k++)
	{

		if (firstExponent != 0 && secondExponent != 0)
		{
			result +=  "(" + to_string(coefficient) + term1 + "^" + to_string(firstExponent) + ")(" + term2 + "^" + to_string(secondExponent) + ") + ";
		}
		if (firstExponent != 0 && secondExponent == 0)
		{
			result += "(" + to_string(coefficient) + term1 + "^" + to_string(firstExponent) + ") + ";
		}
		else if (secondExponent != 0 && firstExponent == 0)
		{
			result += "(" + to_string(coefficient) + term2 + "^" + to_string(secondExponent) + ") ";
		}

		//Calculate the binomial coefficient for each column
		coefficient = coefficient * (exp - k) / (k + 1);

		//Increment the first exponent and decrement the second exponent
		firstExponent--;
		secondExponent++;
	}

	//Return the result of the expanded polynomial
	return result;
}