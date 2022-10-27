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

		if (decision == 1 && money >= 500)
		{
			Cow myCow;
			myCow.SetCow(500);
			std::cout << "The cow costs " << myCow.GetCow() << " kr. You have " << money << " kr.\n";
			money = money - myCow.GetCow();
			std::cout << "You have " << money << " kr left.\n";
			cow++;
		}
		else if (decision == 2 && money >= 200)
		{
			Sheep mySheep;
			mySheep.SetSheep(200);
			std::cout << "The sheep costs " << mySheep.GetSheep() << " kr. You have " << money << " kr.\n";
			money = money - mySheep.GetSheep();
			std::cout << "You have " << money << " kr left.\n";
			sheep++;
		}
		else if (decision == 3 && money >= 100)
		{
			Pig myPig;
			myPig.SetPig(100);
			std::cout << "The pig costs " << myPig.GetPig() << " kr. You have " << money << " kr.\n";
			money = money - myPig.GetPig();
			std::cout << "You have " << money << " kr left.\n";
			pig++;
		}
		else if (decision == 4)
		{
			break;
		}
		else
		{
			std::cout << "Not enough money.\n";
		}
	};
}

void Animalspecies::Sell(int &money)
{
	while (true)
	{
		std::cout << "What animal do you want to sell?\n1. Cow\n2. Sheep\n3. Pig\n4. Back\n";
		std::cin >> userinput;
		try {
			decision = std::stoi(userinput);
		}
		catch (...)
		{
			Buy(money);
		}

		if (decision == 1 && cow > 0)
		{
			Cow myCow;
			myCow.SetCow(375);
			std::cout << "The cow sells for " << myCow.GetCow() << " kr.\n";
			money = money + myCow.GetCow();
			std::cout << "You have " << money << " kr now.\n";
			cow--;
		}
		else if (decision == 2 && sheep > 0)
		{
			Sheep mySheep;
			mySheep.SetSheep(150);
			std::cout << "The sheep sells for " << mySheep.GetSheep() << " kr.\n";
			money = money + mySheep.GetSheep();
			std::cout << "You have " << money << " kr now.\n";
			sheep--;
		}
		else if (decision == 3 && pig > 0)
		{
			Pig myPig;
			myPig.SetPig(75);
			std::cout << "The pig sells for " << myPig.GetPig() << " kr.\n";
			money = money + myPig.GetPig();
			std::cout << "You have " << money << " kr now.\n";
			pig--;
		}
		else if (decision == 4)
		{
			break;
		}
		else
		{
			std::cout << "You don't have an animal to sell.\n";
		}
	};
}

void Animalspecies::View()
{
	Cow myCow;
	Sheep mySheep;
	Pig myPig;
	std::cout << "You have:\n";
	std::cout << cow << " "; myCow.AnimalColour(); std::cout << " cow(s)\n";
	std::cout << sheep << " "; mySheep.AnimalColour(); std::cout << " sheep\n";
	std::cout << pig << " "; myPig.AnimalColour(); std::cout <<  " pig(s)\n";
}

void Animalspecies::AnimalColour()
{
	colour = "undefined";
	std::cout << colour;
}