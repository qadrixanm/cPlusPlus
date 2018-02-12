#include "Book.h"

Book::Book() {
	netPrice = 0.0;
}

Book::Book(double netPrice) :Product(netPrice) {

}

Book::~Book() {
}

double Book::getGrossPrice() const {
	return netPrice;
}
