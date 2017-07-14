#include "Milk_Product.h"


Milk_Product::Milk_Product()//constractor
{
	this->Product::_prodType=3;
	cout<<"Milk Product constractes."<<endl;
	this->_prodType=0;
	do
	{
		fflush(stdin);
		cout<<"enter name (no more than 50 letters) :"<<endl;
		fflush(stdin);
		gets_s(this->_name);
		fflush(stdin);
	}while(strlen(this->_name)>50);
	do
	{
		cout<<"enter the num of the colors on the packge ( > 1):"<<endl;
		cin>>this->_NumOfColors;
	}while(this->_NumOfColors<0);
	do
	{
		cout<<"enter the perecent of body fat:( >= 5):"<<endl;
		cin>>this->_PercentOfBodyFat;
	}while(this->_PercentOfBodyFat<=5);
	this->CalacuatePrice(1);
	cout<<"********************************************************************************"<<endl;
}
void Milk_Product::CalacuatePrice(int factor)//update the proudct price
{
	while(factor<0)
	{
		cout<<"enter the factor:"<<endl;
		cin>>factor;
	}
	this->Product::CalacuatePrice(factor);
	if(this->_prodType>0)
		this->_price=(this->Product::getPrice()+(float)this->_NumOfColors+(float)this->_PercentOfBodyFat)*(float)this->_prodType;
	else
		this->_price=(this->Product::getPrice()+(float)this->_NumOfColors+(float)this->_PercentOfBodyFat);
}
void Milk_Product::print()const//print the details
{
	this->Product::print();
	cout<<"Product Name: "<<this->_name<<endl;
	cout<<"the num of the coloros on product packge is: "<<this->_NumOfColors<<endl;
	cout<<"the amount of the body fat perecent: "<<this->_PercentOfBodyFat<<endl;
	cout<<"the item type: "<<this->_prodType<<endl;
	cout<<"********************************************************************************"<<endl;

}