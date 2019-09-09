#pragma once

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Animal {

protected :

	string name;
	string color;


public:

	//constructors
	Animal();
	Animal(string, string);

	//setters
	void setName(string);
	void setColor(string);

	//getters
	string getName();
	string getColor();

	//other functions
	void virtual read(ifstream&) = 0;
	void virtual  print() = 0;
};
class Dog : public Animal {

private:

	string breed;
	float age;
	float weight;


public:

	//constructors
	Dog();
	Dog(string, string, float, string, float);

	//setters
	void setBreed(string);
	void setAge(float);
	void setWeight(float);

	//getters
	string getBreed();
	float getAge();
	float getWeight();

	//other functions
	void subtract10();
	void virtual read(ifstream&);
	void virtual  print();

};
class Fish : public Animal {

private:

	bool isFreshWater;
	string habitat;
	bool  isPredator;

public:

	//constructors
	Fish();
	Fish(string, string, bool, string, bool);

	//setters
	void setIsFreshWater(bool);
	void setHabitat(string);
	void setIsPredator(bool);

	//getters
	bool getIsFreshWater();
	string getHabitat();
	bool getIsPredator();

	//other functions
	void virtual read(ifstream&);
	void virtual  print();
};

class Horse : public Animal {

private:
	float height;
	string maneColor;
	float age;


public:

	//constructors 
	Horse();
	Horse(string, string, string, float, float);

	//setters 
	void setManeColor(string);
	void setAge(float);
	void setHeight(float);

	//getters
	string getManeColor();
	float getAge();
	float getHeight();

	//other functions
	void addOneHand();
	void virtual read(ifstream&);
	void virtual  print();

};
class Monkey : public Animal {
private:
	float age;
	bool isWild;
	string home;
	bool isEndangered;

public:

	//constructors 
	Monkey();
	Monkey(string, string, float, bool, string, bool);

	//setters
	void setAge(float);
	void setIsWild(bool);
	void setHome(string);
	void setIsEndangered(bool);

	//getters
	float getAge();
	bool getIsWild();
	string getHome();
	bool getIsEndangered();

	//other functions
	void changeEndangered();
	void virtual read(ifstream&);
	void virtual  print();
};

class Lizard : public Animal {

private:
	string habitat;
	bool isProtected;
	float weight;

public:

	//constructors
	Lizard();
	Lizard(string, string, string, bool, float);

	//setters 
	void setHabitat(string);
	void setIsProtected(bool);
	void setWeight(float);

	//getters 
	string getHabitat();
	bool getIsProtected();
	float getWeight();

	//other functions
	void virtual read(ifstream&);
	void virtual print();

};