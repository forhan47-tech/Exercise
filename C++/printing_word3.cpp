#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string str = "Hello,World Programming";
    stringstream ss(str);

    string temp, word;
    while (getline(ss, temp, ' ')) {
        stringstream inner(temp);
        while (getline(inner, word, ',')) {
            cout << word << endl;
        }
    }
    
    return 0;
}
