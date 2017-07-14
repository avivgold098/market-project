#include "Vegetable.h"


Vegetable::Vegetable()//constractor
{
	this->Farm_Product::_prodType=1;//ypdate the prodtype
	cout<<"constracted vagetable product."<<endl;
	do
	{
		cout<<"enter the num of the vitamins in the vegetable:"<<endl;
		cin>>this->_NumOfVitamins;
	}while(this->_NumOfVitamins<0);
	this->CalacuatePrice(1);
	cout<<"********************************************************************************"<<endl;
}

void Vegetable::CalacuatePrice(int factor)//calactue the price 
{
	while(factor<0)
	{
		cout<<"enter the factor:"<<endl;
		cin>>factor;
	}
	this->Farm_Product::CalacuatePrice(factor);
	this->_price=this->Farm_Product::getPrice()+(float)(this->_NumOfVitamins*2);

}
void Vegetable::print()const// print the details
{
	this->Farm_Product::print();
	cout<<"the num of the vitamins is: "<<this->_NumOfVitamins<<endl;
	cout<<"********************************************************************************"<<endl;
}