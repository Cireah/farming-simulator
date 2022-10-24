#pragma once
#include "Includes.h"

class Cow : public Animalspecies
{
public:
	void SetCows(int newCow)
	{
		cows = newCow;
	}

	void Animalprice() override
	{
		std::cout << "500 kr\n";
	}

private:
	int price = 500;
	int cows = 5;
};