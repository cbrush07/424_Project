#pragma once
#include <iostream>
#include <map>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <utility>
#include <set>
#include <algorithm>
#include "Classes.h"

using namespace std;

#define VendingMachine array<array<string, 4>, 6 >

// Creates a class to call the functions and store the classes created by "create_snacks"
class MyClass 
{
public:
	void create_snacks();
	void print_vendingmachine(VendingMachine v);
	void interface();
private:
	Drink A1, C1, C2, C3, E1;
	Snack A2, A3, B1, B2, B3, D1, D2, D3, E2, E3;
};

// Creates all the classes in the vending machine
void MyClass::create_snacks()
{
	// Goes through and simply assigns all of the diffrent classes desired attributes
	this-> A1.Name = " Tea  ";
	this-> A1.Cost = 2.00;
	this-> A1.Cost4Org = "$2.00";
	this-> A1.Flavor = "Sweet";

	
	this-> A2.Name = "  Doritos  ";
	this-> A2.Cost = 2.00;
	this-> A2.Cost4Org = "$2.00";
	this-> A2.Flavor = "Cool Ranch";

	
	this-> A3.Name = " Cheetos ";
	this-> A3.Cost = 2.00;
	this-> A3.Cost4Org = "$2.00";
	this-> A3.Flavor = "Flaming Hot";

	
	this-> B1.Name = " Lays ";
	this-> B1.Cost = 1.75;
	this-> B1.Cost4Org = "$1.75";
	this-> B1.Flavor = "Regular";

	
	this-> B2.Name = " Cheez-Itz ";
	this-> B2.Cost = 1.75;
	this-> B2.Cost4Org = "$1.75";
	this-> B2.Flavor = "Regular";

	
	this-> B3.Name = " Popcorn ";
	this-> B3.Cost = 1.75;
	this-> B3.Cost4Org = "$1.75";
	this-> B3.Flavor = "Smart-Food";

	
	this-> C1.Name = " Coke ";
	this-> C1.Cost = 1.50;
	this-> C1.Cost4Org = "$1.50";
	this-> C1.Flavor = "Original";

	
	this-> C2.Name = "  Sprite   ";
	this-> C2.Cost = 1.50;
	this-> C2.Cost4Org = "$1.50";
	this-> C2.Flavor = "Original";

	
	this-> C3.Name = "Diet Coke";
	this-> C3.Cost = 1.50;
	this-> C3.Cost4Org = "$1.50";
	this-> C3.Flavor = "Original";

	
	this-> D1.Name = "Fritos";
	this-> D1.Cost = 1.25;
	this-> D1.Cost4Org = "$1.25";
	this-> D1.Flavor = "Original";

	
	this-> D2.Name = "  Reese's  ";
	this-> D2.Cost = 1.25;
	this-> D2.Cost4Org = "$1.25";
	this-> D2.Flavor = "Original";

	
	this-> D3.Name = "Hershey's";
	this-> D3.Cost = 1.25;
	this-> D3.Cost4Org = "$1.25";
	this-> D3.Flavor = "Milk Chocolate";

	
	this-> E1.Name = "Water ";
	this-> E1.Cost = 1.00;
	this-> E1.Cost4Org = "$1.00";
	this-> E1.Flavor = "None";

	
	this-> E2.Name = "Granola Bar";
	this-> E2.Cost = 1.00;
	this-> E2.Cost4Org = "$1.00";
	this-> E2.Flavor = "Chocolate Chip";

	
	this-> E3.Name = " M & M's ";
	this-> E3.Cost = 1.00;
	this-> E3.Cost4Org = "$1.00";
	this-> E3.Flavor = "Milk Chocolate";
};

// Prints the grid of teh vending machine
void MyClass::print_vendingmachine(VendingMachine v)
{
	v[0][0] = " "; // creating an empty slot for the top left
	v[1][0] = "A"; // creating the titles of the different rows
	v[2][0] = "B";
	v[3][0] = "C";
	v[4][0] = "D";
	v[5][0] = "E";
	v[0][1] = "     1      ";
	v[0][2] = "       2         "; // creating the titles of the different columns
	v[0][3] = "      3        ";
	v[1][1] = A1.Name + " " + A1.Cost4Org;
    v[1][2] = A2.Name + " " + A2.Cost4Org;
    v[1][3] = A3.Name + " " + A3.Cost4Org;
    v[2][1] = B1.Name + " " + B1.Cost4Org;
    v[2][2] = B2.Name + " " + B2.Cost4Org;
    v[2][3] = B3.Name + " " + B3.Cost4Org;
    v[3][1] = C1.Name + " " + C1.Cost4Org;  // all of these are asigning the different spots in the vending machine with the proper
	v[3][2] = C2.Name + " " + C2.Cost4Org;  // name and cost of each snack/drink
    v[3][3] = C3.Name + " " + C3.Cost4Org;
    v[4][1] = D1.Name + " " + D1.Cost4Org;
    v[4][2] = D2.Name + " " + D2.Cost4Org;
    v[4][3] = D3.Name + " " + D3.Cost4Org;
    v[5][1] = E1.Name + " " + E1.Cost4Org;
    v[5][2] = E2.Name + " " + E2.Cost4Org;
    v[5][3] = E3.Name + " " + E3.Cost4Org;
    cout << "----------------------------------------------------------" << endl; // prints the top line for grid
    for ( int i = 0; i < 6; i++)
    {
        cout << "| ";
        for ( int j = 0; j < 4; j++)  // loops through each location printing out the name and cose assigned above
        {
			cout << v[i][j];
            cout << " | ";
        }
		
        cout << endl << "----------------------------------------------------------" << endl; // prints out the next horizonatal line for the next grid row
    }
}

