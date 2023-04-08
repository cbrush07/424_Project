#pragma once
#include <iostream>
#include <map>
#include <array>
#include <vector>
#include <string>
#include <utility>
#include <set>
#include <algorithm>
#include "Classes.h"

using namespace std;

#define VendingMachine array<array<string, 4>, 6 >

// This class deines the Vending Machine object used in this program
class MyClass {

public:
	void create_snacks();
	void print_vendingmachine(VendingMachine v);

private:
	Drink A1, C1, C2, C3, E1;
	Snack A2, A3, B1, B2, B3, D1, D2, D3, E2, E3;
};

// This function defines each cell in the Vending Machine and
// defines a name, cost, price amount, and flavor for each snack and drink
void MyClass::create_snacks()
{
	
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

// This function gets passed the Vending Machine object and
// outputs the contents and price of objects within the Vending Machine
void MyClass::print_vendingmachine(VendingMachine v)
{
	v[0][0] = " ";
	v[1][0] = "A";
	v[2][0] = "B";
	v[3][0] = "C";
	v[4][0] = "D";
	v[5][0] = "E";
	v[0][1] = "     1      ";
	v[0][2] = "       2         ";
	v[0][3] = "      3        ";
	v[1][1] = A1.Name + " " + A1.Cost4Org;
    v[1][2] = A2.Name + " " + A2.Cost4Org;
    v[1][3] = A3.Name + " " + A3.Cost4Org;
    v[2][1] = B1.Name + " " + B1.Cost4Org;
    v[2][2] = B2.Name + " " + B2.Cost4Org;
    v[2][3] = B3.Name + " " + B3.Cost4Org;
    v[3][1] = C1.Name + " " + C1.Cost4Org;
	v[3][2] = C2.Name + " " + C2.Cost4Org;
    v[3][3] = C3.Name + " " + C3.Cost4Org;
    v[4][1] = D1.Name + " " + D1.Cost4Org;
    v[4][2] = D2.Name + " " + D2.Cost4Org;
    v[4][3] = D3.Name + " " + D3.Cost4Org;
    v[5][1] = E1.Name + " " + E1.Cost4Org;
    v[5][2] = E2.Name + " " + E2.Cost4Org;
    v[5][3] = E3.Name + " " + E3.Cost4Org;
    cout << "----------------------------------------------------------" << endl;
    for ( int i = 0; i < 6; i++)
    {
        cout << "| ";
        for ( int j = 0; j < 4; j++)
        {
			cout << v[i][j];
            cout << " | ";
        }
		
        cout << endl << "----------------------------------------------------------" << endl;
    }
}

