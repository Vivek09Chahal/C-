#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int* breadth; // Dynamically allocated memory

public:
    Box() {
        breadth = new int;
    }

    void set_dimension(int len, int bre, int hei) {
        length = len;
        *breadth = bre;
        // Height remains unchanged
    }

    void show_data() {
        cout << "Length = " << length << "\nBreadth = " << *breadth << endl;
    }

    // Copy constructor for deep copy
    Box(const Box& sample) {
        length = sample.length;
        breadth = new int;
        *breadth = *(sample.breadth);
    }

    // Destructor to free dynamically allocated memory
    ~Box() {
        delete breadth;
    }
};

int main() {
    Box box1, box3;
    box1.set_dimension(14, 12, 16);
    box1.show_data();

    Box box2 = box1; // Deep copy
    box2.show_data();

    box3 = box1; // Deep copy
    box3.show_data();

    return 0;
}
