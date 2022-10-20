#pragma once
#include "Includes.h"
#include "Animalspecies.h"

class Cow : public Animalspecies
{
public:
	void SetCows(int newCow)
	{
		cows = newCow;
	}

	void Animalprice() override
	{
		cout << "500 kr\n";
	}

private:
	int price = 500;
	int cows = 5;
};