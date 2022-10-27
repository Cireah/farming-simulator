#pragma once
#include "Includes.h"

class Sheep : public Animalspecies
{
public:
	void SetSheep(int newPrice)
	{
		price = newPrice;
	}

	int GetSheep()
	{
		return price;
	}

	void AnimalColour() override
	{
		colour = "white";
		std::cout << colour;
	}

private:
	int price = 200;
	std::string colour;
};