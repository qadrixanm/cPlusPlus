#include "Employee.h"
#include "Person.h"


Employee::Employee() : Person(), salary(0.0)
{}


Employee::Employee(string name, double salary) : salary(salary) , Person(name)
{}

void Employee::printName() const {
	Person::printName();
	cout << " and my salary is " << salary;
}
Employee::~Employee()
{
}
