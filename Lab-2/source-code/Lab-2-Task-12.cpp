#include <iostream>
using namespace std;

int main() {
    int var1 = 30, var2 = 40, temp;
    
    // swapping logic
    temp = var1;
    var1 = var2;
    var2 = temp;
    
    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;
    
    return 0;
}
