#pragma once
#include "Includes.h"
#include "Animalspecies.h"

class Pig : public Animalspecies
{
public:
	void SetPigs(int newPigs)
	{
		pigs = newPigs;
	}

	void Animalprice() override
	{
		cout << "100 kr\n";
	}

private:
	int price = 100;
	int pigs = 5;
};