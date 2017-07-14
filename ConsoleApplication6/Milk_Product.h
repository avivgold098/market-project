#pragma once
#include "Product.h"
class Milk_Product : public Product
{
private:
	char _name[51];
	int _NumOfColors;
	float _PercentOfBodyFat;
	float _price;
protected:
	int  _prodType;
public:
	float getPrice()const{return this->_price;}//get the milk price
	void print()const;//print the values
	void CalacuatePrice(int factor);//update the milk product price
	Milk_Product();//constractor

	virtual ~Milk_Product(){;}//milk product empty distractor
};

