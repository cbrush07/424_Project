#include "VendingMachineSim.h"


void VendingMachine::restock()
{
	this->A1.Name = " Tea  ";
	this->A1.Cost = 2.00;
	this->A1.Cost4Org = "$2.00";
	this->A1.Flavor = "Sweet";


	this->A2.Name = "  Doritos  ";
	this->A2.Cost = 2.00;
	this->A2.Cost4Org = "$2.00";
	this->A2.Flavor = "Cool Ranch";


	this->A3.Name = " Cheetos ";
	this->A3.Cost = 2.00;
	this->A3.Cost4Org = "$2.00";
	this->A3.Flavor = "Flaming Hot";


	this->B1.Name = " Lays ";
	this->B1.Cost = 1.75;
	this->B1.Cost4Org = "$1.75";
	this->B1.Flavor = "Regular";


	this->B2.Name = " Cheez-Itz ";
	this->B2.Cost = 1.75;
	this->B2.Cost4Org = "$1.75";
	this->B2.Flavor = "Regular";


	this->B3.Name = " Popcorn ";
	this->B3.Cost = 1.75;
	this->B3.Cost4Org = "$1.75";
	this->B3.Flavor = "Smart-Food";


	this->C1.Name = " Coke ";
	this->C1.Cost = 1.50;
	this->C1.Cost4Org = "$1.50";
	this->C1.Flavor = "Original";


	this->C2.Name = "  Sprite   ";
	this->C2.Cost = 1.50;
	this->C2.Cost4Org = "$1.50";
	this->C2.Flavor = "Original";


	this->C3.Name = "Diet Coke";
	this->C3.Cost = 1.50;
	this->C3.Cost4Org = "$1.50";
	this->C3.Flavor = "Original";


	this->D1.Name = "Fritos";
	this->D1.Cost = 1.25;
	this->D1.Cost4Org = "$1.25";
	this->D1.Flavor = "Original";


	this->D2.Name = "  Reese's  ";
	this->D2.Cost = 1.25;
	this->D2.Cost4Org = "$1.25";
	this->D2.Flavor = "Original";


	this->D3.Name = "Hershey's";
	this->D3.Cost = 1.25;
	this->D3.Cost4Org = "$1.25";
	this->D3.Flavor = "Milk Chocolate";


	this->E1.Name = "Water ";
	this->E1.Cost = 1.00;
	this->E1.Cost4Org = "$1.00";
	this->E1.Flavor = "None";


	this->E2.Name = "Granola Bar";
	this->E2.Cost = 1.00;
	this->E2.Cost4Org = "$1.00";
	this->E2.Flavor = "Chocolate Chip";


	this->E3.Name = " M & M's ";
	this->E3.Cost = 1.00;
	this->E3.Cost4Org = "$1.00";
	this->E3.Flavor = "Milk Chocolate";

	this->v[0][0] = " ";
	this->v[1][0] = "A";
	this->v[2][0] = "B";
	this->v[3][0] = "C";
	this->v[4][0] = "D";
	this->v[5][0] = "E";

}

