#pragma once
#include "Includes.h"

class Pig : public Animalspecies
{
public:
	void SetPigs(int newPigs)
	{
		pigs = newPigs;
	}

	int GetPig()
	{
		return pigs;
	}

	int Animalprice() override
	{
		price = 100;
		return price;
	}

private:
	int price = 100;
	int pigs = 0;
};