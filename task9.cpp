#include<iostream>
using namespace std;
int main(){
	double avg, test1, test2, test3, test4, test5;
	cout<<"Enter of 1st test score: ";
	cin>>test1;
	cout<<"\nEnter 2nd test score: ";
	cin>>test2;
	cout<<"\nEnter 3rd test score: ";
	cin>>test3;
	cout<<"\nEnter 4th test score: ";
	cin>>test4;
	cout<<"\nEnter 5th test score: ";
	cin>>test5;
	avg = (test1+test2+test3+test4+test5) / 5;
	cout<<"\nAverage test score is: "<<avg;
}
