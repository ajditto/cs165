/***************************************************************
 * File: rational.cpp
 * Author: (your name here)
 * Purpose: Contains the method implementations for the Rational class.
 ***************************************************************/

#include "rational.h"

#include <iostream>
using namespace std;
// put your method bodies here
void Rational::prompt() {
   cout << "Top: ";
   cin >> top;

   cout << "Bottom: ";
   cin >> bottom;
}

void Rational::display() {
   wholeNumber = 0;
   topFraction = top;
   bottomFraction = bottom;
   while (topFraction > bottomFraction) {
      wholeNumber += 1;
      topFraction -= bottomFraction;
   }
   if (wholeNumber != 0) {
      cout << wholeNumber
           << " "
           << topFraction
           << "/"
           << bottomFraction
           << endl;
   }
   else {
      cout << top
           << "/"
           << bottom
           << endl;
   }
}

void Rational::displayDecimal() {
   decimal = top / bottom;

   cout << decimal;
}
