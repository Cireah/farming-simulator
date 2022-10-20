#pragma once
#include "Includes.h"
#include "Animalspecies.h"

class Farmer
{
public:
	void Run();
	int a;
	void SetMoney(int newMoney)
	{
		if (newMoney < 0) { money = MIN_MONEY; return; }
		money = newMoney;
	}

	int GetMoney() {
		return money;
	}
private:
	const int MIN_MONEY = 0;
	int money = budget;
	string userinput;
	int decision;
};