#include<iostream>
using namespace std;
int main(){
	double original_price, markup_percentage, salestax_rate;
	cout<<"Enter the original price of of the item: ";
	cin>>original_price;
	cout<<"\nEnter markup_percentage to the item price: ";
	cin>>markup_percentage;
	cout<<"\nEnter sales tax rate to the item price: ";
	cin>>salestax_rate;
	double markup_price = (original_price * markup_percentage) / 100;
	double selling_price = original_price + markup_price;
	double salestax_price = (original_price * salestax_rate) / 100;
	double final_price = selling_price + salestax_price;
	cout<<"\nOriginal Price : "<<original_price;
	cout<<"\nMark-up price : "<<markup_price;
	cout<<"\nSelling Price : "<<selling_price;
	cout<<"\nSales-tax price : "<<salestax_price;
	cout<<"\nFinal Price : "<<final_price;
}
