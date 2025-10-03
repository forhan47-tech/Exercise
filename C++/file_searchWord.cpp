#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("input.txt");
    string line, word;

    int lineNumber = 0;
    bool found = false;

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Enter word to search: ";
    cin >> word;

    cout << "Searching for '" << word << "' in file..." << endl;
    while (getline(file, line)) {
        lineNumber++;
        if (line.find(word) != string::npos) {  // Check if word is in line
            cout << "Found '" << word << "' on line " << lineNumber << ": " << line << endl;
            found = true;
        }
    }

    file.close();

    if (!found) {
        cout << "Word '" << word << "' not found in file." << endl;
    }

    return 0;
}
