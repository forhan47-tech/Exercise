#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, result;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    for (char ch : str1)
        result += ch; // Manual character-wise concatenation
    for (char ch : str2)
        result += ch;

    cout << "\nConcatenated string: " << result << endl;
    return 0;
}
