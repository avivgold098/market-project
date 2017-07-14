#include "Packge.h"


Packge::Packge()//constractor
{
	this->Product::_prodType=2;//update the base proudct type
	cout<<"constracted Packge."<<endl;
	do
	{
		cout<<"enter the num of products in the packge ( >= 1):"<<endl;
		cin>>this->_numOfProducts;
	}while(this->_numOfProducts<0);
	do
	{
		cout<<"enter the num of the colors in the packge (bigger than 1):"<<endl;
		cin>>this->_numOfColors;
	}while(this->_numOfColors<0);
	this->_productsNames=new char * [this->_numOfProducts];
	for(int i=0;i<this->_numOfProducts;i++)
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
		this->_productsNames[i]=_strdup(buffer);
	}
	this->CalacuatePrice(1);
	cout<<"********************************************************************************"<<endl;
}

void Packge::CalacuatePrice(int factor)//calacute the packge price
{
	while(factor<0)
	{
		cout<<"enter the factor:"<<endl;
		cin>>factor;
	}
	this->Product::CalacuatePrice(factor);
	this->_price=((this->Product::getPrice()*2)*(float)this->_numOfProducts+(float)(this->_numOfColors/3));
}
void Packge::print()const
{
	this->Product::print();
	cout<<"the products that U have in the packge are:"<<endl;
	for(int i=0;i<this->_numOfProducts;i++)
		 cout<<"("<<i+1<<")"<<this->_productsNames[i]<<endl;
	cout<<"the num of colors u have on the packge is: "<<this->_numOfColors<<endl;
	cout<<"the item type: "<<Product::_prodType<<endl;
	cout<<"********************************************************************************"<<endl;

}
Packge::~Packge()//distractor for the names (char **names)
{
	for(int i=0;i<this->_numOfProducts;i++)
		delete this->_productsNames[i];
	delete []this->_productsNames;
}