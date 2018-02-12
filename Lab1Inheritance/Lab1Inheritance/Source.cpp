#include <iostream>
#include "Product.h"
#include "Book.h"
#include "Software.h"

using namespace std;

int main() {

	const int SIZE = 8;

	//pointers to each class
	Product *product[SIZE];
	Software *software;
	Book *book;

	double price = 0.0;

	cout << "Enter the price of the book" << endl;
	cin >> price;
	book = new Book(price);
	cout << "Gross Price" << book->getGrossPrice() << endl;

	cout << "Enter the price of the software" << endl;
	cin >> price;
	software = new Software(price);
	cout << "Gross Price" << software->getGrossPrice() << endl;

	product[0] = book;
	product[1] = software;


	for (int i = 2; i < SIZE; i++) {

		int choice;
		cout << "Please select 1 for Book and 2 for Software!" << endl;
		cin >> choice;

		if (choice == 1)
		{
			cout << "Enter the price for the Book" << endl;
			cin >> price;
			product[i] = new Book(price);
		}
		else if (choice == 2) {
			cout << "Enter the price for the Software" << endl;
			cin >> price;
			product[i] = new Software(price);
		}
		else {
			cout << "Invalid Choice" << endl;
			i--;
		}
	}


	for (int i = 0; i < SIZE; i++) {
		cout << "Gross price is: " << product[i]->getGrossPrice() << endl;
	}

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j <(SIZE - 1); j++) {
			if (product[i]->getGrossPrice < product[j + 1]->getGrossPrice) {
				Product *temp = product[j];
				product[j] = product[j + 1];
				product[j + 1] = temp;
			}
		}
	}

	cout << "Sorted array: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "Gross Price: " << product[i]->getGrossPrice() << endl;
	}

	delete book;
	delete software;
	system("pause");
	return 0;
}