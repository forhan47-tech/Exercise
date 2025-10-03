#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string str, word, result;

    cout << "Enter a sentence: ";
    getline(cin, str); 

    cout << "Enter word to remove: ";
    cin >> word;

    stringstream ss(str);
    string temp;

    while (ss >> temp) { 
        if (temp != word) {
            result += temp + " "; // Add words except the one to remove
        }
    }

    cout << "Modified sentence: " << result << endl;
    return 0;
}
