#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);  

    if (!str.empty() && str.back() == '\n')
        str.pop_back();

    cout << "\nString after removing trailing newline:\n" << str << endl;
    return 0;
}
