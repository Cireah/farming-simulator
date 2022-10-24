#include "Includes.h"
#include "Farmer.h";

void Farmer::Run()
{
	std::cout << GetMoney() << "\n";
	Animalspecies animalspecies;
	while (true)
	{
		std::cout << "Welcome to your farm! You have a budget of " << GetMoney() << " kr!\n";
		std::cout << "1. Buy animal\n2. Sell animal\n3. View animals.\n4. Shutdown.\n";
		std::cin >> userinput;
		try {
			decision = std::stoi(userinput);
		}
		catch (...)
		{
			Run();
		}

		if (decision == 1)
		{
			animalspecies.Buy(money);
		}
		else if (decision == 2)
		{
			animalspecies.Sell(money);
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