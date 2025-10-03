#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("input.txt");
    ofstream encrypted("encrypted.txt");
    
    char ch;
    int key = 7;  // Encryption key

    if (!source || !encrypted) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    while (source.get(ch)) {
        encrypted.put(ch ^ key);  // XOR encrypt each character
    }

    source.close();
    encrypted.close();

    cout << "File encrypted successfully!" << endl;
    return 0;
}
