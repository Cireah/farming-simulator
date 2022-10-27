#pragma once
#include "Includes.h"

class Cow : public Animalspecies
{
public:
	void SetCow(int newPrice)
	{
		price = newPrice;
	}

	int GetCow() 
	{
		return price;
	}

	void AnimalColour() override
	{
		colour = "brown";
		std::cout << colour;
	}

private:
	int price;
	std::string colour;
};