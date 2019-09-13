/**
 * \file Animal.h
 *
 * \Tu Le
 *
 * Declaration of the CAnimal class.
 */

#pragma once

class CAnimal
{
public:
	virtual ~CAnimal();

	/** Display an animal. */
	virtual void DisplayAnimal() {}
	/** Check if an animal is a female. */
	virtual bool IsFemale() { return true; }
};