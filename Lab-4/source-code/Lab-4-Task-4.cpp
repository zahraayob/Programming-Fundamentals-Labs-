#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;
    cout << "Enter Three numbers: ";
    cin >> n1 >> n2 >> n3;

    int largest;
    if (n1 >= n2) {
        if (n1 >= n3) {
            largest = n1;
        } else {
            largest = n3;
        }
    } else {
        if (n2 >= n3) {
            largest = n2;
        } else {
            largest = n3;
        }
    }

    cout << "Largest Number is: " << largest << endl;

    int num;
    cout << "\nEnter a number to check digits: ";
    cin >> num;

    if (num > 0) {
        cout << "Number is Positive" << endl;
        int count = 0;
        int temp = num;
        while (temp != 0) {
            temp = temp / 10;
            count++;
        }
        cout << "Number of digits: " << count << endl;
    } else {
        cout << "Number is not positive" << endl;
    }

    return 0;
}
