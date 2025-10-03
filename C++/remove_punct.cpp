#include <iostream>
#include <cctype>
using namespace std;

string removePunctuation(string str) {
    string result = "";
    
    for (char ch : str) {
        if (!ispunct(ch)) { 
            result += ch;
        }
    }

    return result;
}

int main() {
    string str = "Hello, world! Welcome to C++.";
    cout << "Cleaned string: " << removePunctuation(str) << endl;
    return 0;
}
