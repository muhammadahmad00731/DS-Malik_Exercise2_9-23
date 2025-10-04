#include <iostream>
using namespace std;

int main() {
    const double commission_rate = 0.015;
    int selling_amount;
    double buying_price, selling_price;
    
    cout << "No. of shares Sold: ";
    cin >> selling_amount;
    
    cout << "Enter buying & selling price: ";
    cin >> buying_price >> selling_price;
    
    double amount_paid = buying_price * selling_amount;
    double buying_commission = amount_paid * commission_rate;
    double total_paid = amount_paid + buying_commission;
    
    double amount_received = selling_price * selling_amount;
    double selling_commission = amount_received * commission_rate;
    double total_received = amount_received - selling_commission;
    
    double profit = total_received - total_paid;
    
    cout << "Total amount invested is: " << total_paid << endl;
    cout << "Total profit: " << profit << endl;
    cout << "Total amount received after selling: " << total_received << endl;
}
