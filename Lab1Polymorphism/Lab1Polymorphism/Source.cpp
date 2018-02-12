#include <iostream>
#include "Person.h"
#include "Customer.h"
#include "Employee.h"
#include <string>

using namespace std;

int main() {

	Person *person[3];

	Person *personPtr;

	personPtr = new Person("Kaddy");
	personPtr->printName();
	cout << endl;

	personPtr = new Employee("Jay", 10000);
	personPtr->printName();
	cout << endl;

	personPtr = new Customer("John");
	personPtr->printName();
	cout << endl;

	person[0] = new Customer("Joe");
	person[1] = new Employee("Alfie", 2000);
	person[2] = new Employee("RB", 2000);

	Person *temp;
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (person[i] > person[j]) {
				temp = person[i];
				person[i] = person[j];
				person[j] = temp;
			}
		}
	}
	temp = NULL;

	cout << endl << "Sorted Array" << endl;
	for (int i = 0; i < 3; i++) {
		person[i]->printName();
		cout << endl;
	}
	system("pause");
	return 0;
}