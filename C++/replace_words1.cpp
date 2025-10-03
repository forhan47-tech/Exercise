#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sentence = "The cat sat on the cat mat.";
    string oldWord = "cat";
    string newWord = "dog";

    stringstream ss(sentence);
    string word, result = "";

    while (ss >> word) {
        if (word == oldWord) {
            result += newWord + " "; // Fixed missing semicolon
        } else {
            result += word + " "; // Avoid appending original word again
        }
    }
    result.pop_back(); // Remove trailing space
    
    cout << "Updated Sentence: " << result << endl;
    return 0;
}
