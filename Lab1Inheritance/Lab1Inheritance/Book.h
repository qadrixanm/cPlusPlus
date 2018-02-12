#pragma once

#ifndef BOOK_H_
#define BOOK_H_
#include "Product.h"

class Book : public Product {
public:
	Book();
	Book(double);
	~Book();
	double getGrossPrice() const;
};
#endif  // BOOK_H_