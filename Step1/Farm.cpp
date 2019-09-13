/**
 * \file Farm.cpp
 *
 * \author Tu Le
 */

#include "Farm.h"
#include "leak.h"
#include <iostream>

using namespace std;

/** Add an animal to the farm inventory.
 *
 */
void CFarm::AddAnimal(CAnimal* animal)
{
	mInventory.push_back(animal);
}

/** 
 * Display the farm inventory.
 */
void CFarm::DisplayInventory()
{
	for (auto animal : mInventory)
	{
		animal->DisplayAnimal();
	}
}

/**
 * Display the count of female animals.
 */
void CFarm::DisplayFemaleAnimalCount()
{
	int count = 0;
	for (auto animal : mInventory)
	{
		if (animal->IsFemale() == true)
		{
			count++;
		}
	}
	cout << "There are " << count << " female animals" << endl;
}

/**
 * CFarm destructor
 */
CFarm::~CFarm()
{
	// Iterate over all of the animals, destroying 
	// each one.
	for (auto animal : mInventory)
	{
		delete animal;
	}

	// And clear the list
	mInventory.clear();
}