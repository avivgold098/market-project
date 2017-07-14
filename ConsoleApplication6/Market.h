#pragma once
#include "Cheese.h"
#include "Farm_Product.h"
#include "Fruit.h"
#include "Milk_Product.h"
#include "Packge.h"
#include "Product.h"
#include "Vegetable.h"
#include "Drink.h"
#include "Else_Milk.h"
#include "Market.h"
#include "Yogurt.h"
#include <string>
class Market
{
private:
	Product **_products;
	char _StoreName[51];
	int _StoreFactor;
	int _NumOfProducts;
	float _price;
public:
	void chageFactor();//chage the factor
	void CalculatePrice();//calacute the all products price
	void addProduct();//add a new product to the arr
	void menu();//manu for the main
	void print()const;//print the store
	Market();//constractor
	~Market();//distractor for the arr
};

