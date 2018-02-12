#pragma once
#include "Person.h"

using namespace std;

class Customer : public Person
{
public:
	Customer();
	Customer(string);
	~Customer();

	virtual void printName() const;
};

