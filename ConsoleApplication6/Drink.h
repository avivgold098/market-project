#pragma once
#include "Milk_product.h"
class Drink : public Milk_Product
{//thats a empty class
public:
	Drink()
	{
		cout<<"constracted Drink."<<endl;
		this->Milk_Product::_prodType=1;
		cout<<"********************************************************************************"<<endl;
	}
	virtual ~Drink(){;}//distractor
	void print()const//print the valuse
	{
		cout<<"IS A DRINK"<<endl;
		this->Milk_Product::print();
		cout<<"********************************************************************************"<<endl;
	}
};

