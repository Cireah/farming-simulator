#pragma once
#include "Includes.h"

class Animalspecies 
{
public:
	void Buy(int &money);
	void Sell(int &budget);
	void View();
	virtual int Animalprice();

private:
	std::string userinput = "";
	int decision;
	int cow;
	int sheep;
	int pig;
	int price;
};