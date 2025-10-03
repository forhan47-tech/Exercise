#include <iostream>
#include <string>
using namespace std;

int main() {
    string source, destination;

    cout << "Enter a string: ";
    getline(cin, source); 

    for (char ch : source) {
        destination += ch; // Append each character manually
    }

    cout << "Copied string: " << destination << endl;
    return 0;
}
