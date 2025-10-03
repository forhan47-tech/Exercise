#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "apple banana apple orange apple";
    string target = "apple";
    stringstream ss(str); 
    int count = 0;

    string word;
    while (ss >> word) { // Extract words manually
        if (word == target) 
            count++;
    }

    cout << "Word '" << target << "' appears " << count << " times." << endl;
    return 0;
}
