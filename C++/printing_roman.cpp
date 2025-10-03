#include <iostream>
#include <string>
using namespace std;

string toRoman(int num) {
    string hundreds[] = {"", "C"};
    string tens[]     = {"", "X", "XX", "XXX", "XL", "L",
                         "LX", "LXX", "LXXX", "XC"};
    string ones[]     = {"", "I", "II", "III", "IV", "V",
                         "VI", "VII", "VIII", "IX"};

    return hundreds[num / 100] +
           tens[(num % 100) / 10] +
           ones[num % 10];
}

int main() {
    int num;
    
    cout << "Enter a number between 1 and 100: ";
    cin >> num;

    if (num < 1 || num > 100) {
        cout << "Invalid input! Please enter a number between 1 and 100." << endl;
    } else {
        cout << "Roman numeral: " << toRoman(num) << endl;
    }

    return 0;
}
