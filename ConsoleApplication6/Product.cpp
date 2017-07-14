#include "Product.h"
int Product::_products = 12345;
Product::Product()//constractor
{
	cout<<"constracted Base Product."<<endl;
	this->_prodType=0;
	this->_SerialNum=this->_products++;
	do
	{
		cout<<"enter product row (between 'A' TO 'Z'):"<<endl;
		cin>>this->_row;
	}while((this->_row>'Z')||(this->_row<'A'));
	do
	{
		cout<<"enter shelf (between [1,5]):"<<endl;
		cin>>this->_shelf;
	}while((this->_shelf<1)||(this->_shelf>5));
	do
	{
		cout<<"enter the area (1,2,3):"<<endl;
		cin>>this->_area;
	}while((this->_area<1)||(this->_area>3));
	do
	{
		cout<<"enter the amount > 0 in KG:"<<endl;
		cin>>this->_amount;
	}while(this->_amount<0);
	this->CalacuatePrice(1);
	cout<<"********************************************************************************"<<endl;

}
void Product::print()const
{
	cout<<"The serial number is: "<<this->_SerialNum<<endl;
	cout<<"The item location is: "<<endl;
	cout<<"row: "<<this->_row<<endl<<"shelf: "<<this->_shelf<<endl<<"["<<this->_row<<" "<<this->_shelf<<"]"<<endl;
	cout<<"The amount of the item: "<<this->_amount<<" KG"<<endl;
	cout<<"The item type: "<<this->_prodType<<endl;
	if(this->_area==1)
		cout<<"The level of your item exposure is: "<<this->_area<<" is low a exposure"<<endl;
	else if(this->_area==2)
		cout<<"The level of your item exposure is: "<<this->_area<<" is medaium a exposure"<<endl;
	else
		cout<<"The level of your item exposure is: "<<this->_area<<" is high a exposure"<<endl;
	cout<<"********************************************************************************"<<endl;
}
void Product::CalacuatePrice(int factor)//calacuate the product price
{
	while(factor<0)
	{
		cout<<"enter the factor:"<<endl;
		cin>>factor;
	}
	this->_price=this->_amount*(float)this->_area*(float)factor;
}
void Product::chageAmount()//chage the product amount
{
	int num;
	cout<<"TO chage the amount enter 1 else enter every number else"<<endl;
	cin>>num;
	if(num==1)
	{
		this->_price/=(float)this->_amount;//because the amount will chage the price need to chage
		do
		{
			cout<<"enter the amount > 0 in KG:"<<endl;
			cin>>this->_amount;
		}while(this->_amount<0);
		this->_price*=(float)this->_amount;
	}
	cout<<"********************************************************************************"<<endl;
}

