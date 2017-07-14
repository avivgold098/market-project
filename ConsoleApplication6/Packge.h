#pragma once
#include "product.h"
class Packge : public Product
{
private:
	int _numOfProducts;
	char **_productsNames;
	int _numOfColors;
	float _price;
public:
	void print()const;//print the details
	void CalacuatePrice(int factor);//update the packge price
	Packge();//constractor
	virtual ~Packge();//distractor
};

