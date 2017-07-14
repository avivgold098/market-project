#include "Market.h"


Market::Market()//constractor for the market
{
	this->_price=0;
	this->_products=NULL;
	this->_NumOfProducts=0;
	cout<<"Market constracted."<<endl;
	do
	{
		cout<<"enter store name (no more than 50 letters):"<<endl;
		gets_s(this->_StoreName);
		fflush(stdin);
	}while(strlen(this->_StoreName)>50);
	do
	{
		cout<<"enter store factor > 0:"<<endl;
		cin>>this->_StoreFactor;
	}while(this->_StoreFactor<0);
	cout<<"********************************************************************************"<<endl;
}
void Market::chageFactor()//change the factor value
{
	int check;
	cout<<"enter 1 if u want to chage the factor:"<<endl;
	cin>>check;
	if(check==1)
	{
		do
		{
			cout<<"enter a new factor:"<<endl;
			cin>>this->_StoreFactor;
		}while(this->_StoreFactor>0);
		this->CalculatePrice();
	}
	cout<<"********************************************************************************"<<endl;
}
void Market::print()const//print the details
{
	cout<<"The store Name is : "<<this->_StoreName<<endl;
	cout<<"The store factor is: "<<this->_StoreFactor<<endl;
	cout<<"The store num of products is: "<<this->_NumOfProducts<<endl;
	if(this->_NumOfProducts>0)
	{
		cout<<"The products:"<<endl;
		cout<<"********************************************************************************"<<endl;
		for(int i=0;i<this->_NumOfProducts;i++)
		{
			cout<<"the ("<<i+1<<") product:"<<endl;
			this->_products[i]->print();
		}
	}
	cout<<"The store all products price is: "<<this->_price<<endl;
	cout<<"********************************************************************************"<<endl;
}
void Market::menu()//menu for the main
{
	int choice;
	while(1)
	{

		cout<<"MENU :"<<endl;
		cout<<"******"<<endl;
		cout<<"1) Print all products"<<endl;
		cout<<"2) Calculate price"<<endl;
		cout<<"3) Add a product"<<endl;
		cout<<"4) Change the factor"<<endl;
		cout<<"5) EXIT"<<endl;
		cout<<"******"<<endl;
		cout<<"Your choice : ";
		cin>>choice;
		switch(choice)
		{
		case 1:
			this->print();
			break;
		case 2:
			cout<<"******"<<endl;
			this->CalculatePrice();
			cout<<"The price was calculated succefully!"<<endl;
			cout<<"******"<<endl;
			break;
		case 3:
			cout<<"******"<<endl;
			this->addProduct();
			cout<<"******"<<endl;
			break;
		case 4:
			cout<<"******"<<endl;
			this->chageFactor();
			cout<<"******"<<endl;
			break;
		case 5:
			cout<<"******"<<endl;
			cout<<"GoodBye\n";
			return;
		default:
			cout<<"Please try again\n";
		}
	}
	cout<<"********************************************************************************"<<endl;
}
void Market::addProduct()//add proudct for the product arr
{
	Product **temp=NULL;//save the values
	temp=new Product *[this->_NumOfProducts];//allocate
	for(int i=0;i<this->_NumOfProducts;i++)
		temp[i]=this->_products[i];//save//
	delete [] this->_products;//delete
	this->_products=new Product *[this->_NumOfProducts+1];//make a new one with the corret size
	for(int i=0;i<this->_NumOfProducts;i++)
		this->_products[i]=temp[i];//copy the values that we save in temp 
	cout<<"see the manu of the products U can to select:"<<endl;
	cout<<"Type of Products : "<<endl;
	cout<<"1) Regular product"<<endl;
	cout<<"2) Farm product"<<endl;      
	cout<<"3) Milk product"<<endl;
	cout<<"4) Package product"<<endl;
	cout<<"5) Fruit product"<<endl;
	cout<<"6) Vegetable product"<<endl;
	cout<<"7) Cheese product"<<endl;
	cout<<"8) Yogurt product"<<endl;
	cout<<"9) Milk Drink product"<<endl;
	cout<<"10) Milk - not cheese,drink,yogurt product"<<endl;
	int choice;
	cout<<"enter yout choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:this->_products[this->_NumOfProducts] = new Product();
			this->_products[this->_NumOfProducts]->chageAmount();
			break;
		case 2:this->_products[this->_NumOfProducts] = new Farm_Product();
			break;
		case 3:this->_products[this->_NumOfProducts] = new Milk_Product();
			break;
		case 4:this->_products[this->_NumOfProducts] = new Packge();
			break;
		case 5:this->_products[this->_NumOfProducts] = new Fruit();
			break;
		case 6:this->_products[this->_NumOfProducts] = new Vegetable();
			break;
		case 7:this->_products[this->_NumOfProducts] = new Cheese();
			break;
		case 8:this->_products[this->_NumOfProducts] = new Yogurt();
			break;
		case 9:this->_products[this->_NumOfProducts] = new Drink();
			break;
		case 10:this->_products[this->_NumOfProducts] = new Else_Milk();
			break;
		default:
			cout<<"Please try again."<<endl;
			return;
	}
	this->_NumOfProducts++;//update the price
	this->CalculatePrice();
	cout<<"********************************************************************************"<<endl;
}

void Market::CalculatePrice()//update the all products price
{
	this->_price=0;
	if(this->_NumOfProducts==0)
		return;
	for(int i=0;i<this->_NumOfProducts;i++)
	{
		this->_products[i]->CalacuatePrice(this->_StoreFactor);
		this->_price+=this->_products[i]->getPrice();
	}
}
Market::~Market(void)//ditractor
{
	for(int i=0;i<this->_NumOfProducts;i++)
		delete this->_products[i];
	delete [] this->_products;
}
