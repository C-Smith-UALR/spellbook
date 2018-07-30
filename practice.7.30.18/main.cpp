#include<iostream>
#include "functions.h"
#include<string>

using namespace std;

int main() {

	const int N = 3;
	string* spells = new string[N];
	*spells[0] = "invisible";
	spells[1] = "levitate";
	spells[2] = "disarm";
	int choice = 0;

	std::cout << *spells[0];

	/*while (userInput(choice, spells)) {

	std::cout << "one loop cycle";
	}*/








	system("PAUSE");
	delete spells;

	return 0;

}