#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "Hello world from C++";

    stringstream ss(str); 
    string word;

    while (ss >> word) { 
        cout << word << endl; // Extract each word
    }

    return 0;
}
