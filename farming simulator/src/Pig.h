#pragma once
#include "Includes.h"

class Pig : public Animalspecies
{
public:
	void SetPig(int newPrice)
	{
		price = newPrice;
	}

	int GetPig()
	{
		return price;
	}

	void AnimalColour() override
	{
		colour = "pink";
		std::cout << colour;
	}

private:
	int price = 100;
	std::string colour;
};