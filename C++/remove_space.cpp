#include <iostream>
#include <sstream>
using namespace std;

string removeSpaces(const string& str) {
    stringstream ss(str);

    string word, result;
    while (ss >> word) {
        result += word;
    }
    
    return result;
}

int main() {
    string input = "C++   is   fun!";
    cout << "Without spaces: " << removeSpaces(input) << endl;
    return 0;
}
