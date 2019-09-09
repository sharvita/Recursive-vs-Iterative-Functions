#include <iostream>
#include "Animal.h"
#include <fstream>
using namespace std;

int main()
{

	ifstream dogFile("Dog.csv");
	Dog dog;
	dog.read(dogFile);
	dog.subtract10();
	dog.print();
	cout << endl << endl;

	ifstream fishFile("Fish.csv");
	Fish fish;
	fish.read(fishFile);
	fish.print();
	cout << endl << endl;

	ifstream horseFile("Horse.csv");
	Horse horse;
	horse.read(horseFile);
	horse.addOneHand();
	horse.print();
	cout << endl << endl;

	ifstream monkeyFile("Monkey.csv");
	Monkey monkey;
	monkey.read(monkeyFile);
	monkey.changeEndangered();
	monkey.print();
	cout << endl << endl;

	ifstream lizardFile("Lizard.csv");
	Lizard lizard;
	lizard.read(lizardFile);
	lizard.print();
	cout << endl << endl;


	//system("pause");
	return 0;

}