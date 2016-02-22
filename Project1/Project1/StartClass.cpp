#include "StartClass.h"
#include <iostream>



StartClass::StartClass()
{
	int user_input;
	std::cout << "Enter 1 to make sure this works ";
	std::cin >> user_input;
}


StartClass::~StartClass()
{
}

int main() {
	StartClass();
	return 0;

}