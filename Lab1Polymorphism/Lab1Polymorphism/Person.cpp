#include "Person.h"
#include <string>
#include <iostream>

using namespace std;
Person::Person() : name("") {

}

Person::Person(string name) : name(name)
{}

void Person::printName() const 
{
	cout << "My name is " << name;
}
Person::~Person()
{}

bool Person::operator>(const Person &p) const {
	return name > p.name;
}