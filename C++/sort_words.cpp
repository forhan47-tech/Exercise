#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string words[100];     
    int n;
    
    cout << "Enter number of strings: ";
    cin >> n;

    cin.ignore();

    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, words[i]);
    }

    sort(words, words + n); // Sort using STL sort

    cout << "\nSorted strings:\n";
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}
