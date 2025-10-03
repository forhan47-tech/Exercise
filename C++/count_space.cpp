#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string str = "C++ is fun!";
    int spaceCount = 0;

    for (char ch : str) {
        if (isspace(ch)) spaceCount++;
    }

    cout << "Number of spaces: " << spaceCount << endl;
    return 0;
}

