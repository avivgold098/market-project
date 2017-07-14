#include "Farm_Product.h"
Farm_Product::Farm_Product()//constractor
{
	this->Product::_prodType=1;
	this->_prodType=0;
	cout<<"Constracted farm product."<<endl;
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
	cout<<"enter the time of ripening (in seasons):"<<endl;
	cin>>this->_timeOfRipening;
	}while((this->_timeOfRipening>4)||(this->_timeOfRipening<1));
	do
	{
		cout<<"eneter the Num of suppliers ( bigger than 1):"<<endl;
		cin>>this->_NumOfSuppliers;
	}while(this->_NumOfSuppliers<1);
	this->CalacuatePrice(1);
	cout<<"********************************************************************************"<<endl;
}
void Farm_Product::CalacuatePrice(int factor)//calacute the price
{
	while(factor<0)
	{
		cout<<"enter the factor:"<<endl;
		cin>>factor;
	}
	this->Product::CalacuatePrice(factor);
	this->_price=(this->Product::getPrice()*3*(float)(5-this->_timeOfRipening))+((float)(this->_NumOfSuppliers*5))+(float)this->_prodType;
}
void Farm_Product::print()const//print the farm details
{
	this->Product::print();
	cout<<"the item name: "<<this->_name<<endl;
	cout<<"the time of item ripening (in seansons) : "<<this->_timeOfRipening<<endl;
	cout<<"the num of item suppilers is: "<<this->_NumOfSuppliers<<endl;
	cout<<"the item type: "<<this->_prodType<<endl;
	cout<<"********************************************************************************"<<endl;
}

