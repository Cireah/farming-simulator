#pragma once
#include "Includes.h"

class Animalspecies 
{
public:
	void Buy();
	void Sell();
	void View();
	virtual void Animalprice();

private:
	string userinput;
	int decision;
};