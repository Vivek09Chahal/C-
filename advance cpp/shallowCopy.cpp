#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int breadth;
    int height;

public:
    void set_dimensions(int len, int bre, int hei) {
        length = len;
        breadth = bre;
        height = hei;
    }

    void show_data() {
        cout << "Length = " << length << "\nBreadth = " << breadth << "\nHeight = " << height << endl;
    }
};

int main() {
    Box box1, box3;
    box1.set_dimensions(14, 12, 16);
    box1.show_data();

    Box box2 = box1; // Shallow copy
    box2.show_data();

    box3 = box1; // Shallow copy
    box3.show_data();

    return 0;
}
