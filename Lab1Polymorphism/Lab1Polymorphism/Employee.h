#pragma once
#include "Person.h"
#include <iostream>
using namespace std;

class Employee : public Person 
{
public:
	Employee();
	Employee(string, double);
	~Employee();

	virtual void printName() const;

protected:
	double salary;
};

