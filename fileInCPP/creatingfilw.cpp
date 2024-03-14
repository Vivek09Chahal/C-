#include<iostream> // Include the iostream library
#include<fstream> // Include the fstream library
using namespace std; // Use the standard namespace

int main(){
    ofstream file1; // Create an ofstream object

    file1.open("fileinCPP/creatingfile.txt"); // Open a file named "creatingfile.txt"

    if(file1.is_open()){ // If the file is open
        file1 << "This is a file created in C++"; // Write this text to the file
        file1.close(); // Close the file
    }
    else{
        cout << "File not created"; // If the file is not open, output this message
    }

    return 0; // Return 0 to indicate that the program has run successfully
}