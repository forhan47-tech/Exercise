#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ifstream file("input.txt");
    ofstream temp("sorted.txt");

    vector<string> lines;
    string line;

    if (!file || !temp) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    while (getline(file, line)) {
        lines.push_back(line); // Read lines into vector
    }

    file.close();

    sort(lines.begin(), lines.end()); // Sort lines alphabetically

    for (const auto &l : lines) {
        temp << l << endl;
    }
    
    temp.close();

    cout << "Lines sorted successfully in sorted.txt." << endl;
    return 0;
}
