#include <iostream>
#include <unordered_map>
#include <sstream>
using namespace std;

int main() {
    string str = "welcome to the world of C++ programming C++ is fun and C++ is powerful";
    unordered_map<string, int> wordFreq;

    stringstream ss(str);
    string word;

    while (ss >> word) {  
        wordFreq[word]++;
    }

    cout << "\nWord Frequencies:\n";
    for (const auto &pair : wordFreq) {
        cout << pair.first << " -> " << pair.second << " times\n";
    }

    return 0;
}
