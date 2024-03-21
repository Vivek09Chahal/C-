#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file1;

    file1.open("fileInput.txt", ios::out);

    if (file1.is_open()) {
        cout << "Enter your input: \n ";

        string input;
        getline(cin, input); // Read input from the console
        file1 << input; // Write the input to the file
        file1.close(); // Close the file
        cout << "Input saved successfully!\n";
    } else {
        cout << "Error opening the file.\n";
    }

    return 0;
}