#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file1("file1.txt"), file2("file2.txt");
    ofstream merged("merged.txt");
    string line;

    if (!file1 || !file2 || !merged) {
        cout << "Error opening file." << endl;
        return 1;
    }

    while (getline(file1, line)) {
        merged << line << endl; // Copy file1 content to merged file
    }

    while (getline(file2, line)) {
        merged << line << endl; // Copy file2 content to merged file
    }

    file1.close();
    file2.close();
    merged.close();

    cout << "Files merged successfully." << endl;
    return 0;
}
