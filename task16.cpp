#include<iostream>
using namespace std;
int main(){
	const double milk_per_carton = 3.78, cost_per_liter = 0.38, profit_per_carton = 0.27;
	double milk_quantity, total_cartons_req;
	cout<<"Enter total amount of milk produced: ";
	cin>>milk_quantity;
	total_cartons_req = (int(milk_quantity / milk_per_carton) + 1);
	double total_cost = milk_quantity * cost_per_liter;
	double total_profit = total_cartons_req * profit_per_carton;
	cout<<"\nTotal number of cartons required are: "<<total_cartons_req;
	cout<<"\nTotal cost of producing milk is : $"<<total_cost;
	cout<<"\nTotal Profit : $"<<total_profit;
}
