#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMajorityElement(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size() / 2];  // Middle element
}

int main() {
    vector<int> arr = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    cout << "Majority Element: " << findMajorityElement(arr) << endl;
    return 0;
}
