#pragma once
#include "Includes.h"

class Sheep : public Animalspecies
{
public:
	void SetSheep(int newSheep)
	{
		sheep = newSheep;
	}

	void Animalprice() override
	{
		std::cout << "200 kr\n";
	}

private:
	int price = 200;
	int sheep = 5;
};