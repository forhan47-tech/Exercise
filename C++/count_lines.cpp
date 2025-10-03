#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int lines = 0;

    cout << "Enter text (type Ctrl+D or Ctrl+Z to finish):" << endl;
    while (getline(cin, text)) {
        lines++;
    }

    cout << "\nTotal number of lines: " << lines << endl;
    return 0;
}
