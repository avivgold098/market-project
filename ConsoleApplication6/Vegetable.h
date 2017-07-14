#pragma once
#include "Farm_product.h"
class Vegetable : public Farm_Product
{
private:
	int _NumOfVitamins;
	float _price;
public:
	Vegetable();//constractor
	void CalacuatePrice(int factor);//update the proudct price
	void print()const;//print the details
	virtual ~Vegetable(){;}//virtaul distractor
};

