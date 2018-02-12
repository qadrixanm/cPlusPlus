
#include "Product.h"

Product::Product()
{
	netPrice = 0.0;
}

Product::Product(double p)
{
	netPrice = p;
}

Product::~Product()
{
}

double Product::getGrossPrice() const
{
	return (netPrice * 1.21);
}
