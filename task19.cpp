#include<iostream>
using namespace std;
int main(){
	double quarters, dimes, nickels;
	cout<<"Enter total number of quarters: ";
	cin>>quarters;
	cout<<"Enter total number of dimes: ";
	cin>>dimes;
	cout<<"Enter total number of quarters: ";
	cin>>nickels;
	double pennies = (quarters * 25) + (dimes * 10)+ (nickels * 5);
	cout<<"\nTotal coins in pennies : "<<pennies;
}
