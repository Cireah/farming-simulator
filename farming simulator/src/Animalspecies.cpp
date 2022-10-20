#include "Includes.h"
#include "Animalspecies.h"
#include "Cow.h"
#include "Sheep.h"
#include "Pig.h"
#include "Farmer.h"

void Animalspecies::Buy()
{
	Farmer budget;
	while (true)
	{
		cout << "What animal do you want to buy?\n1. Cow\n2. Sheep\n3. Pig\n4. Back\n";
		cin >> userinput;
		try {
			decision = stoi(userinput);
		}
		catch (...)
		{
			Buy();
		}

		if (decision == 1)
		{
			cout << budget.GetMoney() << "\n";
			Cow myCow;
			myCow.Animalprice();
			budget.SetMoney(budget.GetMoney() - 500);
			cout << budget.GetMoney() << "\n";
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

void Animalspecies::Sell()
{

}

void Animalspecies::View()
{

}

void Animalspecies::Animalprice()
{
	cout << "0 kr\n";
}