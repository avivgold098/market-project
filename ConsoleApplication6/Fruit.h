#pragma once
#include "farm_product.h"
class Fruit : public Farm_Product
{
private:
	float _NumOfSugars;
	float _price;
public:
	void print()const;//print the details
	void CalacuatePrice(int factor);//calacute the price
	Fruit();//constractor
	virtual ~Fruit(){;}//virtual diractor (empty)
};

