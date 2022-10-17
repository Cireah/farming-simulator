#include "Includes.h"
#include "Farmer.h";
#include "Animalspecies.h";

void Farmer::Run()
{
	Animalspecies animalspecies;
	while (true)
	{
		cout << "Welcome to your farm!\n1. Buy animal\n2. Sell animal\n3. View animals.\n4. Shutdown.\n";
		cin >> userinput;
		try {
			decision = stoi(userinput);
		}
		catch (...)
		{
			Run();
		}

		switch (decision) 
		{
		case 1:
			cout << "1";
			break;
		case 2:
			cout << "2";
			break;
		case 3:
			cout << "3";
			break;
		case 4:
			cout << "4";
			break;
		}

		/*if (decision == 1)
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
		}*/
	};
}