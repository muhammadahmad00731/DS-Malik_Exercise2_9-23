#include <iostream>
using namespace std;

int main() {
    double rate, hours;
    cout << "Enter hourly pay rate: ";
    cin >> rate;
    cout << "Enter hours worked per week: ";
    cin >> hours;

    double gross = rate * hours * 5;
    double net = gross - (gross * 0.14);

    double clothes = net * 0.10;
    double supplies = net * 0.01;
    double bonds = (net - clothes - supplies) * 0.25;
    double parents = bonds * 0.50;

    cout << "\nGross income = $" << gross << endl;
    cout << "Net income = $" << net << endl;
    cout << "Clothes = $" << clothes << endl;
    cout << "Supplies = $" << supplies << endl;
    cout << "Savings bonds = $" << bonds << endl;
    cout << "Parents bonds = $" << parents << endl;
    return 0;
}
