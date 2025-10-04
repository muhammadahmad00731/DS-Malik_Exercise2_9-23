#include<iostream>
using namespace std;
int main(){
	long int elapsed_seconds;
	int rem, hours, minutes, seconds;
	cout<<"Enter elapsed time of an event in seconds: ";
	cin>>elapsed_seconds;
	hours = elapsed_seconds / 3600;
	rem = elapsed_seconds % 3600;
	minutes = rem / 60;
	seconds = rem % 60;
	cout<<endl<<elapsed_seconds<<" seconds are equals to "<<hours<<":"<<minutes<<":"<<seconds<<".";
}
