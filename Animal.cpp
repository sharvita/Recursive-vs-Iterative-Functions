#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>      // std::invalid_argument
#include <locale> 
#include <algorithm>
using namespace std;
#include "Animal.h"

Animal::Animal() {
	name = "unknown";
	color = "unknown";
}
Animal::Animal(string strName, string strColor) {
	name = strName;
	color = strColor;
}

void Animal::setName(string strName) {
	name = strName;
}
void Animal::setColor(string strColor) {
	color = strColor;
}
string Animal::getName() {
	return name;
}
string Animal::getColor() {
	return color;
}

void Animal::print() {
	
}
void Animal :: read(ifstream &myFile) {
}

//*************************************************  D O G *****************************************************//
//constructors
Dog:: Dog() : Animal() {
	breed = "unknown";
	age = 0.0;
	weight = 0.0;
}

Dog::Dog(string strName, string strBreed, float tempAge, string strColor, float tempWeight) : Animal(strName, strColor) {
	breed = strBreed;
	age = tempAge;
	weight = tempWeight;
}

//setters
void Dog::setBreed(string strBreed) {
	breed = strBreed;
}
void Dog::setAge(float tempAge) {
	age = tempAge;
}
void Dog::setWeight(float tempWeight) {
	weight = tempWeight;
}

//getters
float Dog::getAge() {
	return age;
}
float Dog::getWeight() {
	return weight;
}
string Dog::getBreed() {
	return breed;
}


//other function 
void Dog::print() {

	cout << "The name of the dog is " << name << endl;
	cout << "The body color of the dog is " << color << endl;
	cout << "The weight of the dog is " << weight << endl;
	cout << "The breed of the dog is " << breed << endl;
	cout << "The age of the dog is " << age << endl;
}


void Dog::subtract10() {
	weight = weight - 10;
}

void Dog::read(ifstream &myFile) {

	if (myFile.fail()) {
		cout << "File is not found" << endl << endl;
	}
	else {

		string temp;
		getline(myFile, name, ',');

		getline(myFile, breed, ',');
		try {
			//getline(myFile, temp, ',');
			//age = stof(temp);
			myFile >> age;
			throw invalid_argument("");
		}
		catch (const invalid_argument& ia) {
			if (age == 0)
			cerr << "The age is invalid. It will be set to 0.Sorry." << endl << endl;
		}
		getline(myFile, color, ',');

		try {
			//getline(myFile, temp, ',');
			//weight = stof(temp);
			myFile >> weight;
			throw invalid_argument("");
		}
		catch (const invalid_argument& ia) {
			if(weight == 0)
			cerr << "The weight is invalid. It will be set to 0.Sorry." << endl << endl;
		}
	}
}

//******************************************************  F I S H  ****************************************************//

Fish::Fish() {
	isFreshWater = false;
	habitat = "unknown";
	isPredator = false;
}
Fish::Fish(string tempName, string tempColor, bool tempfreshWater, string tempHabitat, bool tempIsPredator) : Animal(tempName, tempColor) {
	isFreshWater = tempfreshWater;
	habitat = tempHabitat;
	isPredator = tempIsPredator;
}

//setters
void Fish::setIsFreshWater(bool tempIsFreshWater) {
	isFreshWater = tempIsFreshWater;
}
void Fish::setHabitat(string tempHabitat) {
	habitat = tempHabitat;
}
void Fish::setIsPredator(bool tempIsPredator) {
	isPredator = tempIsPredator;
}

//getters
bool Fish::getIsFreshWater() {
	return isFreshWater;
}
string Fish::getHabitat() {
	return habitat;
}
bool Fish::getIsPredator() {
	return isPredator;
}

