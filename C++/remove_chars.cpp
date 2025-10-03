#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result;
    char removeChar;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter character to remove: ";
    cin >> removeChar;

    for (char ch : str) {
        if (ch != removeChar) {
            result += ch; // Append all except the unwanted character
        }
    }

    cout << "Modified string: " << result << endl;
    return 0;
}
