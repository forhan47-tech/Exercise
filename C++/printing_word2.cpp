#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Enter comma-separated text:\n";
    getline(cin, text);
    stringstream ss(text);

    string word;
    while (getline(ss, word, ',')) {
        cout << word << endl;
    }
    return 0;
}
