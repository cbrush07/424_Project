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

	on == true;
}

bool VendingMachine::isValid(string in)
{
	if (in == "A1" || in == "A2" || in == "A3" || in == "B1" || in == "B2" || in == "B3"
		|| in == "C1" || in == "C2" || in == "C3" || in == "D1" || in == "D2" || in == "D3"
		|| in == "E1" || in == "E2" || in == "E3")
		return true;
	else
	{
		cout << "This input is Invalid :( .\nPlease type in a character (A-E) followed by a number (1-3)\n";
		return false;
	}
}

template<typename T>
inline T VendingMachine::get_item(string in)
{

	T item;
	item.Name = v[row][col];
	item.Cost = (row < 3) ? 1.25 : 1.50;
	item.Cost4Org = (row < 3) ? "$1.25" : "$1.50";

	return item;
}

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

