/***************************************************************
 * File: rational.h
 * Author: (your name here)
 * Purpose: Contains the definition of the Rational class
 ***************************************************************/
#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
   private:
      float top;
      float bottom;
      float decimal;
      float wholeNumber;
      float topFraction;
      float bottomFraction;

   public:
      void prompt();
      void display();
      void displayDecimal();
};

#endif
