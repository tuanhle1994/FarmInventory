/**
 * \file Chicken.h
 *
 * \Tu Le
 *
 * Declaration of the CChicken class.
 */

#pragma once

#include <string>
#include "Animal.h"

 /** Class that describes a chicken.
 */
class CChicken : public CAnimal
{
public:
	CChicken();
	virtual ~CChicken();

	void ObtainChickenInformation();
	void DisplayAnimal();
	bool IsFemale();

private:
	//! The chicken's ID
	std::string mId;
};

