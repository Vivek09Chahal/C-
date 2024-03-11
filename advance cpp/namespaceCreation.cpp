#include <iostream>
using namespace std;

// Create a namespace named "my_namespace"
namespace my_namespace {
    int my_variable = 42; // Declare an integer variable inside the namespace
}

using namespace my_namespace;

int main() {
    // Declare a variable with the same name outside the namespace
    //int my_variable = 10;

    // Access the variable from the custom namespace
    cout << "Value from my_namespace: " << my_variable << endl;
    cout << "Value from main: " << my_variable << endl;

    return 0;
}