//other functions
void Fish::read(ifstream &myFile) {

	string temp;
	getline(myFile, name, ',');

	getline(myFile, color, ',');

	getline(myFile, temp, ',');
	for (int i = 0; i < temp.size(); i++) {
		temp[i] = tolower(temp[i]);
	}
	if (temp.compare("false"))
		setIsFreshWater(false);
	else if (temp.compare("true"))
		setIsFreshWater(true);
	else {
		cout << "The file does not provide a correct input for isFreshWater.It will be set to false. " << endl << endl;
	}

	getline(myFile, habitat, ',');
	
	getline(myFile, temp, ',');

	for (int i = 0; i < temp.size(); i++) {
		temp[i] = tolower(temp[i]);
	}
	
	if (temp.compare("false") == 0) {
		setIsPredator(false);
	}
	else if (temp.compare ("true") == 0)
		setIsPredator(true);
	else {
		cout << "The file does not provide a correct input for isPredator.It will be set to false. " << endl << endl;
	}
}
void Fish::print() {
	cout << "The name of the fish is " << name << endl;
	cout << "The color of the fish is " <<  color << endl;
	cout << "The water is in Freshwater? ";
	if (isFreshWater == 0)
		cout << "False" << endl;
	else if (isFreshWater == 1)
		cout << "True" << endl;
	cout << "The habitat of the fish is " << habitat << endl;
	cout << "The fish is a predator? ";
	if (isPredator == 0)
		cout << "False" << endl;
	else if (isPredator == 1)
		cout << "True" << endl;
}

//****************************************************** H O R S E ********************************************************************//

//constructors
Horse::Horse() : Animal() {
	maneColor = "unknown";
	age = 0.0;
	height = 0;
}
Horse::Horse(string tempName, string tempColor, string tempManeColor, float tempAge, float tempHeight) : Animal(tempName, tempColor) {
	maneColor = tempManeColor;
	tempAge = age;
	height = tempHeight;
}

//setters 
void Horse::setManeColor(string tempmaneColor) {
	maneColor = tempmaneColor;
}
void Horse::setAge(float tempAge) {
	age = tempAge;
}
void Horse::setHeight(float tempHeight) {
	height = tempHeight;
}

//getters
string Horse::getManeColor() {
	return maneColor;
}
float Horse::getAge() {
	return age;
}
float Horse::getHeight() {
	return height;
}

//other functions
void Horse::addOneHand() {
	height = height + 1;
}
void Horse::read(ifstream &myFile) {
	string temp;
	getline(myFile, name, ',');

	getline(myFile, color, ',');

	getline(myFile, maneColor, ',');

	try {
		//getline(myFile, temp, ',');
		//age = stof(temp);
		myFile >> age; 
		throw invalid_argument("");
	}
	catch (const invalid_argument& ia) {
		if (age == 0)
		cerr << "The age is invalid. It will be set to 0. Sorry." << endl << endl;
	}

	try {
		//getline(myFile, temp, ',');
		//height = stof(temp);
		myFile >> age;
		throw invalid_argument("");
	}
	catch (const invalid_argument& ia) {
		if (height == 0)
		cerr << "The height is invalid. It will be set to 0. Sorry." << endl << endl;
	}


}
void Horse::print() {
	cout << "The name of the horse is " << name << endl;
	cout << "The color of the horse is " << color << endl;
	cout << "The color of the mane is " << maneColor << endl;
	cout << "The age of the horse is " << age << endl;
	cout << "The height of the horse is " << height << endl;
}

//************************************************************M O N K E Y ********************************************************************//
Monkey::Monkey() : Animal() {
	age = 0.0;
	isWild = false;
	home = "unknown";
	isEndangered = false;
}
Monkey::Monkey(string tempName, string tempColor, float tempAge, bool tempIsWild, string tempHome, bool tempIsEndangered) : Animal(tempName, tempColor) {
	age = tempAge;
	isWild = tempIsWild;
	home = tempHome;
	isEndangered = tempIsEndangered;
}

//setters
void Monkey::setAge(float a) {
	age = a;
}
void Monkey::setIsWild(bool w) {
	isWild = w;
}
void Monkey::setHome(string h) {
	home = h;
}
void Monkey::setIsEndangered(bool e) {
	isEndangered = e;
}

//getters
float Monkey::getAge() {
	return age;
}
bool Monkey::getIsWild() {
	return isWild;
}
string Monkey::getHome() {
	return home;
}
bool Monkey::getIsEndangered() {
	return isEndangered;
}

