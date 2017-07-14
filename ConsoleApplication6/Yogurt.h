#pragma once
#include "Milk_product.h"
class Yogurt : public Milk_Product
{//is empty class
public:
	Yogurt()//constractor
	{
		cout<<"constracted yogurt."<<endl;
		this->Milk_Product::_prodType=2;
		cout<<"********************************************************************************"<<endl;
	}
	virtual ~Yogurt(){;}//distractor
	void print()const//print the detatils
	{
		cout<<"IS A YOGURT"<<endl;
		this->Milk_Product::print();
		cout<<"********************************************************************************"<<endl;
	}
};

