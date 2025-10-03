#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
using namespace std;

int main() {
    ifstream file("input.txt");
    
    unordered_map<string, int> wordCount;
    string line, word;

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    while (getline(file, line)) {
        stringstream ss(line);
        while (ss >> word) {
            wordCount[word]++; // Increment word frequency
        }
    }

    file.close();

    cout << "Word Frequencies:\n";
    for (const auto& pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
