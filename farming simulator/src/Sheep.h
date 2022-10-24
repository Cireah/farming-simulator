#pragma once
#include "Includes.h"

class Sheep : public Animalspecies
{
public:
	void SetSheep(int newSheep)
	{
		sheep = newSheep;
	}

	int GetSheep()
	{
		return sheep;
	}

	int Animalprice() override
	{
		price = 200;
		return price;
	}

private:
	int price = 200;
	int sheep = 0;
};