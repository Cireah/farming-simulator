#pragma once
#include "Includes.h"

class Animalspecies 
{
public:
	void Buy(int &money);
	void Sell(int &budget);
	void View();
	virtual void AnimalColour();

private:
	std::string userinput;
	std::string colour = "fuck";
	int decision;
	int cow = 0;
	int sheep = 0;
	int pig = 0;
};