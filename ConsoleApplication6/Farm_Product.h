#pragma once
#include "Product.h"
class Farm_Product : public Product
{
private:
	char _name[51];
	int _timeOfRipening;
	int _NumOfSuppliers;
	float _price;
protected:
	int _prodType;
public:
	Farm_Product();//constractor
	float getPrice()const{return this->_price;}//help function to get the this products price
	void CalacuatePrice(int factor);//calaculate the prirce
	void print()const;//print the details
	virtual ~Farm_Product(){;}//virtual distractor
};