#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("example.txt");
    
    string line;
    int lineNumber = 0;

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    while (getline(file, line)) {
        lineNumber++;
        cout << "Line " << lineNumber << ": " << line << endl;
    }

    file.close();
    return 0;
}
