#include "stdafx.h"
#include "BiNomialExpansion.h"
#include "Boiling.h"
#include "TakeAway.h"

/*
 * Name: Sam Rizzo
 * Student Number: 200298516
 * Date: May 30th, 2017
 * Class: COMP2006 - Assignment 1
 */


int main()
{
	//Set the precision for cout to two decimal places
	cout.precision(2);

	//Run the getSubstance Test - Question 1
	cout << "Testing Question 1....\n\n";
	cout << getSubstance() << endl;

	//Run the modifiedGetSubstance Test - Question 2
	cout << "Testing Question 2....\n\n";
	cout << modifiedGetSubstance() << endl;

	//Run the estimateFoodBillions Test - Question 3
	cout << "Testing Question 3....\n\n";
	cout << estimateFoodBillions() << endl;

	//Run the pascalsTriangle Test - Question 4
	cout << "Testing Question 4....\n\n";
	drawPascalsTriangle();

	//Run the biNomialExpansion Test - Question 5	1
	cout << "Testing Question 5....\n\n";
	chooseOperation();
	
	//Keep console window open until program is done
	cout << "\n";
	system("pause");

	return 0;
}
