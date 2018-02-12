#include "Customer.h"



Customer::Customer()
{
}

Customer::Customer(string name) : Person(name)
{}

void Customer::printName() const {
	Person::printName();
	cout << " and I want to make a complaint";
}
Customer::~Customer()
{
}
