#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream file("data.txt");
    int words = 0, characters = 0;

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    char ch;
    while (file.get(ch)) {
        characters++; // Count each character
    }

    file.clear();  
    file.seekg(0, ios::beg); // Reset file stream to read words

    string word;
    while (file >> word) {
        words++; // Count words
    }

    file.close();

    cout << "Total characters: " << characters << endl;
    cout << "Total words: " << words << endl;
    return 0;
}
