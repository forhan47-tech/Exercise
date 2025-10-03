#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("sample.txt");
    
    if (!file) {
        cout << "Error opening file." << endl;
        return 1;
    }

    int totalLines = 0, emptyLines = 0;
    string line;

    while (getline(file, line)) {  
        totalLines++;
        if (line.empty()) emptyLines++;  // Count empty lines
    }

    file.close();

    cout << "Total lines: " << totalLines << endl;
    cout << "Empty lines: " << emptyLines << endl;
    return 0;
}
