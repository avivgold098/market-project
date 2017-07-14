#include "Else_Milk.h"


Else_Milk::Else_Milk()
{
	this->Milk_Product::_prodType=4;
	cout<<"constracted else milk product."<<endl;
	do
	{
		cout<<"enter the num of the num milks products (must be bigger than 1):"<<endl;
		cin>>this->_NotMilk;
	}while(this->_NotMilk<1);
	this->_Names=new char *[this->_NotMilk];
	for(int i=0;i<this->_NotMilk;i++)
	{
		char buffer[51]={NULL};
		do
		{
			fflush(stdin);
			cout<<"enter the("<<i+1<<") product name:"<<endl;
			fflush(stdin);
			gets_s(buffer);
			fflush(stdin);
		}while(strlen(buffer)>50);
		this->_Names[i]=_strdup(buffer);
	}
	cout<<"********************************************************************************"<<endl;
}
void Else_Milk::CalacuatePrice(int factor)
{
	while(factor<0)
	{
		cout<<"enter the factor:"<<endl;
		cin>>factor;
	}
	this->Milk_Product::CalacuatePrice(factor);
	this->_price=this->Milk_Product::getPrice()+(float)(this->_NotMilk*5);
}
void Else_Milk::print()const
{
	this->Milk_Product::print();
	cout<<"the num of proudcts they are not milks products are: "<<this->_NotMilk<<endl;
	for(int i=0;i<this->_NotMilk;i++)
		cout<<"the ("<<i+1<<") Name is:"<<this->_Names[i]<<endl;
	cout<<"********************************************************************************"<<endl;
}

Else_Milk::~Else_Milk()
{
	for(int i=0;i<this->_NotMilk;i++)
		delete this->_Names[i];
	delete []this->_Names;
}
