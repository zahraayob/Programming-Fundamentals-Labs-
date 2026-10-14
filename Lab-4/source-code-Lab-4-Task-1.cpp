#include <iostream>
using namespace std;
int main()
{
    double num;

    cout << "Enter a number: ";
    cin >> num;
    if (num>=0)
    {
        cout << "Number entered is positive" << endl;
    }
    else
    {
        cout << "Number entered is negative" << endl;
    }

    return 0;
}
