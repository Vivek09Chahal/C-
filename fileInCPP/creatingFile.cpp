#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Declare an instance of the fstream class
    fstream myFile;

    // Open the file in writing mode
    myFile.open("creatingFile.txt", ios::out);

    if (myFile.is_open()) {
        // Write some content to the file
        myFile << "Hello, this is my first text file!\n";
        myFile << "You can add more lines here.\n";

        // Close the file
        myFile.close();
        cout << "File created successfully. Check 'creatingFile.txt'.\n";
    } else {
        cout << "Error creating the file.\n";
    }

    return 0;
}