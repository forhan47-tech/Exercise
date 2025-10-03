#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    cout << "ASCII value of " << ch << " is " << static_cast<int>(ch) << endl;

    cout << "Uppercase Letters and ASCII Codes:\n";
    for (ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " = " << static_cast<int>(ch) << endl;
    }

    cout << "\nLowercase Letters and ASCII Codes:\n";
    for (ch = 'a'; ch <= 'z'; ch++) {
        cout << ch << " = " << static_cast<int>(ch) << endl;
    }

    return 0;
}
