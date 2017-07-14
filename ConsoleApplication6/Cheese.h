#pragma once
#include "Milk_Product.h"
class Cheese : public Milk_Product
{
private:
	int _numOfExtras;
	float _price;
public:
	void CalacuatePrice(int factor);//updaye the price
	Cheese();//constractor
	virtual ~Cheese(){;}//distractor
	void print()const;//print the details
};

