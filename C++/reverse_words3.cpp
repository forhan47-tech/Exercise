#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

void reverseEachWord(string& str) {
    stringstream ss(str);

    string word, result = "";
    while (ss >> word) {
        reverse(word.begin(), word.end()); // Reverse each word
        result += word + " ";
    }
    
    result.pop_back(); 
    str = result; 
}

int main() {
    string str = "Hello world from C++";
    reverseEachWord(str);
    cout << "Reversed words: " << str << endl;
    return 0;
}
