#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello world, welcome to programming!";
    string oldWord = "world";
    string newWord = "Earth";

    size_t pos = str.find(oldWord);
    if (pos != string::npos) {
        str.replace(pos, oldWord.length(), newWord);
    }

    cout << "Updated string: " << str << endl;
    return 0;
}
