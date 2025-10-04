#include <iostream>
using namespace std;

int main() {
    int fixed_amount;
    cout << "Enter Fixed amount for Sales Person: ";
    cin >> fixed_amount;
    
    double commission_percentage;
    cout << "Enter Percentage of price of the car: ";
    cin >> commission_percentage;
    
    double car_cost;
    cout << "Enter the cost of the car: ";
    cin >> car_cost;
    
    double max_amount, min_amount;
    cout << "Enter maximum & minimum amount to add in cars cost: ";
    cin >> max_amount >> min_amount;
    
    double max_selling_price = car_cost + max_amount;
    double min_selling_price = car_cost + min_amount;
    
    double p_com_1 = fixed_amount + (max_selling_price * (commission_percentage / 100));
    double p_com_2 = fixed_amount + (min_selling_price * (commission_percentage / 100));
    
    cout << "Maximum Selling Price: " << max_selling_price << endl;
    cout << "Minimum Selling Price: " << min_selling_price << endl;
    cout << "Commission at Maximum Price: " << p_com_1 << endl;
    cout << "Commission at Minimum Price: " << p_com_2 << endl;
    
    return 0;
}
