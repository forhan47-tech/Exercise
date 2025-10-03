#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello,World Programming,Is Fun";
    string word;

    for (char ch : str) {
        if (ch == ' ' || ch == ',') {
            if (!word.empty()) {
                cout << word << endl;
                word.clear();
            }
        } else {
            word += ch;
        }
    }

    if (!word.empty()) {
        cout << word << endl;  // Print the last word
    }

    return 0;
}
