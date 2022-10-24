#pragma once
#include "Includes.h"

class Animalspecies 
{
public:
	void Buy(int &money);
	void Sell(int &budget);
	void View();
	virtual void Animalprice();

private:
	std::string userinput = "";
	int decision;
};