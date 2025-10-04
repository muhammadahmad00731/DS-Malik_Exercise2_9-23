#include<iostream>
using namespace std;
int main(){
	double sum, num1, num2, num3, num4, num5;
	int nearest_integer;
	cout<<"Enter of 1st num score: ";
	cin>>num1;
	cout<<"\nEnter 2nd num score: ";
	cin>>num2;
	cout<<"\nEnter 3rd num score: ";
	cin>>num3;
	cout<<"\nEnter 4th num score: ";
	cin>>num4;
	cout<<"\nEnter 5th num score: ";
	cin>>num5;
	sum = num1+num2+num3+num4+num5;
	cout<<endl<<"Sum before converting to nearest integer is: "<<sum;
	nearest_integer = (int(sum) + 1);
	cout<<endl<<"Sum after converting to nearest integer is: "<<nearest_integer;
}
