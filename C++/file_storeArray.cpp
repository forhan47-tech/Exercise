#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream file("input.txt");

    vector<string> lines;  
    string line;

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    while (getline(file, line)) {
        lines.push_back(line);  // Store each line in the vector
    }

    file.close();

    cout << "File content stored in array:\n";
    for (const auto &l : lines) {
        cout << l << endl;  
    }

    return 0;
}
