#pragma once

//This function will prompt the user for which operation they would like to perform
void chooseOperation();

//This function draws pascal's triangle based on the user's exponent
void drawPascalsTriangle();

//This function takes in a polynomial and uses the binomial theorm to expand it
void biNomialExpansion();

//This function finds the binomial coefficient from pascal's triangle and returns the expanded polynomial result
string binomialTheorem(int x, string y, string z);