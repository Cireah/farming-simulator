#include "Includes.h"
#include "Farmer.h";

void Farmer::Run()
{
	Animalspecies animalspecies;
	cout << "Welcome to your farm!\n1. Buy animal\n2. Sell animal\n3. View animals.\n4. Shutdown.\n";
	while (true)
	{
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
			cout << "bye";
			break;
		}
		else
		{
			cout << "papa emeritus";
			break;
		}
	};
}