#pragma once
#include <iostream>
#include <string>
#include <array>
using namespace std;

#define VendingMachineGrid array<array<string, 4>, 6 >

// This struct defines the snacks to be stored in the vending machine
// giving each a name, cost, cost in dollars, and flavor
struct Snack
{
public:

	string Name;
	double Cost;
	string Cost4Org;
	string Flavor;

};

// This struct defines the snacks to be stored in the vending machine
// giving each a name, cost, cost in dollars, and flavor
struct Drink
{
public:

	string Name;
	double Cost;
	string Cost4Org;
	string Flavor;
};

class VendingMachine
{
public:

	void restock();
	void interface();
	double moneyCalc(string loc, double money);
	bool keepRunning(string again);

	friend ostream& operator<<(ostream& os, VendingMachine vm);

protected:
	VendingMachineGrid v;

	Drink A1, C1, C2, C3, E1;
	Snack A2, A3, B1, B2, B3, D1, D2, D3, E2, E3;

};


