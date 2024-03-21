#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Writing to the file

    fstream file1; // Create an ofstream object

    file1.open("creatingfile1.txt", ios::out); // Open a file named "creatingfile.txt"

    if (file1.is_open())
    {                                             // If the file is open
        file1 << "This is a file created in C++ \n"; // Write this text to the file
        file1.seekg(0, ios::beg);  // Reset the file pointer to the beginning of the file
    }
    else
    {
        cout << "File not created"; // If the file is not open, output this message
    }

    // Reading from the file

    string line;                        // Create a string variable
    if (file1.is_open())
    { // If the file is open
        while (getline(file1, line))
        {                         // While there's still text to read
            cout << line << endl; // Output the text to the console
        }
        file1.close(); // Close the file
    }
    else
    {
        cout << "File not created"; // If the file is not open, output this message
    }

    return 0;
}