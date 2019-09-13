/**
 * \file Farm.h
 *
 * \author Tu Le
 *
 * Class that describes a Farm.
 *
 * This class holds a collection of animals that make
 * up the inventory of a farm.
 */

#pragma once
#include <vector>
#include "Cow.h"


/**
 * Class that describes a farm.
 *
 * Holds a collection of animals that make up the farm
 * inventory.
 */
class CFarm
{
private:
	/// A list with the inventory of all animals on the farm
	std::vector<CAnimal *> mInventory;

public:
	void AddAnimal(CAnimal* animal);
	void DisplayFemaleAnimalCount();
	void DisplayInventory();
	~CFarm();

};

