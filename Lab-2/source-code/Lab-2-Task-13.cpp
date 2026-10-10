#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a lowercase alphabet(a-z):";
    cin >> ch;
    cout << "Upper case: " << (char)toupper(ch) << endl;
    return 0;
}
