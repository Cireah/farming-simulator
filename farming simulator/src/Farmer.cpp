#include "Includes.h"
#include "Farmer.h";
#include "Animalspecies.h";

void Farmer::Run()
{
	int budget;
	if (a = 0)
	{
		budget = 1000;
	}
	if (a > 0)
	{
		budget = GetMoney();
	}
	cout << money << "\n";
	Animalspecies animalspecies;
	while (true)
	{
		cout << "Welcome to your farm! You have a budget of " << money << " kr!\n";
		cout << "1. Buy animal\n2. Sell animal\n3. View animals.\n4. Shutdown.\n";
		cin >> userinput;
		try {
			decision = stoi(userinput);
		}
		catch (...)
		{
			Run();
		}

		if (decision == 1)
		{
			animalspecies.Buy();
		}
		else if (decision == 2)
		{
			animalspecies.Sell();
		}
		else if (decision == 3)
		{
			animalspecies.View();
		}
		else if (decision == 4)
		{
			break;
		}
	};
}