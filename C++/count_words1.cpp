#include <iostream>
#include <sstream>
using namespace std;

int countWords(const string& str) {
    stringstream ss(str);
    int count = 0;

    string word;
    while (ss >> word) {
        count++;
    }
    
    return count;
}

int main() {
    string sentence = "C++ is powerful!";
    cout << "Word count: " << countWords(sentence) << endl;
    return 0;
}
