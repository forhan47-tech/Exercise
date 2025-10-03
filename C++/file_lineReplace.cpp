#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("input.txt");
    ofstream temp("temp.txt");

    string line, new_line;
    int line_to_replace, current_line = 1;

    if (!file || !temp) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Enter line number to replace: ";
    cin >> line_to_replace;

    cin.ignore(); 

    cout << "Enter new line content: ";
    getline(cin, new_line);

    while (getline(file, line)) {
        if (current_line == line_to_replace) {
            temp << new_line << endl;  // Write replacement line
        } else {
            temp << line << endl;  // Copy other lines unchanged
        }
        current_line++;
    }

    file.close();
    temp.close();

    remove("input.txt");
    rename("temp.txt", "input.txt");

    cout << "Line " << line_to_replace << " replaced successfully." << endl;
    return 0;
}
