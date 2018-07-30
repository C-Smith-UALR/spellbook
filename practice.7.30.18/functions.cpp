#include<iostream>
#include "functions.h"




bool userInput(int& choice, std::string* spells) {
	char userSelector;
	std::cout << "Current spell is: " << spells[choice];
	std::cout << "\nEnter 'n' for next spell";
	std::cout << "\nEnter 's' to stay on current spell";
	std::cout << "\nAny other key to quit";
	std::cin >> userSelector;
	if (userSelector != 'n' && userSelector != 's') {
		return false;
	}

	if (userSelector == 'n' && choice <2) {
		++choice;
	}
	else {
		choice = 0;
	}


	return true;

}