#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str = "Hello World from C++";
    stringstream ss(str);
    vector<string> words;

    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    reverse(words.begin(), words.end()); // Reverse the order of words

    for (const auto &w : words) {
        cout << w << " "; 
    }

    cout << endl; 
    return 0;
}
