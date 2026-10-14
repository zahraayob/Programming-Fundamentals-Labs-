#include <iostream>

using namespace std;

int main() {
    int marks;
    cout << "Enter your mark: ";
    cin >> marks;
    if (marks >= 75) {
        cout << "Score will be A" << endl;
    }
    else if (marks < 75 && marks >= 60) {
        cout << "Score will be B" << endl;
    }
    else if (marks < 60 && marks >= 45) {
        cout << "Score will be C" << endl;
    }
    else if (marks < 30) {
        cout << "Score will be D" << endl;
    }

    return 0;
}
