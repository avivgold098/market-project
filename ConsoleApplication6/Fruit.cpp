#include "Fruit.h"


Fruit::Fruit()//constractor
{
	this->Farm_Product::_prodType=2;//update the product type
	cout<<"constracted fruit."<<endl;
	do
	{
		cout<<"enter the num of sugar (1 to 100 grams):"<<endl;
		cin>>this->_NumOfSugars;
	}while((this->_NumOfSugars<1)||(this->_NumOfSugars>100));
	this->CalacuatePrice(1);
	cout<<"********************************************************************************"<<endl;
}
void Fruit::CalacuatePrice(int factor)//calactue thr price
{
	while(factor<0)
	{
		cout<<"enter the factor > 0:"<<endl;
		cin>>factor;
	}
	this->Farm_Product::CalacuatePrice(factor);
	this->_price=this->Farm_Product::getPrice()+(this->_NumOfSugars/2);
}
void Fruit::print()const//print the details
{
	this->Farm_Product::print();
	cout<<"The num of suger in the fruit: "<<this->_NumOfSugars<<"g"<<endl;
	cout<<"********************************************************************************"<<endl;
	
}


