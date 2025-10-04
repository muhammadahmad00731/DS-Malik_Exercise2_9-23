#include <iostream>
using namespace std;

int main() {
    const int metric_Ton = 2205;
    double bag_capacity;
    int bags_required;
    cout << "Enter amount of rice a bag can store (in pounds): ";
    cin >> bag_capacity;
    bags_required = (int(metric_Ton / bag_capacity) + 1);
    cout << "Total bags required are: " << bags_required << endl;
}