// The interface of the vending machine
void MyClass::interface()
{
	bool check = true;  // creating a boolean so we can rerun our if if else code if it makes it to the end 
	string Location;  // creating a string of our location 
	double money;  // creating a holder for the money required by the vending machine
	double add;   // creating an empty variable to add yo our inserted money value later
	double change;  // creating an empty double for the change
	cout << "Please enter your snack location (example D3): ";
	cin >> Location; // assigning the input as the location 
	do
	{
		if (Location == "A1")
		{
			cout << "Please insert money: ";
			cin >> money; // if A1 is the input, their inserted money becomes the original value
			while (money < A1.Cost) // while the value of money is less than the cost of the item
			{
				cout << "Please insert more money: "; // we are adding aditional money
				cin >> add;
				money = money + add; // and reseting money to the new value of all money inserted so far
			}
			change = money - A1.Cost; // returns the change to the user
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << A1.Name << endl;
			check = false;  // if the bool check is false the do/while loop is cut 
		}

		// from here on everything is the same as the above example, just a new location.
		else if (Location == "A2")
		{
			cout << "Please insert money: ";
			cin >> money;
			while (money < A2.Cost)
			{
				cout << "Please insert more money: ";
				cin >> add;
				money = money + add;
			}
			change = money - A2.Cost;
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << A2.Name << endl;
			check = false;
		}
		else if (Location == "A3")
		{
			cout << "Please insert money: ";
			cin >> money;
			while (money < A3.Cost)
			{
				cout << "Please insert more money: ";
				cin >> add;
				money = money + add;
			}
			change = money - A3.Cost;
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << A3.Name << endl;
			check = false;
		}
		else if (Location == "B1")
		{
			cout << "Please insert money: ";
			cin >> money;
			while (money < B1.Cost)
			{
				cout << "Please insert more money: ";
				cin >> add;
				money = money + add;
			}
			change = money - B1.Cost;
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << B1.Name << endl;
			check = false;
		}
		else if (Location == "B2")
		{
			cout << "Please insert money: ";
			cin >> money;
			while (money < B2.Cost)
			{
				cout << "Please insert more money: ";
				cin >> add;
				money = money + add;
			}
			change = money - B2.Cost;
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << B2.Name << endl;
			check = false;
		}
		else if (Location == "B3")
		{
			cout << "Please insert money: ";
			cin >> money;
			while (money < B3.Cost)
			{
				cout << "Please insert more money: ";
				cin >> add;
				money = money + add;
			}
			change = money - B3.Cost;
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << B3.Name << endl;
			check = false;
		}
		else if (Location == "C1")
		{
			cout << "Please insert money: ";
			cin >> money;
			while (money < C1.Cost)
			{
				cout << "Please insert more money: ";
				cin >> add;
				money = money + add;
			}
			change = money - C1.Cost;
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << C1.Name << endl;
			check = false;
		}
		else if (Location == "C2")
		{
			cout << "Please insert money: ";
			cin >> money;
			while (money < C2.Cost)
			{
				cout << "Please insert more money: ";
				cin >> add;
				money = money + add;
			}
			change = money - C2.Cost;
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << C2.Name << endl;
			check = false;
		}
		else if (Location == "C3")
		{
			cout << "Please insert money: ";
			cin >> money;
			while (money < C3.Cost)
			{
				cout << "Please insert more money: ";
				cin >> add;
				money = money + add;
			}
			change = money - C3.Cost;
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << C3.Name << endl;
			check = false;
		}
		else if (Location == "D1")
		{
			cout << "Please insert money: ";
			cin >> money;
			while (money < D1.Cost)
			{
				cout << "Please insert more money: ";
				cin >> add;
				money = money + add;
			}
			change = money - D1.Cost;
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << D1.Name << endl;
			check = false;
		}
		else if (Location == "D2")
		{
			cout << "Please insert money: ";
			cin >> money;
			while (money < D2.Cost)
			{
				cout << "Please insert more money: ";
				cin >> add;
				money = money + add;
			}
			change = money - D2.Cost;
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << D2.Name << endl;
			check = false;
		}
		else if (Location == "D3")
		{
			cout << "Please insert money: ";
			cin >> money;
			while (money < D3.Cost)
			{
				cout << "Please insert more money: ";
				cin >> add;
				money = money + add;
			}
			change = money - D3.Cost;
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << D3.Name << endl;
			check = false;
		}
		else if (Location == "E1")
		{
			cout << "Please insert money: ";
			cin >> money;
			while (money < E1.Cost)
			{
				cout << "Please insert more money: ";
				cin >> add;
				money = money + add;
			}
			change = money - E1.Cost;
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << E1.Name << endl;
			check = false;
		}
		else if (Location == "E2")
		{
			cout << "Please insert money: ";
			cin >> money;
			while (money < E2.Cost)
			{
				cout << "Please insert more money: ";
				cin >> add;
				money = money + add;
			}
			change = money - E2.Cost;
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << E2.Name << endl;
			check = false;
		}
		else if (Location == "C1")
		{
			cout << "Please insert money: ";
			cin >> money;
			while (money < E3.Cost)
			{
				cout << "Please insert more money: ";
				cin >> add;
				money = money + add;
			}
			change = money - E3.Cost;
			cout << "Here is your change: " << to_string(change) << " Enjoy your " << E3.Name << endl;
			check = false;
		}
		else  // if the input isn't the location of anything, it is requiring a re-entry
		{
			cout << "Please Re-Enter the location of your snack: ";
			cin >> Location; // reasigning the string location
		}
	}
	while (check); // allows the if, if else, else to repeat until the input is correct. 
};