double VendingMachine::moneyCalc(string loc, double money)
{
	double add; // creating an empty variable to add yo our inserted money value later
	double change = 0; // creating an empty double for the change
	
	if (loc == "A1")
	{
		while (money < A1.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - A1.Cost; // returns the change to the user
	}
	else if (loc == "A2")
	{
		while (money < A2.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - A2.Cost; // returns the change to the user
	}
	else if (loc == "A3")
	{
		while (money < A3.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - A3.Cost; // returns the change to the user
	}
	else if (loc == "B1")
	{
		while (money < B1.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - B1.Cost; // returns the change to the user
	}
	else if (loc == "B2")
	{
		while (money < B2.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - B2.Cost; // returns the change to the user
	}
	else if (loc == "B3")
	{
		while (money < B3.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - B3.Cost; // returns the change to the user
	}
	else if (loc == "C1")
	{
		while (money < C1.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - C1.Cost; // returns the change to the user
	}
	else if (loc == "C2")
	{
		while (money < C2.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - C2.Cost; // returns the change to the user
	}
	else if (loc == "C3")
	{
		while (money < C3.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - C3.Cost; // returns the change to the user
	}
	else if (loc == "D1")
	{
		while (money < D1.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - D1.Cost; // returns the change to the user
	}
	else if (loc == "D2")
	{
		while (money < D2.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - D2.Cost; // returns the change to the user
	}
	else if (loc == "D3")
	{
		while (money < D3.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - D3.Cost; // returns the change to the user
	}
	else if (loc == "E1")
	{
		while (money < E1.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - E1.Cost; // returns the change to the user
	}
	else if (loc == "E2")
	{
		while (money < E2.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - E2.Cost; // returns the change to the user
	}
	else if (loc == "E3")
	{
		while (money < E3.Cost) // while the value of money is less than the cost of the item
		{
			cout << "Please insert more money: "; // we are adding aditional money
			cin >> add;
			money = money + add; // and reseting money to the new value of all money inserted so far
		}
		change = money - E3.Cost; // returns the change to the user
	}

	return change;
}

bool VendingMachine::keepRunning(string again)
{
	bool run = true;
	do
	{
		if (again == "Y")
			run = true;
		else if (again == "N")
			run = false;  // if the bool check is false the do/while loop is cut 
		else 
		{
			cout << "\nUh oh, something went wrong. would you like to order another item? (Y/N): ";
			cin >> again;
		}
	} while (again != "Y" && again != "N");
	
	return run;
}


void VendingMachine:: interface()
{

	string Location;  // creating a string of our location 
	double money;  // creating a holder for the money required by the vending machine
	string again;

	bool check = true;
	cout << "Welcome to the vending Machine! Please select the snack you would like: ";
	cin >> Location; // assigning the input as the location 
	do
	{
		if (Location == "A1")
		{

			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value
			
			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << A1.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}

		// from here on everything is the same as the above example, just a new location.
		else if (Location == "A2")
		{
			cout << "Please insert money: ";
			cin >> money;

			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << A2.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}
		else if (Location == "A3")
		{
			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value

			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << A3.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}
		else if (Location == "B1")
		{
			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value

			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << B1.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}
		else if (Location == "B2")
		{
			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value

			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << B2.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}
		else if (Location == "B3")
		{
			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value

			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << B3.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}
		else if (Location == "C1")
		{
			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value

			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << C1.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}
		else if (Location == "C2")
		{
			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value

			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << C2.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}
		else if (Location == "C3")
		{
			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value

			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << C3.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}
		else if (Location == "D1")
		{
			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value

			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << D1.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}
		else if (Location == "D2")
		{
			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value

			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << A1.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}
		else if (Location == "D3")
		{
			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value

			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << D3.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}
		else if (Location == "E1")
		{
			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value

			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << E1.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}
		else if (Location == "E2")
		{
			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value

			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << E2.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}
		else if (Location == "E3")
		{
			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value

			double change = moneyCalc(Location, money);

			cout << "Here is your change: " << to_string(change) << " Enjoy your " << E3.Name << endl;
			cout << "Would you like to order another item? (Y/N): ";
			cin >> again;
			check = keepRunning(again);
		}
		else  // if the input isn't the location of anything, it is requiring a re-entry
		{
			cout << "\nThis input is Invalid :( .Please type in a character (A-E) followed by a number (1-3): ";
			cin >> Location; // reasigning the string location
		}

		if (check)
		{
			money = 0;
			cout << "Welcome to the vending Machine! Please select the snack you would like: ";
			cin >> Location;
		}

	} while (check); // allows the if, if else, else to repeat until the input is correct. 
};


ostream& operator<<(ostream& os, VendingMachine vm)
{
	vm.v[0][1] = "     1      ";
	vm.v[0][2] = "       2         ";
	vm.v[0][3] = "      3        ";
	vm.v[1][1] = vm.A1.Name + " " + vm.A1.Cost4Org;
	vm.v[1][2] = vm.A2.Name + " " + vm.A2.Cost4Org;
	vm.v[1][3] = vm.A3.Name + " " + vm.A3.Cost4Org;
	vm.v[2][1] = vm.B1.Name + " " + vm.B1.Cost4Org;
	vm.v[2][2] = vm.B2.Name + " " + vm.B2.Cost4Org;
	vm.v[2][3] = vm.B3.Name + " " + vm.B3.Cost4Org;
	vm.v[3][1] = vm.C1.Name + " " + vm.C1.Cost4Org;
	vm.v[3][2] = vm.C2.Name + " " + vm.C2.Cost4Org;
	vm.v[3][3] = vm.C3.Name + " " + vm.C3.Cost4Org;
	vm.v[4][1] = vm.D1.Name + " " + vm.D1.Cost4Org;
	vm.v[4][2] = vm.D2.Name + " " + vm.D2.Cost4Org;
	vm.v[4][3] = vm.D3.Name + " " + vm.D3.Cost4Org;
	vm.v[5][1] = vm.E1.Name + " " + vm.E1.Cost4Org;
	vm.v[5][2] = vm.E2.Name + " " + vm.E2.Cost4Org;
	vm.v[5][3] = vm.E3.Name + " " + vm.E3.Cost4Org;
	os << "----------------------------------------------------------\n";
	for (int i = 0; i < 6; i++)
	{
		os << "| ";
		for (int j = 0; j < 4; j++)
		{
			os << vm.v[i][j];
			os << " | ";
		}

		os << "\n----------------------------------------------------------\n" << endl;
	}
	return os;
}

