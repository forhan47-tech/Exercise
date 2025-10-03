#include <iostream>
#include <sstream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    string str = "Hello, this is a test string. Hello world!";
    unordered_set<string> uniqueWords;

    string word;
    stringstream ss(str);
    
    while (ss >> word) {
        uniqueWords.insert(word); // Store only unique words
    }

    cout << "Total unique words: " << uniqueWords.size() << endl;
    return 0;
}
