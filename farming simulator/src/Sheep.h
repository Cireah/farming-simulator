#pragma once
#include "Includes.h"
#include "Animalspecies.h"

class Sheep : public Animalspecies
{
public:
	void SetSheep(int newSheep)
	{
		sheep = newSheep;
	}

	void Animalprice() override
	{
		cout << "200 kr\n";
	}

private:
	int price = 200;
	int sheep = 5;
};