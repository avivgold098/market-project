#pragma once
#include<iostream>
#include <string>
using namespace std;
class Product
{
private:
	static int _products;//help a static type
	int _SerialNum;
	char _row;
	int _shelf;
	float _amount;
	int _area;
	float _price;
protected:
	int _prodType;
public:
	virtual float getPrice()const{return this->_price;}//help fucntion
	virtual void CalacuatePrice(int factor);//calcaute the price
	Product();//constractor
	virtual ~Product(void){;}//virtual distractor that used by removefromarr by help function
	void chageAmount();//update the amount
	virtual void print()const;//print the deatils
};
