/**
 * \file Goat.h
 *
 * \author Tu Le
 *
 * Class that describes a Goat.
 *
 * This class holds a collection of characteristics of a goat
 */

#pragma once
#include <string>
#include "Animal.h"


 /**
 * Class that describes a Goat.
 *
 * Holds a collection of characteristics of a goat
 */
class CGoat : public CAnimal
{
	/// The types of goat we can have on our farm
	enum Type { Nanny, Billy, Wether, MaleKid, FemaleKid };

private:
	/// The goat's name
	std::string mName;

	/// The type of goat: Nanny, Billy, Wether, Male Kid, Female Kid
	Type mType = Nanny;

public:
	void ObtainGoatInformation();
	void DisplayAnimal();
	bool IsFemale();
};

