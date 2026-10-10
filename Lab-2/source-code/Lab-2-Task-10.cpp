#include <iostream>
using namespace std;
int main() {
    float item1 = 12.95f;
    float item2 = 24.95f;
    float item3 = 6.95f;
    float item4 = 14.95f;
    float item5 = 3.95f;
    float subtotal, salestax, total;
    const float Tax_Rate = 0.06f;
    
    subtotal = item1 + item2 + item3 + item4 + item5;
    salestax = subtotal * Tax_Rate;
    total = subtotal + salestax;
    
    cout << "Price of item 1: $" << item1 << endl;
    cout << "Price of item 2: $" << item2 << endl;
    cout << "Price of item 3: $" << item3 << endl;
    cout << "Price of item 4: $" << item4 << endl;
    cout << "Price of item 5: $" << item5 << endl;
    cout << "Subtotal of the sale: $" << subtotal << endl;
    cout << "Amount of sale tax (6%): $" << salestax << endl;
    cout << "Total: $" << total << endl;
    return 0;
}
