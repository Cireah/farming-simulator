#pragma once
#include "Includes.h"

class Farmer
{
public:
	void Run();
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
	int money = 1000;
	std::string userinput;
	int decision;
};