//other functions
void Monkey::changeEndangered() {
	isEndangered = !isEndangered;
}
void Monkey::read(ifstream &myFile) {
	if (myFile.fail()) {
		cout << "File is not found" << endl;
	}
	else {

		string temp;
		getline(myFile, name, ',');

		getline(myFile, color, ',');

		try {
			//getline(myFile, temp, ',');
			//age = stof(temp);
			myFile >> age;
			throw invalid_argument("");
		}
		catch (const invalid_argument& ia) {
			if (age == 0)
				cerr << "The age is invalid. It will be set to 0. Sorry." << endl << endl;
		}

		getline(myFile, temp, ',');

		for (int i = 0; i < temp.size(); i++) {
			temp[i] = tolower(temp[i]);
		}
		if (temp.compare("false")== 0) {
			setIsWild(false);
		}
		else if (temp.compare("true") == 0) {
			setIsWild(true);
		}
		else {
			cout << "The file does not provide a correct input for isWild.It will be set to false. " << endl << endl;
		}

		getline(myFile, home, ',');

		getline(myFile, temp, ',');

		for (int i = 0; i < temp.size(); i++) {
			temp[i] = tolower(temp[i]);
		}

		if (temp.compare("false") == 0) {
			setIsEndangered(false);
		}
		else if (temp.compare("true") == 0)
			setIsEndangered(true);
		else {
			cout << "The file does not provide a correct input for isEndangered.It will be set to false. " << endl << endl;
		}


	}
}
void Monkey::print() {

	cout << "The name of the monkey is " << name << endl;
	cout << "The color of the monkey is " << color << endl;
	cout << "The age of the monkey is " << age << endl;
	cout << "Is the monkey wild? ";
	if (isWild == 0)
		cout << "False" << endl;
	else if (isWild == 1)
		cout << "True" << endl;
	cout << "The home of the mokey is " << home << endl;
	cout << "Is the monkey endangered? ";
	if (isEndangered == 0)
		cout << "False" << endl;
	else if (isEndangered == 1)
		cout << "True" << endl; 
	
}
//******************************** L I Z A R D *************************************************************************//

Lizard::Lizard() : Animal() {
	habitat = "unknown";
	isProtected = false;
	weight = 0;
}
Lizard::Lizard(string tempName, string tempColor, string tempHabitat, bool tempIsProtected, float tempWeight) : Animal(tempName, tempColor) {
	habitat = tempHabitat;
	isProtected = tempIsProtected;
	weight = tempWeight;
}

//setters 
void Lizard::setHabitat(string h) {
	habitat = h;
}
void Lizard::setIsProtected(bool p) {
	isProtected = p;
}
void Lizard::setWeight(float a) {
	weight = a;
}

//getters 
string Lizard::getHabitat() {
	return habitat;
}
bool Lizard::getIsProtected() {
	return isProtected;
}
float Lizard::getWeight() {
	return weight;
}

//other functions 
void Lizard::read(ifstream &myFile) {
	if (myFile.fail()) {
		cout << "File is not found" << endl;
	}
	else {

		string temp;
		getline(myFile, name, ',');

		getline(myFile, color, ',');

		getline(myFile, habitat, ',');

		getline(myFile, temp, ',');

		for (int i = 0; i < temp.size(); i++) {
			temp[i] = tolower(temp[i]);
		}

		if (temp.compare("false") == 0) {
			setIsProtected(false);
		}
		else if (temp.compare("true") == 0)
			setIsProtected(true);
		else {
			cout << "The file does not provide a correct input for isPredator.It will be set to false. " << endl << endl;
		}

		try {
			//getline(myFile, temp, ',');
			//weight = stof(temp);
			myFile >> weight;
			throw invalid_argument("");
		}
		catch (const invalid_argument& ia) {
			if (weight == 0)
			cerr << "The weight is invalid. It will be set to 0. Sorry." << endl << endl;
		}
	}
}
void Lizard::print() {
	cout << "The name of the lizard is " << name << endl;
	cout << "The color of the lizard is " << color << endl;
	cout << "The habitat of the lizard is " << habitat << endl;
	cout << "Is the lizard protected? "; 
	if (isProtected == 0)
		cout << "False" << endl;
	else if (isProtected == 1)
		cout << "True" << endl; 
	cout << "The weight of the lizard is " << weight << endl;
}