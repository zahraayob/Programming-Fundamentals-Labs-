#include <iostream>

using namespace std;

int main() {
    int qty = 25;
    int salesReps = 4;
    double unitEach;
    unitEach = static_cast<double>(qty) /
salesReps;

    cout << "Quantity: " << qty << endl;
    cout << "Sales Reps: " << salesReps << endl;
    cout << "Units Each : " << unitEach << endl;

    return 0;
}
