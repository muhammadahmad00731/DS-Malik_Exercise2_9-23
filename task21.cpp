#include <iostream>
using namespace std;

int main() {
    double m1, m2, d;
    const double k = 6.67e-8; // Gravitational constant
    double F;
    cout << "Enter 1st  mass: ";
    cin >> m1;
    cout << "Enter 2nd  mass: ";
    cin >> m2;
    cout << "Enter distance: ";
    cin >> d;
    F = (k * (m1 * m2)) / (d * d);
    cout << "Force b/w 2 bodies is: " << F << endl;
}
