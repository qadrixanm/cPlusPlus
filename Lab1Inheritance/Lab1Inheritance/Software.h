#pragma once
#ifndef SOFTWARE_H_
#define SOFTWARE_H_
#include "Product.h"

class Software : public Product {
public:
	Software();
	Software(double);
	~Software();
};
#endif  // SOFTWARE_H_