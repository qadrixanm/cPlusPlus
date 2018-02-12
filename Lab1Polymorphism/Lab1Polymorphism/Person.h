#pragma once
#include <iostream>

using namespace std;

class Person
{
public:
	Person();
	Person(string); //initialise the name
	virtual ~Person();
	virtual void printName() const;
	bool operator > (const Person &p) const;
private:
	string name;
};

