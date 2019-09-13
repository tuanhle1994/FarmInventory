/**
 * \file Cow.h
 *
 * \author Tu Le
 *
 * Class that describes a Cow.
 *
 * This class holds a collection of characteristics of a cow
 */

#pragma once
#include <string>
#include "Animal.h"


/**
* Class that describes a Cow.
*
* Holds a collection of characteristics of a cow
*/
class CCow : public CAnimal
{
	/// The types of cow we can have on our farm
	enum Type { Bull, BeefCow, MilkCow };

private:
	/// The cow's name
	std::string mName;

	/// The type of cow: Bull, BeefCow, or MilkCow
	Type mType = MilkCow;

	/// The milk production for a cow in gallons per day
	double mMilkProduction = 0;

public:
	void ObtainCowInformation();
	void DisplayAnimal();
	bool IsFemale();
};

