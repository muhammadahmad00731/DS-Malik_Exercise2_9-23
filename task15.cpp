#include<iostream>
using namespace std;
int main(){
	const double PI = 3.141593;
	double r, Area;
	cout<<"Enter radius of the circle: ";
	cin>>r;
	Area = PI * (r * r);
	cout<<"\nArea of the circle is : "<<Area;
}
