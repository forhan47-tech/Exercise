#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("input.txt");
    ofstream temp("temp.txt");

    int line_to_delete, current_line = 1;

    if (!file || !temp) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Enter line number to delete: ";
    cin >> line_to_delete;

    cin.ignore();  
 
    string line;
    while (getline(file, line)) {
        if (current_line != line_to_delete) {
            temp << line << endl;  // Write all lines except the one to delete
        }
        current_line++;
    }

    file.close();
    temp.close();

    remove("input.txt");
    rename("temp.txt", "input.txt");   
    
    cout << "Line " << line_to_delete << " deleted successfully." << endl;
    return 0;
}
