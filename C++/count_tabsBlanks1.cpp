#include <iostream>
using namespace std;

int main() {
    char ch;
    int blanks = 0, tabs = 0, newlines = 0;

    cout << "Enter text (Press Ctrl+D to end input on Linux/macOS, Ctrl+Z then Enter on Windows):" << endl;
    while (cin.get(ch)) {
        if (ch == ' ')
            blanks++;
        else if (ch == '\t')
            tabs++;
        else if (ch == '\n')
            newlines++;
    }

    cout << "\nBlanks: " << blanks << endl;
    cout << "Tabs: " << tabs << endl;
    cout << "Newlines: " << newlines << endl;
    return 0;
}
