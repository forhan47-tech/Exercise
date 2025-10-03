#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string str, word, smallest, largest;

    cout << "Enter a string: ";
    getline(cin, str);

    stringstream ss(str);
    bool firstWord = true;

    while (ss >> word) {
        if (firstWord) {
            smallest = largest = word;
            firstWord = false;
        } else {
            if (word.length() < smallest.length())
                smallest = word;
            if (word.length() > largest.length())
                largest = word;
        }
    }

    cout << "\nSmallest word: " << smallest << endl;
    cout << "Largest word : " << largest << endl;
    return 0;
}
