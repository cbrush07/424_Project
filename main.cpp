
#include "VendingMachineSim.h"
#include <iostream>
#include <array>
#include <string>
#include <any>

int main()
{
	VendingMachine vm;
	vm.restock();
	cout << vm;

	vm.interface();

	return 0;

}