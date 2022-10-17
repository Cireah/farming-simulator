#include "Includes.h"
#include "Animalspecies.h"

void Animalspecies::Buy()
{
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
		}
		else if (decision == 2)
		{
		}
		else if (decision == 3)
		{
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