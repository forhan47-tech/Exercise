#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int blanks = 0, tabs = 0, newlines = 0;

    cout << "Enter a line of text (\\n for newline, \\t for tab):\n";
    getline(cin, text);  

    for (char ch : text) {
        if (ch == ' ')
            ++blanks;
        else if (ch == '\t')
            ++tabs;
        else if (ch == '\n')
            ++newlines;
    }

    cout << "\nBlanks: " << blanks << "\n";
    cout << "Tabs: " << tabs << "\n";
    cout << "Newlines: " << newlines << "\n";
    return 0;
}
