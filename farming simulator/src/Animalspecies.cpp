#include "Includes.h"
#include "Cow.h"
#include "Sheep.h"
#include "Pig.h"
#include "Farmer.h"

void Animalspecies::Buy(int &money)
{
	cow = 1;
	sheep = 1;
	pig = 1;
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
			Cow myCow;
			myCow.Animalprice();
			std::cout << money << "\n";
			money = money - myCow.Animalprice();
			std::cout << money << "\n";
			myCow.SetCows(myCow.GetCows() + cow);
			std::cout << myCow.GetCows() << "\n";
			cow++;
		}
		else if (decision == 2)
		{
			Sheep mySheep;
			mySheep.Animalprice();
			std::cout << money << "\n";
			money = money - mySheep.Animalprice();
			std::cout << money << "\n";
			mySheep.SetSheep(mySheep.GetSheep() + sheep);
			std::cout << mySheep.GetSheep() << "\n";
			sheep++;
		}
		else if (decision == 3)
		{
			Pig myPig;
			myPig.Animalprice();
			std::cout << money << "\n";
			money = money - myPig.Animalprice();
			std::cout << money << "\n";
			myPig.SetPigs(myPig.GetPig() + pig);
			std::cout << myPig.GetPig() << "\n";
			pig++;
		}
		else if (decision == 4)
		{
			break;
		}
	};
}

void Animalspecies::Sell(int &money)
{
	cow = 1;
	sheep = 1;
	pig = 1;
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

		if (decision == 1)
		{
			Cow myCow;
			std::cout << myCow.GetCows();
			myCow.Animalprice();
			std::cout << money << "\n";
			money = money + myCow.Animalprice();
			std::cout << money << "\n";
			myCow.SetCows(myCow.GetCows() - cow);
			std::cout << myCow.GetCows() << "\n";
			cow++;
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

void Animalspecies::View()
{
	Cow myCow;
	Sheep mySheep;
	Pig myPig;
	std::cout << "You have:\n";
}

int Animalspecies::Animalprice()
{
	price = 0;
	return price;
}