#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void reverseWords(string str) {
    stringstream ss(str);
    vector<string> words;

    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i] << " ";
    }
    cout << endl;
}

int main() {
    string str = "Hello world from C++";
    reverseWords(str);
    return 0;
}
