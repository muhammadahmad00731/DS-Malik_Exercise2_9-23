#include<iostream>
using namespace std;
int main(){
	double size;
	cout<<"Enter size of the hard-drive (in GBs): ";
	cin>>size;
	double actual_size = (size * 1e9) / 1073741824.0;
	cout<<"\nActual Size : "<<actual_size<<"gb";
}
