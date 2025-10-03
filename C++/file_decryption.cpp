#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream encrypted("encrypted.txt");
    ofstream decrypted("decrypted.txt");
    
    char ch;
    int key = 7;  // Same key used in encryption

    if (!encrypted || !decrypted) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    while (encrypted.get(ch)) {
        decrypted.put(ch ^ key);  // XOR decrypt each character
    }

    encrypted.close();
    decrypted.close();

    cout << "File decrypted successfully!" << endl;
    return 0;
}
