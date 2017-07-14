#include "Cheese.h"


Cheese::Cheese()//constractor
{
	this->Milk_Product::_prodType=2;
	cout<<"Constracted cheese product."<<endl;
	do
	{
		cout<<"enter the num of extras in the cheese:"<<endl;
		cin>>this->_numOfExtras;
	}while(this->_numOfExtras<0);
	this->CalacuatePrice(1);
	cout<<"********************************************************************************"<<endl;
}
void Cheese::CalacuatePrice(int factor)//update the price
{
	while(factor<0)
	{
		cout<<"enter the factor:"<<endl;
		cin>>factor;
	}
	this->Milk_Product::CalacuatePrice(factor);
	this->_price=this->Milk_Product::getPrice()+(float)this->_numOfExtras;
}
void Cheese::print()const//print the details
{
	cout<<"the item type: "<<this->Milk_Product::_prodType<<endl;
	cout<<"the num of extras in the cheese: "<<this->_numOfExtras<<endl;
	cout<<"********************************************************************************"<<endl;
}

