#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {3, 5, 3, 7, 5, 5, 7, 3};
    map<int, int> freq;

    for (int num : arr) {
        freq[num]++;
    }

    cout << "Element Frequency:\n";
    for (auto pair : freq) {
        cout << pair.first << " appears " << pair.second << " times\n";
    }

    return 0;
}
