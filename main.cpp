
#include "VendingMachineSim.h"
#include "Inventory.h"
#include <iostream>
#include <array>
#include <string>

int main()
{
	VendingMachine vm;
	vm.restock();

	cout << vm;
	string input;

	while (vm.on)
	{
		cout << "Welcome to the vending Machine! Please select the snack you would like: ";
		cin >> input;

		while (!vm.isValid(input))
			cin >> input;

		if (input[0] == 'A' || input[0] == 'B' || input[0] == 'C')
		{
			Snack item = vm.get_item<Snack>(input);
			cout << "You have purchased " << item.Name << " for " << item.Cost4Org << "." << endl;
		}
		else if (input[0] == 'D' || input[0] == 'E' || input[0] == 'F')
		{
			Drink item = vm.get_item<Drink>(input);
			cout << "You have purchased " << item.Name << " for " << item.Cost4Org << "." << endl;
		}



		return 1;
	}

	return 0;

}