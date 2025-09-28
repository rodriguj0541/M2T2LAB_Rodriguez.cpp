/*
CSC 134
M2T2 – Receipt Calculator
Josue Rodriguez
9/28/25
*/

#include <iostream>
#include <iomanip>     // for fixed and setprecision
using namespace std;

int main() {
    // Purpose: Create a simple receipt with 8% sales tax

    // Declare variables
    string item = "🍕Pizza";      // item name
    double item_price = 5.99;   // price before tax
    double tax_percent = 0.08;  // 8% tax
    double tax_amount;          // tax in dollars
    double total;               // total cost

    // Greet user and show order
    cout << "Welcome to our CSC 134 Restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;

    // Calculate sales tax and total
    tax_amount = item_price * tax_percent;
    total      = item_price + tax_amount;

    // Print the receipt
    cout << fixed << setprecision(2); // format dollars to 2 decimals
    cout << "\n--- Receipt ---" << endl;
    cout << "Item price:  $" << item_price << endl;
    cout << "Tax (8%):    $" << tax_amount << endl;
    cout << "Total:       $" << total << endl;

    return 0;
}
