#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello world, welcome to C++ programming!";
    string word = "world";

    if (str.find(word) != string::npos) {
        cout << "Word found!" << endl;
    } else {
        cout << "Word not found!" << endl;
    }

    return 0;
}
