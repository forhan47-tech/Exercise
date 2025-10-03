#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    int count = 0;
    for (char ch : input) {
        count++;
    }

    cout << "Total number of characters: " << count << endl;
    return 0;
}
