#pragma once
#ifndef PRODUCT_H_
#define PRODUCT_H_

class Product {
public:
	Product();
	Product(double);
	~Product();
	double getGrossPrice() const;

protected:
	double netPrice;
};
#endif // !PRODUCT_H_

