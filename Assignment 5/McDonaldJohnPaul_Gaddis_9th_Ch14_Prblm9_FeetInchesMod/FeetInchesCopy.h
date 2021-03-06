/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FeetInchesCopy.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 5:49 PM
 */

// Specification file for the FeetInches class
#ifndef FEETINCHESCOPY_H
#define FEETINCHESCOPY_H

#include <iostream>
using namespace std;

class FeetInches;	// Forward Declaration

// Function Prototypes for Overloaded Stream Operators
ostream &operator << (ostream &, const FeetInches &);
istream &operator >> (istream &, FeetInches &);

// The FeetInches class holds distances or measurements 
// expressed in feet and inches.

class FeetInches
{
private:
   int feet;        // To hold a number of feet
   int inches;      // To hold a number of inches
   void simplify(); // Defined in FeetInches.cpp
public:
   // Constructor
	FeetInches(int f = 0, int i = 0)
		{ feet = f;
		  inches = i;
		  simplify(); }

   // Mutator functions
	void setFeet(int f)
		{ feet = f; }

	void setInches(int i)
		{ inches = i;
		  simplify(); }

   // Accessor functions
	int getFeet() const
		{ return feet; }

	int getInches() const
		{ return inches; }

   // Overloaded operator functions
	FeetInches operator + (const FeetInches &); // Overloaded +
	FeetInches operator - (const FeetInches &); // Overloaded -
	FeetInches operator ++ ();					// Prefix ++
	FeetInches operator ++ (int);				// Postfix ++
	bool operator > (const FeetInches &);		// Overloaded >
	bool operator < (const FeetInches &);		// Overloaded <
	bool operator == (const FeetInches &);		// Overloaded ==
        bool operator <= (const FeetInches &);          // Overloaded <= //my work
        bool operator >= (const FeetInches &);          // Overloaded >= //my work
        bool operator != (const FeetInches &);          // Overloaded != //my work

   // Conversion functions
	operator double();
	operator int();
	
   // Friends
	friend ostream &operator << (ostream &, const FeetInches &);
	friend istream &operator >> (istream &, FeetInches &);
};

#endif /* FEETINCHESCOPY_H */

