#include "Includes.h"
#include "Cow.h"
#include "Sheep.h"
#include "Pig.h"
#include "Farmer.h"

void Animalspecies::Buy(int &money)
{
	while (true)
	{
		std::cout << "What animal do you want to buy?\n1. Cow\n2. Sheep\n3. Pig\n4. Back\n";
		std::cin >> userinput;
		try {
			decision = std::stoi(userinput);
		}
		catch (...)
		{
			Buy(money);
		}

		if (decision == 1)
		{
			std::cout << money << "\n";
			Cow myCow;
			myCow.Animalprice();
			money = money - 500;
			std::cout << money << "\n";
		}
		else if (decision == 2)
		{
			Sheep mySheep;
			mySheep.Animalprice();
		}
		else if (decision == 3)
		{
			Pig myPig;
			myPig.Animalprice();
		}
		else if (decision == 4)
		{
			break;
		}
	};
}

void Animalspecies::Sell(int &money)
{

}

void Animalspecies::View()
{

}

void Animalspecies::Animalprice()
{
	std::cout << "0 kr\n";
}