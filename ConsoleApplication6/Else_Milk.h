#pragma once
#include "milk_product.h"
class Else_Milk : public Milk_Product
{
private:
	int _NotMilk;
	char **_Names;
	float _price;
public:
	void print()const;//print the details
	void CalacuatePrice(int factor);//calacute the price
	Else_Milk();//constractor
	virtual ~Else_Milk();//distractor for the names
};

