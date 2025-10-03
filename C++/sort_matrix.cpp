#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> matrix = {{3, 1, 2}, {9, 7, 5}, {6, 4, 8}};

    for (auto& row : matrix) {
        sort(row.begin(), row.end());  // Sort each row individually
    }

    cout << "Row-wise Sorted Matrix:\n";
    for (const auto& row : matrix) {
        for (int num : row) cout << num << " ";
        cout << endl;
    }

    return 0;
}

