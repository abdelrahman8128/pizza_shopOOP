#include <iostream>
using namespace std;
#include "Pizza.h"


class CheesePizza : public Pizza
{
protected:
	const char* PizzaType()
	{
		return "Cheese";
	}
};

void main()
{
	cout << "Enter pizza choice. 1 for Chicken, 2 for Beef, 3 for cheese: ";
	int choice;
	cin >> choice;

	Pizza* pizza = NULL;
	if (choice == 1)
	{
		pizza = new ChickenPizza;
	}
	else if (choice == 2)
	{
		pizza = new BeefPizza;
	}
	else if (choice == 3)
	{
		pizza = new CheesePizza;
	}
	else
	{
		cout << "Error!" << endl;
	}

	if (pizza)
	{
		pizza->MakePizza();
		delete pizza;
	}
}