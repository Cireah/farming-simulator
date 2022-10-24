#pragma once
#include "Includes.h"

class Cow : public Animalspecies
{
public:
	void SetCows(int newCow)
	{
		cows = newCow;
	}

	int GetCows() 
	{
		return cows;
	}

	int Animalprice() override
	{
		price = 500;
		return price;
	}

private:
	int price = 500;
	int cows = 0;
};