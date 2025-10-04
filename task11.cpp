#include<iostream>
using namespace std;
int main(){
	double tank_capacity, mpg, no_of_miles;
	cout<<"Enter fuel tank capacity (in gallons): "; 
	cin>> tank_capacity;
	cout<<"\nEnter miles (per gallon the automobile can drive: ";
	cin>>mpg;
	no_of_miles = tank_capacity * mpg;
	cout<<"\nNo. of miles automobile can drive without re-fueling are: "<<no_of_miles;
}
